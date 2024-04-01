// program to solve the towers of Hanoi problem using recursive functions

#include <stdio.h>

void towers(int num, char from, char to, char aux);

int main() {
    int num;
    printf("Enter the number of disks: ");
    scanf("%d", &num);

    printf("The sequence of moves involved in the Tower of Hanoi are:\n");
    
    towers(num, 'A', 'C', 'B');
    return 0;
}

void towers(int num, char from, char to, char aux) {
    if (num == 1) {
        printf("Move disk 1 from peg %c to peg %c\n", from, to);
        return;
    }
    towers(num - 1, from, aux, to);
    printf("Move disk %d from peg %c to peg %c\n", num, from, to);
    towers(num - 1, aux, to, from);
}
