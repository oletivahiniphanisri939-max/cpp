#include <stdio.h>

int main() {
    int a[50], n;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);

    printf("Array without duplicates: ");

    for(int i=0;i<n;i++) {
        int flag = 0;
        for(int j=0;j<i;j++)
            if(a[i] == a[j])
                flag = 1;

        if(!flag)
            printf("%d ", a[i]);
    }
    return 0;
}

