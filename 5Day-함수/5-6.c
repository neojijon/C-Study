#include <stdio.h>

//매크로 함수 
#define SQUARE1(x)  x * x 
#define SQUARE2(x) (x) * (x)
#define SQUARE3(x) (x * x)

int main()
{
    int k = 5;

    //5*5 = 25
    printf("SQUARE1(k) = %d\n", SQUARE1(k));
    
    //5 + 3 * 5 + 3 = 5 + 15 +3 = 23
    printf("SQUARE1(k+3) = %d\n", SQUARE1(k+3));

    //(5+3)*(5+3) = 64
    printf("SQUARE2(k+3) = %d\n", SQUARE2(k+3));

    //160 / (4) * (4) = 40 * 4 = 160
    printf("160 / SQUARE2(4) = %d\n", 160 / SQUARE2(4));

    //160 / (4 * 4) = 10
    printf("160 / SQUARE3(k) = %d\n\n", 160 / SQUARE3(4));

    return 0;

}