#include <stdio.h>

//한글 출력하기
#include <wchar.h>
#include <locale.h>

#define  SIZE 5

int main(){
    
    char str[SIZE] = "Love";
    int i;

    setlocale(LC_ALL,""); // 다국어 초기화   

    for(i=0; i < SIZE; i++)
    {
        wprintf(L"배열의 요소 %d는 %c \n", i, str[i]);
    }

    return 0;
}
