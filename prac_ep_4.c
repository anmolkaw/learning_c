#include <stdio.h>


int main() {
  int age;
  printf("Enter input value: ");
  scanf("%d", &age);
  printf("Age = %d", age);
  

  double number;
  char alphabet;
  printf("\nEnter values: ");
  scanf("%lf %c" , &number, &alphabet);
 
  printf("\nNumber = %lf", number);
  printf("\nAlphabet = %c", alphabet); 
  
  

  return 0;

}
