#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char str[MAX_LENGTH];
    int i, len;
    
    printf("Enter a string: ");
    fgets(str, MAX_LENGTH, stdin);
    len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    printf("Reversed string: %s\n", str);
    
    return 0;
}
