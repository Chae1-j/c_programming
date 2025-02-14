/*
-#if조건식에서 매크로를 실수나 문자열과 비교할 수 없음 > 컴파일 에러 발생함.
-#if에는 반드시 #endif필요
-사용방법
#if조건
    문장1;
#else
    문장2;
#endif
// > 조건이 참이면 문장1 컴파일, 거짓이면 문장2 컴파일. 다른 조건을 다시 검사하려면 #elif 이용
#if ~ 구문에서는 컴파일할 문장이 여러개여도 {}로 묶을 필요없음
*/

// result = x+y*0.5+z;
// #if INFO__LEVEL = 1
// printf("result = %f\n", result);
// #elif INFO__LEVEL = 2
// printf()