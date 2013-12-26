//
//  main.c
//  c
//
//  Created by 김영하 on 12/21/13.
//  Copyright (c) 2013 student. All rights reserved.
//  int puts(const char *s);    //automatic follow up with \n
//  int fputs(const char *s, FILE * stream);    //does not follow up with \n and thus, require manual input
//  char * gets(char *s);
//  char * fgets(char *s, int n, FILE *stream);

#include <stdio.h>

void ClearLineFromReadBuffer (void);

int main(int argc, const char * argv[])
{
    char perID[7];
    char name[10];
    
    fputs("주민번호 앞 6자리 입력 : ", stdout);  //remember, fputs automatically follows up with by \n
    fgets (perID, sizeof(perID), stdin);    //accepts 6 = 7-1(=\n) characters. user's \n enter is
    ClearLineFromReadBuffer();  //this clears the input buffer
    
    fputs("이름 입력 : ", stdout);  //stdout stream still contains the remaining \n single character
    fgets(name, sizeof(name), stdin);   //this is tored in name, sizeof(1), stdin
    
    printf("주민번호 : %s \n", perID);
    printf("이름 : %s\n", name);
    
    return 0;
}

void ClearLineFromReadBuffer (void)
{
    
    while (getchar()!='\n') // 이는 \n 만날 때까지 입력버퍼에 저장된 문자들을 char으로 계속 읽어낸다. 별도로 저장하지는 않는다.
        ;
}