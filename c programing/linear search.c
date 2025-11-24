#include <stdio.h>

int main() {
    int a[50], n, key;
    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);

    printf("Enter key: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            printf("Found at position %d", i+1);
            return 0;
        }
    }
    printf("Not Found");
    return 0;
}

