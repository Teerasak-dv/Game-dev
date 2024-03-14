#include <stdio.h>

int main() {
    char name[100];
    printf("Enter your name (Eng) > ");
    fgets(name, sizeof(name), stdin);
    printf("Your name is %s", name);

    return 0;
}