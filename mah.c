#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter the first letter of your name: ");
    ch = getchar();
    // scanf("%c", &ch); // This line can be used instead of getchar()

    if (ch == 'A') {
        printf("\nYour name is Anto");
    } else if (ch == 'F') { // This line was commented out, but it should be included
        printf("\nYour name is Fahim");
    } else if (ch == 'M') {
        printf("\nYour name is Mahfuz");
    } else if (ch == 'T') {
        printf("\nYour name is Tanim");
    } else {
        printf("\nSorry, I don't know your name.");
    }

    return 0;
}
