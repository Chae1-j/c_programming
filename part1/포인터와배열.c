#include <stdio.h>

const int MAX = 3;

int main(void)
{
    int var[] = {100,200,300};
    int i;
    int *parr = var;
    for(i=0; i<MAX;i++) {
        printf("Pointer Value of var[%d] = %d\n",i, *(parr+i));
        printf("Index Value of var[%d] = %d\n", i, parr[i]);
    }

    // char ch;
    // char *pc = &ch;

    // int n;
    // int *pi = &n;

    // double d;
    // double *pd = &d;

    // int arr[3];
    // int i;

    // for(i = 0; i < 3; i++){
    //     printf("pi+%d = %p\n", i, pi+i);
    // }

    // for(i = 0; i < 3; i++){
    //     printf("pd+%d = %p\n", i, pd+i);
    // }

    // for(i = 0; i < 5; i++){
    //     printf("&arr[%d]-&arr[0] = %d\n", i, &arr[i]-arr[0]);
    // }

    return 0;
}