#include <stdio.h>

typedef enum _DayOfWeek{    // ������ ����
    Sunday = 0,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
} DayOfWeek;      // typedef�� ����Ͽ� ������ ��Ī�� DayOfWeek�� ����

int main()
{
    DayOfWeek week;    // ������ ��Ī���� ����ü ���� ����

    week = Tuesday;    // ������ �� �Ҵ�

    printf("%d\n", week);    // 2: Tuesday�� �� ���

    return 0;
}
