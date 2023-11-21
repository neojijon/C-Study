//형정의 typedef 
#include <stdio.h>
#include <string.h>

typedef struct student //형정의를 함,
{
    char name[10]; //10byte
    char id;        //1byte
    char bloodType[2];//2byte
} Student; //변수가 아님 

int main()
{
    Student  st; //형정의해서 새롭게 변수 선언
    
    strcpy(st.name,"Joey");
    printf("name = %s\n", st.name);

    st.id = 1;
    printf("id = %d\n", st.id);

    strcpy(st.bloodType,"AB");
    printf("Blood Type = %s\n", st.bloodType);
   
    return 0;
}