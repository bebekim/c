//
//  main.c
//  ch02
//
//  Created by 김수영 on 6/18/13.
//  Copyright (c) 2013 ABCaffeinated. All rights reserved.
//

#include <stdio.h> 

    //functoin declaration
int decimal2binary (int n); //takes in a decimal value and converts it to binary
int binary2decimal (int n);

int main(int argc, const char * argv[])
{

/*    printf("10진수를 16진수와 8진수로 각각 표현해보자\n");
    for (int i=5; i<18; i++)
        {
        printf("10진수 %d \n 2진수로 나타내면 : %d\n 8진수로 나타내면 : %o\n 16진수로 나타내면 : %x\n",i, decimal2binary(i),i,i);
        }
*/
    int i=1001101;
    
    printf("2진수를 10진수로 나타내보자\n");
    printf("2진수 %d를 10진수로 나타내면 %d\n", i, binary2decimal(i));
    return 0;
           
}

    //function descrition
int decimal2binary (int n)
{
    int remember; //temporary memorizaiton
    int i=1; //counter
    int binary=0; //return value of the function decimal2binary
while (n!=0)
    {
    remember=n%2;
    n/=2;
    binary+=remember*i;
    i*=10;
    }
    return binary;
}

int binary2decimal (int n)
{
    int remember;
    int i=1;
    int decimal=0;
while (n!=0)
    {
    remember=n%10;
    n/=10;
    decimal=decimal+remember*i;
    i*=2;
    }
    return decimal;
}