#include <stdio.h>
struct student
{   
    /* data */
    char name[20];
    int num,kor,eng,mat;
    double average;
}; // 구조체 선언
struct sungjuk
{
    char *name;
    int kor,eng;
    double avg;
};
/*
struct point {
    int x;
    int y;
} p1,p2; >> 구조체 정의 시 구조체 변수(p1,p2)를 함께 선언. 
- 구조체 정의하면서 변수 함께 선언할 때는 태그명 생략 가능
*/

int main()
{
    struct sungjuk m2_1;
    m2_1.name = "hong kildong";
    m2_1.kor = 95;
    m2_1.eng = 87;
    m2_1.avg = (double)(m2_1.kor + m2_1.eng)/2.0;
    printf("이름 : %s, 국어 : %d, 영어 : %d, 평균 : %f", m2_1.name, m2_1.kor, m2_1.eng, m2_1.avg);
    return 0;
}