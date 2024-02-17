#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>

int main() {
    char *input;

    input = readline("Enter a command: ");

    if (input != NULL) {
        printf("You entered: %s\n", input);
        add_history(input);
        free(input);
    }

    // Geçmişi temizle
    rl_clear_history();

    rl_on_new_line();
    return 0;
}
