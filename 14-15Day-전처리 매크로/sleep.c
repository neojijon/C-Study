#define _CRT_OBSOLETE_NO_WARNINGS    // ���� �Լ��� ������� �� �߻��ϴ� ���� ����
#include <stdio.h>
#include <stdlib.h>      // _sleep �Լ��� ����� ��� ����
#include <string.h>
//#include <unistd.h>    // ���������� usleep �Լ��� ����� ��� ����

int main()
{
    char *script = "There is no place like home.\nThe Wizard of Oz";
    int length = strlen(script);

    for (int i = 0; i < length; i++)
    {
        printf("%c", script[i]);
        // fflush(stdout);    // ������������ ���� �ϳ��� ����� �� usleep���� ��ٸ�����
        // ��� ���۸� ����� ��
        // usleep(500000);    // ���������� 0.5�ʸ� ��ٸ� ��(-std=gnu99 �ɼ� ���)
        _sleep(500);          // 0.5��
    }

    return 0;
}
