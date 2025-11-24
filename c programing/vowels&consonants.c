#include <stdio.h>

int main() {
    char str[100];
    int v=0, c=0;

    printf("Enter string: ");
    scanf("%s", str);

    for(int i=0; str[i]; i++) {
        char ch = str[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            v++;
        else
            c++;
    }

    printf("Vowels = %d, Consonants = %d", v, c);
    return 0;
}

