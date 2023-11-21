/*
 오늘의 주제
    - C 언어 소개와 역사
    - 변수, 데이터 타입, 연산자
    - 주석 달기        
    - Hello World 문자 출력하기
*/

//빌드(build)==컴파일(compile)+링크(link)
//- Hello World 출력하기

// standard 라이브러리를 추가함.
#include <stdio.h>

// 문단주석처리시
int main() 
{
    //한줄주석
    //콘솔화면에 문자를 출력하는 함수
    printf("Hello, World!\n");
    return 0;
}

/*
int main(int argc, char const *argv[]) // exe 파일 뒤에 추가 할수 있는 파라미터를 추가할수 있음.
{
    //콘솔화면에 문자를 출력하는 함수
    printf("Hello Wolrd");  
    //printf("Hello, World!\n");  

    //문자 대입 출력하기
    //printf("%s\n", "Hello, world!");
    
    for(int i=0; i < argc; i++)
    {
        printf("argv[%d]는 %s\n", i, argv[i] );
    }

    printf("argc는 %d개 입니다.\n", argc );

    return 0;
}
*/


