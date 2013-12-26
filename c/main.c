//
//  main.c
//  c
//
//  Created by 김영하 on 12/21/13.
//  Copyright (c) 2013 student. All rights reserved.

#include <stdio.h>
#include <string.h>

void RemoveBSN (char str[])
{
    unsigned long len = strlen(str);
    str[len-1] = 0; //removing \n out of string
}

int main(int argc, const char * argv[])
{
    char str[100];
    printf("문자열 입력 : ");
    fgets(str, sizeof(str), stdin);
    printf("길이 : %lu, 내용 : %s\n", strlen(str), str);    //fgets에는 \n이 딸려있기 때문에 개행이 이뤄진다
    
    RemoveBSN(str);
    printf("길이 : %lu, 내용 : %s\n", strlen(str), str);    //여기에는 의도적으로 RemoveBSN 통해 \n을 떨궈냈기 때문에 개행이 이뤄지지 않는다
    printf("The end \n");
    
    return 0;
}
