#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int i;
    float a, b, result;
    char op;

    printf("Enter a number, an operation and another number to know the result!\n\n");
    scanf("%f%c%f",&a,&op,&b);

    switch(op) {
        case '+':
            result = a+b;
            break;

        case '-':
            result = a-b;
            break;

        case '*':
            result = a*b;
            break;
        case '/':
            if(b != 0) {
                result = a/b;
            } else {
                printf("Erro\n");
                return 0;
            }
            break;
    }

    printf("Result = %.2f\n",result);

    return 0;
}
