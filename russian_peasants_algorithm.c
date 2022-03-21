#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sum = 0;
void calculate(int one, int two);    

int main(void)
{
    int one, two;
    printf("This program uses the 'Russian Peasant's Algorithm' to multiply 2 numbers.\n" 
           "It halves the multiplier and doubles the multiplicand until the multiplier reaches 1.\n"
           "The sum is formed by adding each doubled multiplicand when the corresponding divided multiplier is an odd number.\n\n"
           "1st number: \t"); scanf("%d", &one);
    printf("2nd number: \t"); scanf("%d", &two);
    
    printf("\n   (%%2) %i\t%i (x2)\n\n", one, two);

    calculate(one, two);
    printf("\nFinal sum:\t%i\n", sum);
}

void calculate(int one, int two)
{
    if (one == 0) {
        return;
    }
    if ((one & 1) != 0){
        sum += two;
        printf("\t%i\t%i\t(sum = %i)\n", one, two, sum);

    } else {
        printf("\t%i\t%i\n", one, two);
    }

    calculate( (one * 0.5), (two * 2) );
}
