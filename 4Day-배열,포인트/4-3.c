#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�ѱ� ����ϱ�
#include <wchar.h>
#include <locale.h>

int main()
{
    char s1[12] = "Hello World";

    setlocale(LC_ALL,""); // �ٱ��� �ʱ�ȭ   

    wprintf(L"���ڿ��� �Է��ϼ���: ");
    scanf("%s",&s1);

    printf("%s\n", s1);

    return 0;
}