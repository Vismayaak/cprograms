#include <stdio.h>
#include <math.h>
int main() {
    int num, temp, digit, sum = 0, length = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0) {
        length++;
        temp=temp/ 10;
    }
    temp = num;
    while (temp != 0) {
        digit = temp % 10;
        sum =sum+ pow(digit, length);
        temp =temp/ 10;
        length--;
    }
    if (sum == num) {
        printf("%d is a Disarium number\n", num);
    } else {
        printf("%d is not a Disarium number\n", num);
    }

    return 0;
}