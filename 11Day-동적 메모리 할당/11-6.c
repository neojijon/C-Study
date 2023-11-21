//동적 메모리 재할당 예제
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int *arr = (int*)malloc(sizeof(int)*5); //arr[5]
    //int *arr = (int*)calloc(5,sizeof(int)); 
    //int *rearr;

    if (arr == NULL) {
        printf("메모리 할당 실패\n");
        return 1;
    }

    for(i=0; i< 5; i++)
    {
        *(arr + i) = i+1;
        //arr[i] = i+1;
    }

    printf("before %d\n\n", (unsigned int)_msize(arr) / sizeof(int));
    
    arr = (int*)realloc(arr,sizeof(int)* 10); //rearr[10]

    printf("after %d\n",(unsigned int)_msize(arr) / sizeof(int));

    if (arr == NULL) {
        printf("메모리 할당 실패\n");
        return 1;
    }

    for(i=5; i< 10; i++)
    {
        //*(rearr + i) = i+1;
        arr[i] = i+1;
    }

    for(i=0; i< 10; i++)
    {
        printf("%d\n", *(arr + i));        
    }

    free(arr);

    return 0;
}