#include <stdio.h>

int main()
{
    //char buffer[100];

    //gets_s(buffer, sizeof(buffer));    // 표준 입력에서 문자열을 입력받음
                                       // Visual Studio 2022

    //puts(buffer);    // 문자열을 화면(표준 출력)에 출력


    printf("현재의 날짜는 %s입니다.\n", __DATE__);
    printf("현재의 시간는 %s입니다.\n", __TIME__);
    printf("현재의 소스파일은 %s입니다.\n", __FILE__);
    printf("현재의 라인번호는 %d입니다.\n", __LINE__);

    return 0;
}
