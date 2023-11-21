#include "cal.h" //사용자 함수 헤더파일
#include <stdio.h>

int main()
{    
    int result;

    result = Add(4,2);
    printf(" a + b Sum %d\n", result);

    result = Sub(4,2);
    printf(" a - b Sub %d\n", result);

    result = Mul(4,2);
    printf(" a * b Mul %d\n", result);

    result = Div(4,2);
    printf(" a / b Div %d\n", result);

    // int num1 = 20;     // int형 변수 선언
    // int *numPtr;       // int형 포인터 선언

    // numPtr = &num1;    // num1의 메모리 주소를 구하여 numPtr에 할당

    // printf("%p\n", numPtr);    // 00000079B575FDA4
    //                            // numPtr에 저장된 메모리 주소 출력(컴퓨터마다, 실행할 때마다 달라짐)

    return 0;
}

