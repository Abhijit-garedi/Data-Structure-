// write a c program to reverse the digits of a number using recursive function
//
 #include <stdio.h> 

  
  int reverse(int num, ){
  int sum = 0, rem;
  
    if(num)
    {
        rem = num % 10;
        sum = sum *10 + rem;
        
        return sum + reverse(num/10);
    }
    else
    {
    return sum; 
  }
  }

  int main()
{
    int num;
    printf("enter any numbers:");
    scanf("%d", &num);


//here rno means reversed num 
  int reversed_num  = reverse(num);

    printf("The reverse of entered number is %d", reversed_num);
    return 0;

}