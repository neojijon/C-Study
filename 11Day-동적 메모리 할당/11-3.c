#include <stdio.h>
#include <stdlib.h>    // malloc, free �Լ��� ����� ��� ����

int main()
{
    int *numPtr;    // int�� ������ ����

    numPtr = malloc(sizeof(int));    // int�� ũ�� 4����Ʈ��ŭ ���� �޸� �Ҵ�

    *numPtr = 10;   // �����͸� �������� �� �� �Ҵ�

    printf("%d\n", *numPtr);    // 10: �����͸� �������Ͽ� �޸𸮿� ����� �� ���

    free(numPtr);    // ���� �޸� ����

    return 0;
}
