#include <stdio.h>
#include <stdlib.h>    // malloc, free �Լ��� ����� ��� ����
#include <string.h>    // memset �Լ��� ����� ��� ����

struct Point2D {
    int x;
    int y;
};

int main()
{
    struct Point2D *p1 = malloc(sizeof(struct Point2D));    // ����ü ũ�⸸ŭ �޸� �Ҵ�

    memset(p1, 0, sizeof(struct Point2D));    // p1�� ����ü ũ�⸸ŭ 0���� ����

    printf("%d %d\n", p1->x, p1->y);    // 0 0: memset�� ����Ͽ� 0���� ���������Ƿ�
                                        // x, y ��� 0

    free(p1);    // ���� �޸� ����

    return 0;
}
