#include <stdio.h> 
  int sum=0, rem;
  int reverse(int num)
  {
    if(num)
    {
        rem = num%10;
        sum = sum*10+rem;
        reverse(num/10);
    }
    else
    {
    return sum;
  }
  }

  int main()
{
    int num,rno;
    printf("enter any numbers:");
    scanf("%d",&num);

    rno = reverse(num);

    printf("The reverse of entered number is %d", rno);
    return 0;
    
}