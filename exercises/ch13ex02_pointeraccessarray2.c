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
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; //int *ptr = &arr[0]; 과 같은 문장
    
        //문제 : 그 다음 포인터 변수 ptr에 저장된 값을 변경하지 말고, ptr을 대상으로 엇셈연산을 하여 그 결과로 반환되는 주소값을 통해 모든 배열 요소에 접근하여 2씩 증가시키는 예제를 작성해보자.
    
    int arrlength = sizeof(arr) / sizeof(arr[0]); //sizeof(arr) / sizeof(int)하는 방식도 있다 - 현재 int array 쓰고 있으니까
    printf("Length of array is %d \n", arrlength);

    for (int i = 0; i < arrlength; i++)
        {
            //ptr을 대상으로 덧셈연산을 하자
            //그 결과 반환되는 주소값을 통해 모든 배열 요소에 접근하여 2씩 증가하자
        *(ptr + i) += 2;
        }
    
        //정상적으로 증가가 이뤄졌는제 확인하는 과정
        //ptr 포인터를 시작점으로 원점 복구
    ptr = &arr[0];

        // 위와 같은 while (*ptr < 6)으로 설정하니까 array 값들을 2씩 올려준 상태에서 두번 써먹을 수 없는, 한시적 제한조건이 되어버렸다.
        // 따라서, array를 다룰 때는 그 안에 값에 의지하지 말고 array 길이 = arrlength를 사용하도록 해라.
    
    for (int i = 0; i < arrlength; i++)
        {
            printf("%d \n", arr[i]);
        }
    return 0;
}

