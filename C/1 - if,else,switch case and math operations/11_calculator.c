#include <stdio.h>
#include <stdlib.h>

int main() {
  
  int i;
  float a, b, result;
  char op;

  printf("Enter a number, an operation and another number to know the result!\n\n");
  scanf("%f%c%f",&a,&op,&b);

  if(op == '+') {
    result = a+b;
  }
    
  if(op == '-') {
    result = a-b;
  }
                
  if(op == '*') {
    result = a*b;
  }
  
  if(op == '/') {
    if(b != 0) {
      result = a/b;
    } else {
      printf("Erro\n");
      return 0;
    }
  }

  printf("Result = %.2f\n",result);

  return 0;
}
