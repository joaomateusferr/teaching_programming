#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, sum = 0, cont = 0;

    printf("Multiples of 3 in the range 1 to 20\n\n");

    for(i = 1; i < 21; i++) {

        //the % operation can only be used with integer values
        if(i % 3 == 0) {
            printf("Multiple - %i\n",i);
            sum = sum + i;
            cont++;
        }
    }

    printf("\nThere are %i multiples and the sum of them is %i\n",cont,sum);

    return 0;
}
