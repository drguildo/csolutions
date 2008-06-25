#include <stdio.h>
#include <string.h>

void call_cmd(const char *);
void new_cmd(void);
void open_cmd(void);

struct {
    char *cmd_name;
    void (*cmd_pointer)(void);
} file_cmd[] =
    {{"new",  new_cmd},
     {"open", open_cmd}
    };

int main(void) {
    call_cmd("new");
    call_cmd("wank");
    return 0;
}

void call_cmd(const char *cmd) {
    int i;

    for (i = 0; i < 2; i++) {
        if (strcmp(cmd, file_cmd[i].cmd_name) == 0) {
            puts("found match");
            file_cmd[i].cmd_pointer();
            return;
        }
    }

    puts("failed to find match");
}

void new_cmd(void) {
    puts("new_cmd() called");
}

void open_cmd(void) {
    puts("open_cmd() called");
}
