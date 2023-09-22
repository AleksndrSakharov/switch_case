#include <stdio.h>
#include <stdlib.h>

// switch (<value>)
//     {
//     case /* constant-1*/:
//         /* code */
//         break;
//     case /* constant-2*/:
//         /* code */
//
//     ...
//
//     case /* constant-n*/:
//         /* code */
    
//     default:
//         break;
//     }

void main(){
    int x, y;
    char symbol;
    scanf("%d %c %d", &x, &symbol, &y);
    // printf("Hi");
    switch (symbol){
    case '+':
        printf("\n%d", x+y);
        break;
    case '-':
        printf("\n%d", x-y);
        break;
    case '*':
        printf("\n%d", x*y);
        break;
    case '/':
        printf("\n%lf", (double)x/y);
        break;
    case '%':
        printf("\n%d", x%y);
        break;
    default:
        printf("Not correct symbol");
        break;
    }
}
