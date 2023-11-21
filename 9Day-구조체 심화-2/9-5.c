#include <stdio.h>
#include <string.h>

//공용체선언
//메모리를 같이 사용
//가장큰 변수 name의 크기로 공용체 메모리 10바이트

union student
{
    char name[10];    //10byte 제일큰 10byte를 가지고 같이 사용함.
    char id;          //1byte
    char bloodType[2];//2byte  
}st;


struct teacher
{
    char name[10]; //10byte
    char id;        //1byte
    char bloodType[2];//2byte
}te;

int main()
{
    printf("sizeof(st) = %d\n", sizeof(st)); //유니온의 메모리 사이즈계산
    printf("sizeof(te) = %d\n", sizeof(te)); //구조체의 메로리 사이즈 계산

    strcpy(st.name,"Joey");
    printf("name = %s\n", st.name);

    st.id = 1;
    printf("id = %d\n", st.id);

    strcpy(st.bloodType,"AB");
    printf("Blood Type = %s\n", st.bloodType);
   
    printf("name = %s\n", st.name);  //이미 다른값들로 변경되어버림.

    return 0;
}