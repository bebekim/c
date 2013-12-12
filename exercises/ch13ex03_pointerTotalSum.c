//
//  main.c
//  ch13ex03pointerTotalSum
//
//  Created by 김영하 on 9/15/13.
//  Copyright (c) 2013 ABCoding. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = &arr[4]; //arr의 마지막 요소를 가르키는 포인터
    printf("%p \n", ptr);

        //문제 : 그 다음 포인터 변수 ptr에 저장된 값을 감소시키는 형태의 연산을 기반으로 모든 배열요소에 접근하여, 배열에 저장된 모든 정수를 더하여 그 결과를 출력하는 프로그램을 작성해보자 .
    int total = 0;

    int arrlength = sizeof(arr) / sizeof(arr[0]); //sizeof(arr) / sizeof(int)하는 방식도 있다 - 현재 int array 쓰고 있으니까
    printf("Length of array is %d \n", arrlength);

    
    for (int i = arrlength; i > 0; i--)
        {
        total += *(ptr--);
        }

    printf("배열의 총 합은 %d \n", total);

    return 0;
}

