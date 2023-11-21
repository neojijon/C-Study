#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//한글 출력하기
#include <wchar.h>
#include <locale.h>

int main()
{
    char s1[12] = "Hello World";

    setlocale(LC_ALL,""); // 다국어 초기화   

    wprintf(L"문자열을 입력하세요: ");
    scanf("%s",&s1);

    printf("%s\n", s1);

    return 0;
}