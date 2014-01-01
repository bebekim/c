//
//  main.c
//  c
//
//  Created by 김영하 on 12/21/13.
//  Copyright (c) 2013 student. All rights reserved.
//  #include <string.h>
//  ch 21
//  ex 02
//  str1, str2를 사용자로부터 문자열 입력 받는다
//  str3에는 str1 뒤에 str2를 붙여서 저장한다
//  이 때 유의할 점은 str1, str2에 저장된  \n은 소멸시킨다는 점.

#include <stdio.h>
#include <string.h>

#define MAX 10
#define LMAX 20

void removenull (char * string [MAX]);    //string 뒤에 \n 소멸 시키는 함수
void attachstring();    //str1를 str3 뒤에 붙이는 함수

int main(int argc, const char * argv[])
{
    char str1 [MAX], str2 [MAX];
    char str3 [LMAX];
                                    //그렇기 때문에 forloop보다는 '\n'를 제약조건 삼는 while loop이 자연스러울 수 있다
    printf("str 1 : ");
    fgets(str1, sizeof(str1), stdin); //문자열을 입력 받으면 문자열의 끝에 자동으로 NULL \n 문자가 추가된다. 그렇기 때문에 자동개행.
    str1[strlen(str1)-1]=0; //remove null at the end
    
    printf("str 2 : ");
    fgets(str2, sizeof(str2), stdin); //문자열을 입력 받으면 문자열의 끝에 자동으로 NULL \n 문자가 추가된다. 그렇기 때문에 자동개행.
    str2[strlen(str2)-1]=0; //remove null at the end

    strcpy(str3, str1);
    strcat(str3, str2);
    printf("%s \n", str3);
    return 0;
}

void userinput (char * string [MAX])    //사용자로부터 string 입력 받는 함수
{
}

void removenull (char * string [MAX])    //string 뒤에 \n 소멸 시키는 함수
{
    unsigned long len = strlen(*string);    //this will return 8 because size of pointer on 64bit computer is 8 bit
                                            //what I want to measure is the length of the actual string
    string[len-1] = 0;
}

void attachstring()
{
        //use strncat funciton
    ;
}
