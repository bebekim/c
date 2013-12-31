//
//  main.c
//  c
//
//  Created by 김영하 on 12/21/13.
//  Copyright (c) 2013 student. All rights reserved.
//  #include <string.h>
//  ch 21
//  ex 01
//  적당한 길이의 문자열을 입력 받아서 그 안에 존재하는 숫자의 총합을 계산해서 출력하는 프로그램 작성한다
//  예를 들어 A15#43이라 하면 1 + 5 + 4 + 3 = ? 출력 되어야 한다.
//  여기서 감안해야 하는 것은, atoi(char) return 값이 0이라는 것이다.
//  즉, 일일이 솎아낼 필요 없이 그냥 더하면 된다.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 20

int main(int argc, const char * argv[])
{
    char str [MAX];
    int i = 0;
    int sum = 0;
    printf("->");
    fgets(str, sizeof(str), stdin); //문자열을 입력 받으면 문자열의 끝에 자동으로 NULL \n 문자가 추가된다. 그렇기 때문에 자동개행.
                                    //그렇기 때문에 forloop보다는 '\n'를 제약조건 삼는 while loop이 자연스러울 수 있다

while (str[i]!='\n')
    {
        //    sum+= atoi(&str[
    char c = str[i];
    sum +=  atoi(&c);
    i++;
    }
    
    printf("sum of integers in string : %d\n", sum);
    return 0;
}

