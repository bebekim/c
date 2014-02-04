//
//  main.c
//  c
//
//  Created by 김영하 on 12/21/13.
//  Copyright (c) 2013 student. All rights reserved.
//  ch24
//  ex03 : 정보 전체를 출력하는 프로글매

#include <stdio.h>

int main(int argc, const char * argv[])
{
    char str[30];
    FILE *fp = fopen("/Users/goldenfermi/bitsync/programming/c/myname.txt", "r");   //fopen("Users/...", "w"); 는 틀리다. /Users/... 가 맞다.
    
    if (fp == NULL) {
        puts("파일오픈 실패");
        return -1;
    }
    
    while (fgets(str, sizeof(str), fp)!=NULL)
        printf(str);
    fclose(fp);
    return 0;
}

