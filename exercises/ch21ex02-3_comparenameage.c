//
//  main.c
//  c
//
//  Created by 김영하 on 12/21/13.
//  Copyright (c) 2013 student. All rights reserved.
//  #include <string.h>
//  ch 21
//  ex 03
//  이름과 나이 입력 받은 후 (이름과 나이 사이에만 공백이 삽입된다), 이름과 나이가 각각 같은지 다른지를 판단하여 출력하는 프로그램 작성

#include <stdio.h>
#include <string.h>

#define MAX 20

int idfyspace (char string[MAX]);
void subsnull (char string[MAX]);

int main(int argc, const char * argv[])
{
    int i = 0;
    int pos;
    char str1 [MAX];
    printf("str 1 : ");
    fgets(str1, sizeof(str1), stdin); //문자열을 입력 받으면 문자열의 끝에 자동으로 NULL \n 문자가 추가된다. 그렇기 때문에 자동개행.
                                      //check input with fputs(str1, stdout);
    
        //identify position of ' ' space
    subsnull (str1);
    fputs(str1, stdout);
        //replace ' 'space with null
    
        //use fgets (, , string) to separate str1 (for name), str2 (for age)
    
        //str1 contains names
        //str2 contains numbers (needs to be converted using atoi)
        //compare each string

        //replace ' ' space with NULL
    
    
    return 0;
}

int idfyspace (char string [MAX])
{
    int len, i;
    len = strlen(string);
    
    for (i = 0; i < len; i++)
        {
        if (string[i] == ' ')
            return i;
        }
    return 0;   //if one fails to locate ' ' empty space
}

void subsnull (char string[MAX])    //substitue ' ' empty space with '\n' null
{
    int pos = idfyspace(string);
    string[pos] = '\n';
}
