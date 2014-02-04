//
//  main.c
//  c
//
//  Created by 김영하 on 12/21/13.
//  Copyright (c) 2013 student. All rights reserved.


#include <stdio.h>

int main(int argc, const char * argv[])
{
    FILE *src = fopen("/Users/goldenfermi/bitsync/programming/c/src.txt", "r");
    FILE *dst = fopen("/Users/goldenfermi/bitsync/programming/c/dst.txt", "w");
    int ch;
 
    if (src == NULL || dst == NULL)
        {
        puts ("파일오픈 실패!");
        return -1;
        }
    
    while ((ch = fgetc(src))!= EOF)
        fputc(ch, dst);
    
    if (feof(src)!= 0)
        puts("파일복사 완료!");
    else
        puts("파일복사 실패.");
    
    fclose(src);
    fclose(dst);

    
    return 0;
}

