// #으로 시작하는 코드들 전처리기 > 컴파일러 > 링커
/*
define 매크로를 정의
include 헤더 파일을 포함
if, else, endif 조건에 따라 컴파일 
ifdef 매크로가 정의된 경우에 컴파일
ifndef 매크로가 정의되지 않는 경우에 컴파일
*/
#include <stdio.h>

// 예제 - 매크로 상수 만들기 #define 매크로명 값
#define MAX 100
#define MIN -MAX // 일반적으로 c에서는 매크로명을 대문자로!
