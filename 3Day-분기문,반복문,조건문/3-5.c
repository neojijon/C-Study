#include <stdio.h>
//이중 for문 사용으로 구구단 출력 
int main()
{
    for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
            printf("%d * %d = %d\n",i,j,i*j);
		}
	}
}