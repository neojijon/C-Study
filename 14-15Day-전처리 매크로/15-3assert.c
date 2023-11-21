#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>    // assert�� ���ǵ� ��� ����

void copy(char *dest, char *src)
{
    assert(dest != NULL);    // dest�� NULL�̸� ���α׷� �ߴ�
    assert(src != NULL);     // src�� NULL�̸� ���α׷� �ߴ�

    strcpy(dest, src);       // ���ڿ� ����
}

int main()
{
    char s1[100];
    char *s2 = "Hello, world!";

    copy(s1, s2);     // ���� ����

    copy(NULL, s2);   // NULL�� �����Ƿ� ���α׷� �ߴ�
    // Assertion failed: dest != NULL, file c:\project\assert\assert\assert.c, line 8
    
    return 0;
}
