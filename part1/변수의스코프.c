#include <stdio.h>
int sub(int);
int main() {
    int a;
    printf("%d\n",a);
    a=3;
    printf("%d\n",a);
    a = sub(a);
    printf("%d\n", a);
    return 0;
}

int sub(int a)
{
    printf("sub에서 호출 : %d\n",a);
    a++;
    return a;
}
/* 
extern으로 선언하면 외부파일에서도 참조 가능함!!
exterm int a; < 이렇게 사용하면 됨
*/