#include <stdio.h>

//함수의 원형 선언
int Add(int a, int b);
void Result(int result); //결과를 보여주는 함수

int main()
{
    int a;
    int b;
    int sum;


    printf(" a + b sum. input value :" ) ;
    scanf("%d%d",&a,&b);
    //sum = a + b;
    sum = Add(a,b); //Add 함수 호출

    //printf(" a + b = Sum: %d\n", sum);
    Result(sum);

    return 0;
}

void  Result(int result)
{
     printf(" a + b = Sum: %d\n", result);
     printf(" =============Programming End==============\n");
}

//함수의 정의
int Add(int a, int b)
{
    return a + b;
}

