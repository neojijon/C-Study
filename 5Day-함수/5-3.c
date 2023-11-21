//전역변수 , 지역변수

#include <stdio.h>

int global;

//함수의 원형 선언
void Add(int a, int b);
void Result(); //결과를 보여주는 함수

int main()
{
    int a;
    int b;    

    printf(" a + b sum. input value :" ) ;
    scanf("%d%d",&a,&b);
    
    Add(a,b); //Add 함수 호출
    Result();

    return 0;
}

void  Result()
{
     printf(" a + b = Sum: %d\n", global);
     printf(" =============Programming End==============\n");
}

//함수의 정의
void Add(int a, int b)
{
    global =  a + b;
}

