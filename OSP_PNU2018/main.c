#include <stdio.h>
#include "calculator.h"

enum{Add=1, Minus, Multi, Divide, Exit};

int main()
{
    double val1, val2;
    int select;
    double result = 0.0;
    while (1) {
        printf("Enter val1 and val2:");
        scanf("%lf %lf", &val1, &val2);
        printf("Enter calculator mode(1:Add, 2:Minus, 3:Multi, 4:Divide, 5:Exit)");
        scanf("%d", &select);
        switch (select) {
            case Add:
            {
                result = Addfunc(val1, val2);
                break;
            }
            case Minus:
            {
                result = Minusfunc(val1, val2);
                break;
            }
            case Multi:
            {
                result = Multifunc(val1, val2);
                break;
            }
            case Divide:
            {
                result = Dividefunc(val1, val2);
                break;
            }
            case Exit:
            {
                break;
            }
            default:
            {
                printf("repeat the other value");
                break;
            }
        }
        printf("Result value: %lf\n", result);
    }
    return 0;
}
