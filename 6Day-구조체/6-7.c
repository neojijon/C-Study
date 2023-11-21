#include <stdio.h>
#include <stdlib.h>    // malloc, free �Լ��� ����� ��� ����

struct Point2D {
    int x;
    int y;
};

int main()
{
    struct Point2D *p[3];    // ũ�Ⱑ 3�� ����ü ������ �迭 ����

    // ����ü ������ �迭 ��ü ũ�⿡�� ���(����ü ������)�� ũ��� ������ ��� ������ ����
    for (int i = 0; i < sizeof(p) / sizeof(struct Point2D *); i++)    // ��� ������ŭ �ݺ�
    {
        p[i] = malloc(sizeof(struct Point2D));    // �� ��ҿ� ����ü ũ�⸸ŭ �޸� �Ҵ�
    }

    p[0]->x = 10;    // �ε����� ��ҿ� ������ �� ȭ��ǥ �����ڷ� ����� ����
    p[0]->y = 20;
    p[1]->x = 30;
    p[1]->y = 40;
    p[2]->x = 50;
    p[2]->y = 60;

    printf("%d %d\n", p[0]->x, p[0]->y);    // 10 20
    printf("%d %d\n", p[1]->x, p[1]->y);    // 30 40
    printf("%d %d\n", p[2]->x, p[2]->y);    // 50 60

    for (int i = 0; i < sizeof(p) / sizeof(struct Point2D *); i++)    // ��� ������ŭ �ݺ�
    {
        free(p[i]);    // �� ����� ���� �޸� ����
    }

    return 0;
}
