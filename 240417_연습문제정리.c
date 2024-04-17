#include <stdio.h>
#include <math.h>

// C프로그래밍 중간고사 - PPT 연습문제 풀이

void ch4_1() // 4강 연습문제 1
{
    printf("축하합니다.\n");
    printf("이제 여러분도 프로그래머입니다.\n");
}

void ch4_2() // 4강 연습문제 2
{
    printf("*****\n");
    printf("*****\n");
    printf("*****\n");
    printf("*****\n");
    printf("*****\n");
}

void ch6_1() // 6강 연습문제 1
{
    int a;
    printf("나이를 입력하시오 : ");
    scanf("%d", &a);
    printf("당신은 %d살입니다.", a);
}

void ch6_2() // 6강 연습문제 2 ( 입력 문자 ASCII 코드로 변환 )
{
    char a;
    printf("문자를 입력하시오 : ");
    scanf("%c", &a);
    printf("ASCII 코드 : %d\n", a);
}

void ch6_3() // 6강 연습문제 3
{
    float a, b;
    printf("2개의 실수를 입력하시오 : ");
    scanf("%f %f", &a, &b);
    printf("합의 정수부 = %d", (int)a + (int)b);
    // int형으로 형변환 후 정수부분만 합한 후 %d로 받아 냄
}

void ch6_4() // 6강 연습문제 4
{
    float q1, q2, q3, q4;

    printf("==========QUIZZES==========\n");
    printf("퀴즈 성적 : ");
    scanf("%f", &q1);
    printf("퀴즈 성적 : ");
    scanf("%f", &q2);
    printf("==========MID-TERM==========\n");
    printf("중간고사 성적 : ");
    scanf("%f", &q3);
    printf("==========FINAL==========\n");
    printf("기말고사 성적 : ");
    scanf("%f", &q4);
    printf("Quizz Total : %f\n", q1 + q2);
    printf("Mid : %f\n", q3);
    printf("Final : %f\n", q4);
    printf("....................\n");
    printf("Total : %f\n", q1 + q2 + q3 + q4);
}

void ch7_1() // 7강 연습문제 5
{
    float x, y, z; // 가로 세로 높이
    printf("상자의 가로 세로 높이를 한번에 입력하시오 :\n");
    scanf("%f %f %f", &x, &y, &z);
    printf("상자의 부피는 %f입니다.", x * y * z);
    // 만약 x,y,z를 double 데이터타입으로 선언한 경우 형식 연산자는 &lf 를 사용한다.
}

#define MET 3.3058 // 기호상수 선언. 상수는 대문자로 표현함.
void ch7_2()       // 평 단위를 제곱미터 단위로 롼산. 1평은 3.3058 제곱미터임. 조건으로 기호상수 사용하기.
{
    // 기호상수 = define 으로 main 함수 밖에서 선언하는 것.
    // const 상수 = const를 자료형 앞에 붙여 상수로 선언하는 것.

    float a;
    printf("평을 입력하세요 : ");
    scanf("%f", &a);
    printf("%f평방미터입니다.", MET * a);
}

void ch7_3() // 물리학 운동 에너지 계산 코드
{
    // 운동에너지 공식은 0.5 * m * v^2 로 계산한다.
    double m, v; // 변수를 double형으로 사용하라는 조건이 문제에 있음.
    printf("질량 : ");
    scanf("%lf", &m);
    printf("속도 : ");
    scanf("%lf", &v);
    printf("운동 에너지 : %lf", 0.5 * m * v * v);
    // 0.5 대신 1.0/2.0 로 계산해도 가능.
}

void ch8_1() // 연습문제. 짝수인지 홀수인지 삼항연산자 사용하여 구하기
{
    int a, ans; // a는 입력받는 정수값, ans는 출력할 정수값.
    printf("정수를 입력하시오 : ");
    scanf("%d", &a);
    // 짝수면 1을, 홀수면 2를 출력해야 함.
    ans = a % 2 == 0 ? 1 : 2; // a와 2의 나머지가 0이면 짝수(1)을, 아니면 홀수(2)를 a에 대입.
    printf("%d", ans);
}

void ch8_2() // 초 단위 시간 받아서 시간, 분, 초로 반환하는 프로그램.
{
    int ho, min, sec; // 시간 분 초를 담을 변수들
    printf("초를 입력하시오 : ");
    scanf("%d", &sec);
    ho = sec / 3600;
    min = (sec % 3600) / 60;
    sec = (sec % 3600) % 60;
    printf("%d hours, %d minutes, and %d seconds", ho, min, sec);
}

void ch8_3() // 2차원 공간에서 두 점 사이의 거리 계산 프로그램
{
    // 이 코드에서 사용되는 제곱함수(pow)와 제곱근함수(sqrt)는 math.h 헤더파일에
    // 들어있으므로 #include <math.h> 으로 맨 위에 선언 해 둬야 함.

    int x1, x2, y1, y2; // 입력받는 점들은 정수라는 조건 있음
    printf("첫번째 점 (x1,y1) : ");
    scanf("%d %d", &x1, &y1);
    printf("두번째 점 (x2,y2) : ");
    scanf("%d %d", &x2, &y2);

    double dis; // 거리는 실수형으로

    dis = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    // pow함수 없이 하려면 이렇게도 가능 : dis2 = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    printf("Distance = %lf\n", dis);
}

void ch9_1() // if 문을 통한 짝수 홀수 구분 프로그램
{
    int a;
    printf("정수를 입력하시오 : ");
    scanf("%d", &a);

    if (a % 2 == 0) // c언어에서는 if옆에 꼭 괄호 쓰고 그 안에 조건문 넣기
        printf("%d는 짝수입니다.", a);
    else
        printf("%d는 홀수입니다.", a);
}

void ch9_2() // 신호등. 대소문자 구분 없다는 조건  if-else 문 사용 조건 있음.
{
    char sig;
    printf("신호등의 색깔 입력 (R, G, Y) : ");
    scanf("%c", &sig);
    if (sig == 'r' || sig == 'R') // or연산자로 대소문자 구분 없음 조건 처리.
        printf("정지!");
    else if (sig == 'g' || sig == 'G') // 문자는 ''로 문자열은 ""로 처리
        printf("진행!");
    else if (sig == 'y' || sig == 'Y')
        printf("주의!");
}

void ch9_3() // 자음인지 모음인지 판별
{
    char a;
    printf("글자를 입력하시오 : ");
    scanf("%c", &a);
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
        printf("%c는 모음입니다.", a);
    else
        printf("%c는 자음입니다.", a);
}

int main()
{
    // ch6_2();
    // ch6_3();
    // ch6_4();
    // ch7_1();
    // ch7_2();
    // ch7_3();
    // ch8_1();
    // ch8_2();
    // ch8_3();
    // ch9_1();
    // ch9_2();
    // ch9_3();

    return 0;
}