#include <stdio.h>


int Add(int a, int b)
{
    return a + b;
}


int main()
{
    int a;
    int b;
    int sum;


    printf(" a + b sum. input value :" ) ;
    scanf("%d%d",&a,&b);
    //sum = a + b;
    sum = Add(a,b); //Add 함수 사용

    printf(" a + b = Sum: %d\n", sum);

    return 0;
}

