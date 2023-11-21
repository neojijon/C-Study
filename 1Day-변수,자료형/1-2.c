/*
 오늘의 주제
- 주석, 변수, 데이터 타입, 연산자
*/

#include <stdio.h>

int main()
{
    //정수형 변수 선언
    
    //int num1 = 10;               // 변수를 선언하면서 값 할당(초기화)
    //int num2 = 20, num3 = 30;    // 변수 여러 개를 선언하면서 값 할당(초기화)

    int num1,num2,num3;

    num1 = 10;    // 변수에 값 할당(저장)
    num2 = 20;
    num3 = 30;

    printf("%d %d %d\n", num1, num2, num3); // 10 20 30: 변수에 저장된 값을 %d로 출력

    printf("%d\n", num1);    // 10
    printf("%d\n", num2);    // 20
    printf("%d\n", num3);    // 30


    return 0;
}
