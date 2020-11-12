#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Ex 1
double moyenne(int val1, int val2){
    return (val1 + val2)/2.0;
}

int main(int argc, char *argv[])
{
    double res = moyenne(2, 6);
    printf("moy = %.2lf", res);

    printf("\n\nEx 2\n");
    for( int i = 1; i < 10; i++){
        if( i == 4 )
            break;
        printf("i=%d\n", i);
    }

    printf("\n\nEx 3\n");
    for(char c = 'A'; c < 'G'; c++){
        if( c == 'C' || c == 'E' )
            continue;

        printf("C=%c\n", c);
    }


    printf("\n\nEx 4\n");
    int add = 1;
    int i = 0;
    while( i < 10 ){
        i += add;

        if( i == 5 ){
            add = 2;
            continue;
        }

        printf("i=%d\n",i);
    }

    printf("\n\nEx 5\n");
    int a = 2, b = 5;
    printf("Max = %i", a>b?a:b );

    printf("\n\nEx 6\n");
    for (char c = 'a'; c < 'z'; c++)
    {
        switch (c)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'y':
            printf("Voy = %c\n", c);
            break;
        
        default:
            printf("Cons = %c\n", c);
            break;
        }
    }
    

    printf("\n\nEx 7\n");
    int value = 0;
    bool in_progress = true;
    for( ; in_progress; value+=3 ){
        printf("Value = %d\n", (value&1)==1 ? value : value+10);

        if( value > 13 )
            in_progress = false;
    }    
}
