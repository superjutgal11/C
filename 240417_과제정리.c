#include <stdio.h>
#include <math.h>

// C언어 중간고사 과제 퀴즈 정리

void quiz1_1() // if문으로 푸는 방법
{
    int a, b;
    printf("임의의 정수 입력1 : ");
    scanf("%d", &a);
    printf("임의의 정수 입력2 : ");
    scanf("%d", &b);

    if (a > b)
        printf("몫은 %d이고 나머지는 %d입니다.", a / b, a % b);
    else if (a < b)
        printf("몫은 %d이고 나머지는 %d입니다.", b / a, b % a);
}

void quiz1_2() // 3항 연산자로 푸는 방법
{
    int in_1, in_2, max, min; // 각각 입력받을 정수 2개 , 큰 수와 작은 수를 넣을 정수 2개
    printf("임의의 정수 입력1 : ");
    scanf("%d", &in_1);
    printf("임의의 정수 입력2 : ");
    scanf("%d", &in_2);

    // 더 큰 값은 max에 더 작은 값은 min에 할당함.
    max = in_1 > in_2 ? in_1 : in_2;
    min = in_1 < in_2 ? in_1 : in_2;

    printf("몫은 %d이고 나머지는 %d입니다.", max / min, max % min);
}

void quiz2()
{   // 1년은 365일로 1달은 30일로 가정함.
    int date;
    printf("일자 입력 >> ");
    scanf("%d", &date);
    printf("입력한 날짜: %d\n", date);
    printf("%d년 %d월 %d일", date / 365, (date % 365) / 30 , (date % 365) % 30);
}

void quiz3()
{
    const double PI = 3.14; // const 파이 상수 선언 및 할당
    double rad = 8.32 , v = 4.0/3.0*PI*pow(rad,3), s = 4*PI*pow(rad,2); 
    // pow함수를 쓰기 위해선 math.h 헤더파일을 포함시켜야 하고, pow 안쓰려면 걍 rad*rad*rad 하면 됨.

    printf("구의 체적은 %.3lf 입니다.\n구의 표면적은 %.3lf 입니다.",v,s);
    // 출력값 보면 소숫점 3자리까지 나오므로 %.3lf 로 코딩함.
}

void quiz4() // 조건연산자(삼항연산자)를 통해 푸는 경우
{
    int a,b,c,max; //max변수가 가장 큰 값을 넣는 변수

    printf("세 개의 정수 입력 >> ");
    scanf("%d %d %d",&a,&b,&c);

    max = a > b ? ( ( a > c ) ? a : c ) : ( ( b > c ) ?  b : c );
    printf("가장 큰 수 : %d",max);
}

void quiz5() // 조건연산자로 푸는 문제임
{
    double a,b; // 각각 키와 몸무게
    printf("키 입력 : ");
    scanf("%lf",&a);
    printf("몸무게 입력 : ");
    scanf("%lf",&b);
    (b <= (a-100)*0.9) ? printf("당신은 정상입니다.") : printf("당신은 비만 입니다.");
}

void quiz6()
{
    int year , money = 1000000 ; // 예치 기간 , 원금
    double per = 4.5 , result ; // 이율 , 총 금액

    printf("예치 기간 입력(년) >> ");
    scanf("%d",&year);

    result = money * pow(( 1 + per/100),year);
    // pow함수 쓰기 위해선 math.h 헤더파일 포함시키기
    // 비율로 곱해야 하므로 per/100 로 나눈 값을 1과 더함. 100 안나누면 금액이 1+4.5 해서 5,5배가 됨.
    // per이 실수형이므로 100.0 안해도 자동 향변환됨.

    printf("이율 : %.1lf%%   총 금액 : %.2lf",per,result);
    // 이율은 소숫점 1자리까지, 총 금액은 소숫점 2자리 까지임. printf 문 안에서 % 출력하려면 %% 써야 함.
}

int main()
{
    // quiz1_1(); // if 문으로 푼 1번 문제
    // quiz1_2(); // 삼항연산자로 푼 1번 문제
    // quiz2();
    // quiz3();
    // quiz4();
    // quiz5();
    // quiz6();
    return 0;
}