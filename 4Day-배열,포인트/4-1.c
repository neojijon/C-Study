#include <stdio.h>
//한글 출력하기
#include <wchar.h>
#include <locale.h>

int main()
{
    int number0 = 10;
	int number1 = 10;
	int number2 = 10;

    //간단하게 
    int number[3] = {10,10,10}; //[0],[1],[2] 인덱스를 가진 변수 3개를 선언하는것과 같음.
    //int number[3] = {10,10};  //10,10,0 으로 초기화됨.
    //int number[3] = {10,};
    wchar_t arr[] =L"배열의 초기화 값";

    setlocale(LC_ALL,""); // 다국어 초기화   
    
    wprintf(L"%ls %ld , %ld, %ld\n", arr, number[0],number[1],number[2]);

    return 0;    
}
