#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, digits = 0, sum = 0;
    printf("Enter number: ");
    scanf("%d", &num);

    temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp > 0) {
        int r = temp % 10;
        sum += pow(r, digits);
        temp /= 10;
    }

    if (sum == num)
        printf("Armstrong Number");
    else
        printf("Not Armstrong");

    return 0;
}

