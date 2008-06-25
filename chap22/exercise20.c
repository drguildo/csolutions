#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#define NAME_LEN 25
#define MAX_PARTS 100

struct part {
  int number;
  char name[NAME_LEN+1];
  int on_hand;
} inventory[MAX_PARTS], tmp;

int num_parts, num_new_parts;

void print(void);

int main(int argc, char *argv[]) {
    FILE *in1, *in2, *out;
    int i, duplicate;

    /* I got sick of all those multi-line if() statements. */
    assert(argc == 4);
    assert((in1 = fopen(argv[1], "rb")) != NULL);
    assert((in2 = fopen(argv[2], "rb")) != NULL);
    assert((out = fopen(argv[3], "w+b")) != NULL);
    assert((num_parts = getc(in1)) != EOF);

    fread(inventory, sizeof(struct part), num_parts, in1);

    assert((num_new_parts = getc(in2)) != EOF);

    while (num_new_parts--) {
        duplicate = 0;
        fread(&tmp, sizeof(struct part), 1, in2);
        for (i = 0; i < num_parts; i++) {
            if (inventory[i].number == tmp.number) {
                fprintf(stderr, "Skipping %s with duplicate ID %d.\n",
                    tmp.name, tmp.number);
                duplicate = 1;
                break;
            }
        }
        if (!duplicate) {
            inventory[num_parts++] = tmp;
        }
    }

    print();

    return 0;
}

void print(void) {
  int i;

  printf("Part Number   Part Name                  "
         "Quantity on Hand\n");
  for (i = 0; i < num_parts; i++)
    printf("%7d       %-25s%11d\n", inventory[i].number,
           inventory[i].name, inventory[i].on_hand);
}
