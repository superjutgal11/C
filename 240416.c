#include <stdio.h>
#include <math.h>

void f1()
{
    double vol, radius = 3;
    const double PI = 3.141592;

    vol = 4.0 * PI * pow(radius, 3) / 3.0;
    // pow함수 사용 위해서는 math헤더를 포함시켜야 한다.
    printf("구의 부피 : %f", vol);
}

f2()
{
    // 파이썬이랑 다르게 c에서는 a=b=x 이런 식으로 동시 할당이 불가능하다.
    float x0 = 0, y0 = 0, g = 9.8, vx = 20, vy = 20;
    int t = 1;
    printf("%d초 후의 위치 = <%f %f>\n", t, x0 + vx * t, y0 + vy * t - 0.5 * g * pow(t, 2));
    t = 2;
    printf("%d초 후의 위치 = <%f %f>\n", t, x0 + vx * t, y0 + vy * t - 0.5 * g * pow(t, 2));
    t = 3;
    printf("%d초 후의 위치 = <%f %f>\n", t, x0 + vx * t, y0 + vy * t - 0.5 * g * pow(t, 2));
}

f3()
{
    printf("정수를 입력하시오 : ");
    int a = 0, b = 0;
    scanf("%d", &a);
    b = (a % 2 == 1) ? 2 : 1;
    printf("%d", b);
}

f4()
{
    int a, h, m, s;
    printf("초를 입력하세요 : ");
    scanf("%d", &a);
    h = a / 3600;
    m = (a % 3600) / 60;
    s = (a % 3600) % 60;
    printf("%d hours,  %d minutes , and %d seconds\n", h, m, s);
}

void f5()
{
    int x1, x2, y1, y2;
    double l;

    printf("첫 번째 점(x1,y1) : ");
    scanf("%d %d", &x1, &y1);
    printf("두 번째 점(x2,y2) : ");
    scanf("%d %d", &x2, &y2);

    l = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Distance = %lf\n", l);
}

void f6()
{
    int x = 10, y = 0;
    printf("%d && %d 의 결과값 : %d", x, y, x && y);
    printf("\n%d || %d 의 결과값 : %d", x, y, x || y);
    printf("\n!x의 결과값 : %d", !x);
    printf("\n!y의 결과값 : %d", !y);
}

void f7()
{
    int a;
    printf("날씨가 좋으면 1 안좋으면 0을 입력하세요 : ");
    scanf("%d", &a);

    if (a) // c언어에서 if문 옆 조건문에 반드시 ()로 둘러 줘야 한다.
        printf("테니스를 칩니다.\n");
    else
        printf("공부를 합니다.\n");
}

void f8()
{
    // 홀 짝 구분 if문 함수
    int a;
    printf("정수를 입력하시오 : ");
    scanf("%d", &a);

    if (a % 2 == 0)
        printf("짝수입니다.");
    else
        printf("홀수입니다.");
}

void f9()
{
    // 입력되는 수 중 더 큰 값 출력
    printf("두 정수를 입력 : ");
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("%d가 더 큽니다\n", a);
    else
        printf("%d가 더 큽니다\n", b);
}

void f10()
{
    // 윤년 판단
    int year;
    printf("년을 입력 : ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 == 1) || year % 400 == 0)
        printf("윤년이야");
    else
        printf("윤년 아님");
}

f11()
{
    // 학점 결정 코드
    printf("성적을 입력하여 주십시오 : ");
    int score;
AAA:
    scanf("%d", &score);

    if (score >= 90)
        printf("학점 A\n");
    else if (score >= 80)
        printf("학점 B\n");
    else if (score >= 70)
        printf("학점 C\n");
    else if (score >= 60)
        printf("학점 D\n");
    else if (score >= 0)
        printf("학점 F\n");
    else
    {
        printf("잘못 입력했다. 다시 입력하세요 : ");
        goto AAA;
    }
}

int main()
{
    // f1();
    // f2();
    // f3();
    // f4();
    // f5();
    // f6();
    // f7();
    // f8();
    // f9();
    // f10();
    // f11();
    return 0;
}