#include <stdio.h>

enum DayOfWeek {    // ������ ����
    Sunday = 0,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
} week;             // �������� �����ϴ� ���ÿ� ���� week ����

int main()
{
    week = Tuesday;    // ������ �� �Ҵ�

    printf("%d\n", week);    // 2: Tuesday�� �� ���

    return 0;
}
