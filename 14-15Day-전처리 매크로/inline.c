#include <stdio.h>

// GCC�� -std=c99 �Ǵ� -std=c11 �ɼǿ����� extern inline�� ����
// extern inline int add(int a, int b)
inline int add(int a, int b)    // �ζ��� �Լ��� ����
{
    return a + b;
}

int main()
{
    int num1;

    num1 = add(10, 20);    // �ζ��� �Լ� ȣ��

    printf("%d\n", num1);  // 30

    return 0;
}
