#include <stdio.h>
#include <string.h>    // memcpy �Լ��� ����� ��� ����

struct Point2D {
    int x;
    int y;
};

int main()
{
    struct Point2D p1;
    struct Point2D p2;

    p1.x = 10;    // p1�� ������� �� ����
    p1.y = 20;    // p1�� ������� �� ����

    memcpy(&p2, &p1, sizeof(struct Point2D));    // Point2D ����ü ũ�⸸ŭ p1�� ������ p2�� ����

    printf("%d %d\n", p2.x, p2.y);    // 10 20: p1�� ������ p2�� ���������Ƿ� 10 20

    return 0;
}
