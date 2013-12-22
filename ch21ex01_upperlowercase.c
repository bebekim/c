//
//  main.c
//  c
//
//  Created by 김영하 on 12/21/13.
//  Copyright (c) 2013 student. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int ch, nter; //we must declare c to be a type big enough to hold any value that getchar returns
            //char can't be used since c must be big enough to hold EOF in addition to any possible char
            //that's why int is chosen instead of char
    char A = 'A';   //65
    char Z = 'Z';   //90
    char a = 'a';   //97
    char z = 'z';   //122
    int change;
    const int UPPER = z-Z;  //make upper case ,change from z to Z
    const int LOWER = Z-z;  //make lower case, change from Z to z

        //get value, verify value
    while (1)
        {
        printf("->");
        ch = getchar();
        nter = fgetc(stdin);    //this takes away the \n (=10) away from input.
        
            //determine LOWER or UPPER
        if (ch <= z && ch >= a)
            {
            change = LOWER; //make LOWER,change from Z to z
            break;
            }
        else if (ch <= Z && ch >= A)
            {
            change = UPPER; //make UPPER, change from z to Z
            break;
            }
        else
            ;
        }
    putchar(ch+change);
    printf("\nEnd of Program\n");
    
    return 0;
}