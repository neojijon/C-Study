#include <stdio.h>

int main()
{
    const int con1 = 1;         // ���. ����� ���ÿ� �ʱ�ȭ
    const float con2 = 0.1f;    // ���. ����� ���ÿ� �ʱ�ȭ
    const char con3 = 'a';      // ���. ����� ���ÿ� �ʱ�ȭ

    printf("%d %f %c\n", con1, con2, con3);    // 1 0.100000 a

    return 0;
}
