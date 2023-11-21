#include <stdio.h>
#include <stdlib.h>    // malloc, free �Լ��� ����� ��� ����
#include <string.h>    // memset �Լ��� ����� ��� ����

int main()
{
    long long *numPtr = malloc(sizeof(long long));  // long long�� ũ�� 8����Ʈ��ŭ ���� �޸� �Ҵ�

    memset(numPtr, 0x27, 8);    // numPtr�� ����Ű�� �޸𸮸� 8����Ʈ��ŭ 0x27�� ����

    printf("0x%llx\n", *numPtr);    // 0x2727272727272727: 27�� 8�� �� ����

    free(numPtr);    // �������� �Ҵ��� �޸� ����

    return 0;
}
