//
//  main.c
//  BasiC
//
//  Created by 김영하 on 7/31/13.
//  Copyright (c) 2013 ABCoding. All rights reserved.
//

#include <stdio.h>

int AddToTotal (int num)
{
    static int total;
    total+=num;
    return total;
}

int main (void)
{
    int num, i;
    for (i = 0; i<3; i++) {
        printf("입력%d: ", i+1);
        scanf("%d", &num);
        printf("누적: %d \n", AddToTotal(num));
    }
    return 0;
}