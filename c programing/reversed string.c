#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    printf("Enter string: ");
    scanf("%s", str);

    int i = 0, j = strlen(str)-1;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++; j--;
    }

    printf("Reversed: %s", str);
    return 0;
}

