#include <stdio.h>

enum DayOfWeek {    // ������ ����
    Sunday = 0,         // �ʱ갪 �Ҵ�
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main()
{
    enum DayOfWeek week;    // ������ ���� ����

    week = Tuesday;    // ������ �� �Ҵ�

    printf("%d\n", week);   // 2: Tuesday�� �� ���

    return 0;
}
