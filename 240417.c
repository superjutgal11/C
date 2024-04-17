#include <stdio.h>
#include <math.h>

// 교수님이 낼 가능성 높은 문제들 + 이론

void q1() // ch4에 있는 연산자를 통한 계산 문제
{
    printf("%d 더하기 %d는 %d입니다.\n", 2, 3, 2 + 3);
    printf("%d 곱하기 %d는 %d입니다.\n", 2, 3, 2 * 3);
    printf("%d 나누기(몫) %d는 %d입니다.\n", 2, 3, 2 / 3);
    printf("%d 나누기(나머지) %d는 %d입니다.\n", 2, 3, 2 % 3);
}

#define PI 3.141592 // 기호상수
void q2()           // 초5에 있는 원의 면적 구하는 문제. 기호상수와 const상수 사용하는 방법
{
    // 기호상수면 main함수 밖에서 #define PI 3.14 처럼 선언해야 하고 ( 대입연산자 = 나 세미콜론 ; 안붙여도 됨)
    // const상수면 main함수 내에서 const double PI = 3.14; 처럼 선언해야 함.

    const double RAD = 10.0; // const 상수 선언할당 방법
    double area;

    area = PI * RAD * RAD;
    printf("원의 면적 : %lf", area);
}

void q3() // scanf 에서 구분 문자 사용하기
{
    // scanf("%d %d"); 에서 형식 구분자 사이를 구분 문자로 사용 가능
    int a, b, c;
    printf("년도와 월과 일을 .로 구분하여 입력 : ");
    scanf("%d.%d.%d", &a, &b, &c);
    printf("%d년 %d월 %d일", a, b, c);
}

int main()
{
    // q1();
    // q2();
    // q3();
    return 0;
}