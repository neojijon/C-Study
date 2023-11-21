#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5
 
void doubleArr(int** arrAdress) {
    int* temp = (int*)malloc(sizeof(int) * MAX * 2);
    //int* temp = (int*)calloc(MAX*2, sizeof(int)); 
    memcpy(temp, *arrAdress, MAX);
    free(*arrAdress);
    *arrAdress= temp;
    temp = NULL;
} 
int main(void) {
    int* arr1 = (int*)malloc(sizeof(int) * MAX); 
    //int *arr1 = (int*)calloc(MAX,sizeof(int)); 

    printf("before %d\n\n", (unsigned int)_msize(arr1) / sizeof(int));
    doubleArr(&arr1);
    printf("after %d\n",(unsigned int)_msize(arr1) / sizeof(int));
    return 0;
}
