//
//  main.c
//  c
//
//  Created by 김영하 on 12/21/13.
//  Copyright (c) 2013 student. All rights reserved.
//  ch24
//  ex01 : 프로그램상에서 mystory.txtㅏ는 이름의 파일을 새성해서 본인의 이름, 주민번호, 전화번호를 저장하는 프로그램을 작성하자. 그리고 저장이 완료되면 메모장으로 확인이 가능해야 한다.

#include <stdio.h>

int main(int argc, const char * argv[])
{
    FILE *fp = fopen("/Users/goldenfermi/bitsync/programming/c/myname.txt", "a");   //fopen("Users/...", "w"); 는 틀리다. /Users/... 가 맞다.
    
    if (fp == NULL) {
        puts("파일오픈 실패");
        return -1;
    }
    
    fputs("#즐겨먹는 음식 : 짬뽕, 탕수육\n", fp);
    fputs("#취미 : 축구\n", fp);
    
    fclose(fp);
    return 0;
}

