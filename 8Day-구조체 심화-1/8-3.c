#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Point2D {
    int x;
    int y;
};

int main()
{
    struct Point2D p;
    struct Point2D *ptr = malloc(sizeof(struct Point2D));

    p.x = 10;
    p.y = 20;
    ptr->x = 30;
    ptr->y = 60;

    printf("%d %d %d %d\n", p.x, p.y, ptr->x, ptr->y);

    free(ptr);

    return 0;
}
