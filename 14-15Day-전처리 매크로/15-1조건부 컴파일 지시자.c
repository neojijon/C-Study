#define _CRT_NONSTDC_NO_WARNINGS    // ��ǥ�� �Լ��� ������� �� ���� ����
#include <stdio.h>
#include <conio.h>

#define DEBUG 1


int main()
{
    int c1 = getche();    // �Է� ���۸� ������� ����, ȭ�鿡 Ű�� �Է��� ������

    printf("%c\n", c1);
//#if, #ifdef , #ifndef , #elde, #elif, #endif 
#if DEBUG
    printf("����� ����Դϴ�.\n");
#else
    printf("������ ����Դϴ�.\n");
#endif

    return 0;
}
