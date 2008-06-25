struct t {
    int willy;
};

void insert(void);
void search(void);
void update(void);
void print(void);

char *(*p)(char *);
void (*f(struct t *, long n))(void);
void (*a[4])(void) = {insert, search, update, print};
struct t (*b[10])(int, int);

int main(void) {
    return 0;
}

void insert(void) {}
void search(void) {}
void update(void) {}
void print(void) {}
