#include <stdio.h>
void swap(int  , int );
int main()
{
  int a , b;
  printf("enter the values of a and b\n");
  scanf("%d%d" , &a,&b);
  printf("\n before swap: \n a= %d  \n b= %d\n " ,a, b);
  swap(a,b);
  return 0;
}
void swap(int x , int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;

    printf("\n After swap \n x = %d \n y = %d\n", x, y);
}
