#include<stdio.h>
int main()
{
int a=12,b=25;
printf("before swapping a=%d b=%d",a,b);
a=a+b;//a=37(12+25)
b=a-b;//b=12(37-25)
a=a-b;//a=25(37-12)
printf("\nafter swapping a=%d b=%d",a,b);
return 0;
}
