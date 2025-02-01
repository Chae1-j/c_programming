#include <stdio.h>
// void TestGlobal(void)
// {
//     global = 10;
// }

int global = 0;

void func() {
    static int x = 0;
    int y = 0;
    x++;
    y++;
    printf("%d  %d\n",x,y);
}

char* Reverse(const char *str) // 주소(char*)를 리턴하는 함수
{
    // char result[80]; // result 배열을 지역변수로 선언
    static char result[80]; 
    int i;
    int len = strlen(str);
    for(i = 0; i < len; i++)
    result[i] = str[len-i-1];
    result[i] = '\0';
    return result; // result 배열명이므로 지역 변수인 배열의 주소를 리턴함. (포인터를 리턴하는 함수를 정의할 때는 함수 안에 선언된 지역변수의 주소를 리턴하지 않도록 주의!!)
}
int main(void){
    auto int x = 10;
    int y = 20;

    func();
    func();
    func();

    return 0; 
}