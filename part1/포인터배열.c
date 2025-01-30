#include <stdio.h>
// 2차원 배열과 포인터

int main()
{
    // str의 문자열을 거꾸로 출력
    char *str = "good morning";
    int i, count = 0;
    while(str[i++]) count++; // > count로 문자열의 갯수를 얻음
    for(i=count-1; i>=0;i--) printf("%c", *(str+i));

    int arr[3][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15}
    };

    int(*p)[5] = &arr[0]; //p를 int 5개짜리 배열인 arr[0]의 주소로 초기화

    return 0;
}