#include <stdio.h>
#include "readline.h"

#define TITLE_LEN 24
#define AUTHOR_LEN 24
#define DESIGN_LEN 24

#define MAX_ITEMS 10

struct catalog_item {
    int stock_number;
    float price;
    int item_type;
    union {
        struct {
            char title[TITLE_LEN+1];
            char author[AUTHOR_LEN+1];
            int num_pages;
        } book;
        struct {
            char design[DESIGN_LEN+1];
        } mug;
        struct {
            char design[DESIGN_LEN+1];
            int colors;
            int sizes;
        } shirt;
    } item;
};

struct catalog_item catalog[MAX_ITEMS];
int num_items = 0;

int find_item(int);
void insert(void);
void search(void);
void update(void);
void print(void);

int main(void) {
    char code;

    for (;;) {
        printf("Operation (i/s/u/p/q): ");
        scanf("%c", &code);
        while (getchar() != '\n')
            ;
        switch (code) {
            case 'i':
                insert();
                break;
            case 's':
                search();
                break;
            case 'u':
                update();
                break;
            case 'p':
                print();
                break;
            case 'q':
                return 0;
            default:
                printf("Invalid operation.\n");
                break;
        }
    }
    return 0;
}

int find_item(int stock_number) {
    int i;

    for (i = 0; i < num_items; i++) {
        if (catalog[i].stock_number == stock_number) {
            return i;
        }
    }

    return -1;
}

void insert(void) {
    int stock_number;
    struct catalog_item new_item;

    if (num_items == MAX_ITEMS) {
        printf("Database full.\n");
        return;
    }

    printf("Stock number: ");
    scanf("%d", &stock_number);
    if (find_item(stock_number) >= 0) {
        printf("Item already exists.\n");
        return;
    }
    new_item.stock_number = stock_number;

    printf("Price: ");
    scanf("%f", &new_item.price);

    do {
        printf("Item type: ");
        scanf("%d", &new_item.item_type);
    } while (new_item.item_type < 0 ||
                new_item.item_type > 3);

    switch(new_item.item_type) {
        case 0:
            printf("Title: ");
            read_line(new_item.item.book.title, TITLE_LEN+1);
            printf("Author: ");
            read_line(new_item.item.book.author, AUTHOR_LEN+1);
            printf("Number of pages: ");
            scanf("%d", &new_item.item.book.num_pages);
            break;
        case 1:
            printf("Design: ");
            read_line(new_item.item.mug.design, DESIGN_LEN+1);
            break;
        case 2:
            printf("Design: ");
            read_line(new_item.item.shirt.design, DESIGN_LEN+1);
            printf("Colors: ");
            scanf("%d", &new_item.item.shirt.colors);
            printf("Sizes: ");
            scanf("%d", &new_item.item.shirt.sizes);
            break;
    }

    catalog[num_items++] = new_item;
    printf("Item added successfully. %d %s in database\n\n", num_items, num_items == 1 ? "item" : "items");
}

void search(void) {
    int i, stock_number;

    printf("Stock number: ");
    scanf("%d", &stock_number);
    i = find_item(stock_number);
    if (i >= 0) {
        printf("Stock No: %d\n", catalog[i].stock_number);
        printf("Price: %.2f\n", catalog[i].price);
        printf("Item Type: ");
        switch (catalog[i].item_type) {
            case 0:
                puts("Book");
                printf("Title: %s\n", catalog[i].item.book.title);
                printf("Author: %s\n", catalog[i].item.book.author);
                printf("Pages: %d\n", catalog[i].item.book.num_pages);
                break;
            case 1:
                puts("Mug");
                printf("Design: %s\n", catalog[i].item.mug.design);
                break;
            case 2:
                puts("Shirt");
                printf("Design: %s\n", catalog[i].item.shirt.design);
                printf("Colors: %d\n", catalog[i].item.shirt.colors);
                printf("Sizes: %d\n", catalog[i].item.shirt.sizes);
                break;
        }
    } else {
        puts("No such item.");
    }
}

void update(void) {
    int i, stock_number, change;

    printf("Item number: ");
    scanf("%d", &stock_number);
    i = find_item(stock_number);
    if (i >= 0) {
        printf("Change in price: ");
        scanf("%d", &change);
        catalog[i].price += change;
    } else {
        printf("No such item.\n");
    }
}

void print(void) {
    int i;

    printf("Stock No.\tPrice\tType");
    for (i = 0; i < num_items; i++) {
        printf("%d\t\t%.2f\t%s\n", catalog[i].stock_number, catalog[i].price,
                catalog[i].item_type == 0 ? "Shirt" : (catalog[i].item_type == 1 ? "Mug" : (catalog[i].item_type == 2 ? "Shirt" : "Unknown")));
    }
    puts("");
}
