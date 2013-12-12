//
//  main.c
//  BasiC
//
//  Created by 김영하 on 7/31/13.
//  Copyright (c) 2013 ABCoding. All rights reserved.
//

#include <stdio.h>

void recursive (int num)
{
    if (num <= 0)
        return;
    printf("Recursive call %d \n", num);
    recursive (num-1);
    printf("i got out late for the %dth time\n", num);
}

int main (void)
{
    recursive (6);
    return 0;
}