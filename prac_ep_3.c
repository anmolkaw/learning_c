#include <stdio.h>

int main() {
  int age = 120;
  printf("Age = %d",age);
  
  double number = 12.45;
  float num = 10.9f;
  printf("\n%.2lf\n",number);
  printf("%.1f\n",num);
  

  double numb = 5.5e6;
  printf("%f\n", numb);
  
  char character = 'A';
  printf("%c", character);
  printf("\n%d",character);
  
  printf("\n%zu",sizeof(age));
  printf("\n%zu",sizeof(numb));
  printf("\n%zu",sizeof(character));
  printf("\n%zu",sizeof(num));
  
  

  return 0;

}


