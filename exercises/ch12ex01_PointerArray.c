//
//  main.c
//  ch12sub01_PointerArray
//
//  Created by 김영하 on 9/15/13.
//  Copyright (c) 2013 ABCoding. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
        //visualize memory in your head; int occupies four bytes of memory.
        //memory address occupies 4 byte (=32bit) 8 byte (=64bit) depending on processor
        //This computer uses Intel Core 2 Duo which is a 64bit processor
        //This is why sizeof (ptr) = 8 because 8 byte = 64bit
    int num = 10;
        //*ptr occupies 8 bytes of space where as int num occupies 4 bytes of space.
        //*ptr holds the address to the memory location of num which is a variable that occupies 8 bytes
        //& operator coughs up a 8 byte variable
    int *ptr1 = &num;
        //ptr1 can be equal to ptr1 BECAUSE both are pointers to begin with
    int *ptr2 = ptr1;
    
        //this would add 1 to the variable that * ptr1 is pointing to, which is num
        //num = num + 1 meaning 11 = 10 + 1
    (*ptr1)++;
    printf("%d \n", num);
        //*ptr 2 points to ptr1 which in turn points to num
        //once again, num = num + 1 meaning 12 = 11 + 1
    (*ptr2)++;
    printf("%d \n", num);
    return 0;
}

