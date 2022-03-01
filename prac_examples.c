#include <stdio.h>

int main(){
  double X, Y, Z;
  printf("X: ");
  scanf("%lf",&X);
  printf("Y: ");
  scanf("%lf",&Y);
  Z = X;
  X = Y;
  Y = Z;
  printf("X = %.2lf",X);
  printf("\nY = %.2lf",Y);



  return 0;

} 
