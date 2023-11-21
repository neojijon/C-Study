//재귀적 함수 호출
#include <stdio.h>
//한글 출력하기
#include <wchar.h>
#include <locale.h>

int factorial(int n);

int main()
{
    int n;
    int result;
    
    setlocale(LC_ALL,""); // 다국어 초기화   

    wprintf(L"정수를 입력하시오:");
    scanf("%d",&n);

    result =  factorial(n);
    wprintf(L"%ld!의 결과는 %ld 입니다.\n", n, result);

    return 0;
}

int factorial(int n)
{
    if(n==1)
        return 1;
        
    return (n * factorial(n-1));
}
