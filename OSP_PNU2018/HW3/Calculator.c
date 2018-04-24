#include <stdio.h>
#include <stdlib.h>
#include "Calculator.h"

enum{Add=1, Minus, Multi, Divide, Exit};

int main(int argc, char** argv)
{
    double val1, val2;
    int select; char op;
    int c;
    double result = 0.0;
    
    if (argc < 4) {
        printf("!!!More arguments needed! ");
        return 0;
    }
    else if (argc > 4){
        printf("!!!Too many arguments. ");
        return 0;
    }
    else
    {
        val1 = atof(argv[1]);
        val2 = atof(argv[2]);
        select = atoi(argv[3]);
        
        //printf("%lf %lf %d", val1, val2, select );
        switch (select) {
            case Add:
            {
                result = Addfunc(val1, val2);
                op = '+';
                break;
            }
            case Minus:
            {
                result = Minusfunc(val1, val2);
                op = '-';
                break;
            }
            case Multi:
            {
                result = Multifunc(val1, val2);
                op = '*';
                break;
            }
            case Divide:
            {
                result = Dividefunc(val1, val2);
                op = '/';
                break;
            }
            case Exit:
            {
                return 0;
            }
        }
        printf("%lf %c %lf = %lf\n", val1, op, val2, result);
        return 0;
    }
}
