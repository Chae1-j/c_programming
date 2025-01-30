#include <stdio.h>
int main() 
{
    union sungjuk { // 구조체와 유사
        char grade;
        int score
    };

    union sungjuk std;
    std.grade = 'B';

    // 열거체
    enum week {sun, mon, tue, wed, thu, fri, sat};
    
    return 0;
}