//program to reverse the digits of a number using recursive function

#include <stdio.h>

int reverse(int num, int sum) {
    if (num == 0) {
        return sum;
    } else {
        int rem = num % 10;
        sum = sum * 10 + rem;
        return reverse(num / 10, sum);
    }
}

int main() {
    int num, rno = 0;
    printf("Enter any number: ");
    scanf("%d", &num);

    rno = reverse(num, 0);
    printf("The reverse of the entered number is %d", rno);

    return 0;
}
