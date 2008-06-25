typedef void Fcn(int);
typedef Fcn *Fcn_ptr_to_fcn(int, void (*)(int));
typedef Fcn_ptr_to_fcn x;

int main(void) {
    return 0;
}
