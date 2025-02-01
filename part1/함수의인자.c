#include <stdio.h>
void sub(int *a) // < call by reference : 포인터로 전달함
{
    printf("%d", a[3]);
}

// struct tax {
//     int value;
//     int price;
//     double rate;
// };

// void sub2(struct tax a)
// {}

typedef struct tax{
    int value;
    int price;
    double rate;
}TAX;

void sub2(TAX *a)
{
    printf("%f", a-> value*a -> price*a -> rate);
}

int main() {
    int std[30] = {1,2,4,5,6};
    sub(std);
    // struct tax elec = {300,2700,5.7}; 
    // sub2(elec);//구조체 전달
    TAX elec = {300, 2700, 5.7};
    sub2(&elec);
    return 0;
}