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
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int *ptr_head = arr; //arr의 첫번째 요소를 가르키는 포인터
    int *ptr_tail = &arr[5]; //arr의 마지막 요소를 가르키는 포인터
    int *ptr_check = ptr_head; //검사용 포인터
    int temp; //arr 요소 값을 교체할 때 잠시 값을 보관하는 temp
    int arrlength = sizeof(arr) / sizeof(arr[0]); //sizeof(arr) / sizeof(int)하는 방식도 있다 - 현재 int array 쓰고 있으니까
    
        //배열에 저장된 값의 순서가 6, 5, 4, 3, 2, 1이 되도록 변경하자.
        //배열의 앞과 뒤를 가르키는 포인터 변수 두개를 선언해서 이를 활용하여 저장된 값의 순서를 뒤바꿔야 한다

    for (int i = 0; i < arrlength/2 ; i++)
        {
                //arr에 양쪽 끝 교환하기
            temp = *ptr_tail;
            *ptr_tail = *ptr_head;
            *ptr_head = temp;
                //arr 양쪽 끝을 가르키는 포인터를 한칸씩 중앙을 향해 이동하기
            ptr_head = ptr_head + 1;
            ptr_tail = ptr_tail - 1;
        }

    for (int i = 0; i < arrlength ; i++)
        {
        printf("%d \n",*(ptr_check++));
        }
    return 0;

}

