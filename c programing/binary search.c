#include <stdio.h>

int main() {
    int a[50], n, key, low=0, high, mid;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter sorted elements: ");
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);

    high = n-1;

    printf("Enter key: ");
    scanf("%d", &key);

    while (low <= high) {
        mid = (low + high)/2;

        if (a[mid] == key) {
            printf("Found at position %d", mid+1);
            return 0;
        }
        else if (a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("Not Found");
    return 0;
}

