#include <stdio.h>

typedef enum _DayOfWeek {    // ������ �̸��� _DayOfWeek
    Sunday = 0,                  // �ʱ갪�� 0���� �Ҵ�
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    DayOfWeekCount               // ������ ���� ������ ��Ÿ���� �׸� �߰�
} DayOfWeek;                 // typedef�� ����Ͽ� ������ ��Ī�� DayOfWeek�� ����

int main()
{
    // �ʱ갪�� Sunday, i�� DayOfWeekCount���� ���� �������� �ݺ�
    for (DayOfWeek i = Sunday; i < DayOfWeekCount; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}
