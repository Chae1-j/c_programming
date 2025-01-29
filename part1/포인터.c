/* 
- 포인터 변수는 항상 4byte
- 포인터 변수의 역할은 다른 변수를 가리키는 변수
- 포인터 변수의 데이터 타입은 포인팅하는 변수의 데이터 타입과 동일한 타입으로 선언
*/
#include <stdio.h>

//sizeof() 연산자
int a;
char b;
double c;
int* pa;
char *pb;
double * pc;

int a = 5;
int *pa = &a;

// 포인터 활용
int main()
{
    // int a = 9;
    // int *pa = &a;

    // printf("변수 a의 값은  %d이고 a의 주소는 %p이다. \n" , a, &a);
    // printf("포인터 변수 pa의 값은 %p이고 pa가 가리키는 곳의 값은 %d이다." , pa, *pa);
    // *pa =12;
    // printf("a=%d",a);


    int a, b=4;
    char ch='k'; char *pch= &ch;
    int *pa=&a; *pa=7;
    printf("a=%d *pa = %d \n",a, *pa);
    printf("ch=%c *pch = %c \n", ch, *pch );
    pa = &b;
    printf("b=%d \n",b);
    *pa = 15;
    printf("b=%d \n", b);

    return 0;
}