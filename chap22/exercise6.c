#include <stdio.h>

int main(void) {
    int widget;

    for (widget = 1; widget <= 5; widget++) {
        printf("%d %s\n", widget, widget == 1 ? "widget" : "widgets" );
    }

    return 0;
}
