#include <stdio.h>
//rand함수를 사용하기 위해서는 stdlib.h 헤더파일을 include해야합니다. 
//rand함수는 0부터 RAND_MAX까지 범위까지 난수를 생성합니다.
#include <stdlib.h>
#include <time.h>

//한글 출력하기
#include <wchar.h>
#include <locale.h>


//switch 문 사용예제

int main()
{
    setlocale(LC_ALL,""); // ?로 출력되는 현상 방지  
    wchar_t arr[] = L"안녕하세요!"; // 한글 배열 선언  
    wprintf(L"%ls",arr); // ls임에 유의

    wprintf(L" ---- 가위 바위보 게임 ------------");

    //변수 초기화
    int comNumber =0;	//컴퓨터 숫자
	int myNumber = 0;	//내가 입력할 숫자

    // seed 값 설정 (시간을 기반으로 한 seed)    
    srand(time(NULL));
    
    while((myNumber >= 0) && (myNumber <= 2))
    {
        wprintf(L"0~2숫자를 입력하세요: 2보다 큰수면 게임이  종료됩니다.");        
        scanf("%d", &myNumber);    // 값을 입력받음

        // 입력 받은 숫자 출력
        wprintf(L"입력한 숫자: %d\n", myNumber);
        
        //랜덤 숫자만들기
        //참고로, rand() 함수는 진정한 무작위성을 제공하지 않기 때문에 암호화 용도 등에는 사용하지 말아야 합니다. 
        comNumber = rand() % 3;	//0~2        
        wprintf(L"치트: %d\n", comNumber);
		
		wprintf(L"가위(0), 바위(1), 보(2) 입력해라: \n");
		switch (myNumber)
		{
		case 0:	//가위
			switch (comNumber)
			{
			case 0:	//컴퓨터 가위
				wprintf( L"비겼다 \n");;
				break;
			case 1:	//컴퓨터 바위
				wprintf( L"졌다 \n");;
				break;
			case 2:	//컴퓨터 보
				wprintf( L"이겼다 \n");;
				break;
			}
			break;

		case 1:	//바위
			switch (comNumber)
			{
			case 0:	//컴퓨터 가위
				wprintf( L"이겼다 \n");;
				break;
			case 1:	//컴퓨터 바위
				wprintf( L"비겼다 \n");;
				break;
			case 2:	//컴퓨터 보
				wprintf( L"졌다 \n");;
				break;
			}
			break;

		case 2:	//보자기
			switch (comNumber)
			{
			case 0:	//컴퓨터 가위
				wprintf( L"졌다 \n");;
				break;
			case 1:	//컴퓨터 바위
				wprintf(L"이겼다 \n");;
				break;
			case 2:	//컴퓨터 보
				wprintf( L"비겼다 \n");;
				break;
			}
			break;
		default:
			wprintf( L"가위,바위,보 게임을 종료합니다! \n");;
			break;
		}
    }
}