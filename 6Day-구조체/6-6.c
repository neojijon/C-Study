#include <stdio.h>

struct Point2D {
    int x;
    int y;
};

int main()
{
    // ����ü �迭�� �����ϸ鼭 �ʱ�ȭ
    struct Point2D p1[3] = { { .x = 10, .y = 20 }, { .x = 30, .y = 40 }, { .x = 50, .y = 60 } };

    printf("%d %d\n", p1[0].x, p1[0].y);    // 10 20
    printf("%d %d\n", p1[1].x, p1[1].y);    // 30 40
    printf("%d %d\n", p1[2].x, p1[2].y);    // 50 60

    // ����ü �迭�� �����ϸ鼭 �ʱ�ȭ
    struct Point2D p2[3] = { { 10, 20 }, { 30, 40 }, { 50, 60 } };

    printf("%d %d\n", p2[0].x, p2[0].y);    // 10 20
    printf("%d %d\n", p2[1].x, p2[1].y);    // 30 40
    printf("%d %d\n", p2[2].x, p2[2].y);    // 50 60

    return 0;
}
