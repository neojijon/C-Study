#include "cal.h" //����� �Լ� �������
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

    // int num1 = 20;     // int�� ���� ����
    // int *numPtr;       // int�� ������ ����

    // numPtr = &num1;    // num1�� �޸� �ּҸ� ���Ͽ� numPtr�� �Ҵ�

    // printf("%p\n", numPtr);    // 00000079B575FDA4
    //                            // numPtr�� ����� �޸� �ּ� ���(��ǻ�͸���, ������ ������ �޶���)

    return 0;
}

