#include <stdio.h>
//한글 출력하기
#include <wchar.h>
#include <locale.h>

int main()
{
    int input1,input2;
    int total;

    setlocale(LC_ALL,"");

    wprintf(L"첫번째 정수를 입력하세요. :");
    scanf("%d", &input1);

    wprintf(L"두번째 정수를 입력하세요. :");
    scanf("%d", &input2);

    total = input1 + input2;
    wprintf(L"두 수의 합은 %d이다\n",total);

    return 0;
}