// program to print 1 to n numbers without using any loop

 #include <stdio.h>

void printNumbers(int i, int n) { // function declaration
    if(i <= n) 
    { // condition for printing numbers up to n
        printf("%d\t", i);
        printNumbers(i + 1, n); //  function call for recursion
    }
}

int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Numbers up to %d are: ", n);
    printNumbers(1, n); // function call

    return 0;
}
