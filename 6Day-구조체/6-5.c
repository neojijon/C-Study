#include <stdio.h>

struct Point2D {
    int x;
    int y;
};

int main()
{
    struct Point2D p[3];    // ũ�Ⱑ 3�� ����ü �迭 ����

    p[0].x = 10;    // �ε����� ��ҿ� ������ �� ������ ����� ����
    p[0].y = 20;
    p[1].x = 30;
    p[1].y = 40;
    p[2].x = 50;
    p[2].y = 60;

    printf("%d %d\n", p[0].x, p[0].y);    // 10 20
    printf("%d %d\n", p[1].x, p[1].y);    // 30 40
    printf("%d %d\n", p[2].x, p[2].y);    // 50 60

    return 0;
}
