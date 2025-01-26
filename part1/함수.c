#include <stdio.h>
void prt(); // 순서대로 컴파일 되므로 이 부분이 없으면 prt함수가 main보다 뒤에 선언되어 있어서 에러 발생함. (이런 방식이 권장됨)
int add(int, int);
int main()
{
    prt();
    add(10, 5);
}

void prt()
{
    printf("Press any key to continue\n");
}

int add(int x, int y) // 두 수의 합을 출력하는 함수 - 호출 x 
{
    printf("%d + %d = %d", x,y, x+y);
}

