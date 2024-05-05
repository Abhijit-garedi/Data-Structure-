// A c program to print 1 to n number without using any loop

 #include <stdio.h> 
  void print(int i,  int n)
   {
    if(i <= n)
    {
      printf("%d\t", i);
      print(i+1, n);
    }
   }
   

   int main()
   {
    int n;
    printf("enter a number:");
    scanf("%d", &n);
    
    printf("Number upto %d are :", n);
    print(1, n);
    return 0;
   }
