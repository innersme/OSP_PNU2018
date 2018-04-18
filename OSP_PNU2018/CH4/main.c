//
//  main.c
//  OSP_PNU2018
//
//  Created by MJMacBook on 18/04/2018.
//  Copyright © 2018 MJMacBook. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "sum.h"

int main(int argc, char *argv[])
{
    int c;
    c = sum(1, 2);
    printf("The sum of 1 and 2 is %d\n", c);
    exit(0);
}
