/*
_CRT_SECURE_NO_WARNINGS는 Microsoft Visual Studio에서 사용되는 매크로로, 
보안 경고를 비활성화하는 데 사용됩니다. 
이 매크로를 사용하면 일부 함수들에서 발생할 수 있는 일부 경고 메시지를 무시하고
더 이상 해당 경고가 표시되지 않도록 할 수 있습니다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //포인터
    char *s1 = malloc(sizeof(char) * 10);
    char *s2 = malloc(sizeof(char) * 10);
    char *s3 = malloc(sizeof(char) * 10);

    printf("문자열을 세 개 입력하세요: \n");
    s1 = "Hello World!!! Friends";
    s2 = " My ";
    s3 = "Friends";

    printf("%s\n", s1);
    printf("%s\n", s2);
    printf("%s\n", s3);

    free(s1);
    free(s2);
    free(s3);

    return 0;
}
