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
    
        //문제 : 그 다음 포인터 변수 ptr에 저장된 값을 증가시키는 형태의 연산을 기반으로 배열요소에 접근하면서 모든 배열요소의 값을 2씩 증가시키고 정상적으로 증가가 이뤄졌는지 확인하는 예제를 작성해보자.
    
    while (*ptr < 6) //while (*ptr != '\0');으로 설정하려고 했으나, string만 NULL으로 끝난다는 것을 기억함.
                     // 만일 굳이 NULL로 끝내고 싶으면 int arr[5] = {0} 으로 세팅해야 하는데 그럴 경우, 모든 0이 끝나는 값으로 인지됨
                     // 따라서 array는 array의 길이로 정해진다고 봐야한다.
        
        {
        //배열 요소에 2를 증가시키자
            *ptr = *ptr + 2;
        //그리고 나서 ptr을 증가시키자
            ptr++;
            // 위의 두줄을 줄이면, *(ptr++)+= 2; 왜냐하면 ptr++는 후속 연산이기 때문에 += 가 먼저 이뤄진다.
        }
    
        //정상적으로 증가가 이뤄졌는제 확인하는 과정
    
    
        //ptr 포인터를 시작점으로 원점 복구
    ptr = &arr[0];

        // 위와 같은 while (*ptr < 6)으로 설정하니까 array 값들을 2씩 올려준 상태에서 두번 써먹을 수 없는, 한시적 제한조건이 되어버렸다.
        // 따라서, array를 다룰 때는 그 안에 값에 의지하지 말고 array 길이 = arrlength를 사용하도록 해라.
    
    int arrlength = sizeof(arr) / sizeof(arr[0]); //sizeof(arr) / sizeof(int)하는 방식도 있다 - 현재 int array 쓰고 있으니까
    printf("Length of array is %d \n", arrlength);
    
    for (int i = 0; i < arrlength; i++)
        {
            printf("%d \n", *ptr);
            ptr = ptr + 1;
        }
    return 0;
}

