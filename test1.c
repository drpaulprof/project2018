#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>

int  add(int x,int y)
{
  printf("\n I am in function");
  int a;
  int b;
  int sum =0;
  a = x;
  b = y;
  assert((x - y) != 0);
  sum = a + b;
  return sum;
    }
    
int main(){
  float a1,a2;
  int x,y;
  a1 = 0;
  a2 =0;
   printf("\n I am inside main");
  printf("Enter the values\n");
  scanf("%f,%f", &a1,&a2);
  x = sin(a1)*cos(a2);
  y = sin(a1)+cos(a2);

  int z;
  z = add(x,y);
  printf("\n (%d,%d)and z is {%d} values", x,y,z);
}
