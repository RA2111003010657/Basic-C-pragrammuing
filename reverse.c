 #include <stdio.h>
int main()
{
 int number,rev=0;
 printf("Enter the number to be reversed");
 scanf("%d",&number);
 int originalnumb=number;
 while (number>0)
  {
     int rem=number%10;
     rev=rev*10+rem;
     number=number/10;
  }
 printf("The reverse of %d is %d",originalnumb,rev);
return 0;
    }

