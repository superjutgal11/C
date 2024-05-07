#include <stdio.h>

void f1() // 3항 연산자를 이용하여 입력받은 4가지의 수 중 가장 작은 수를 출력하는 중간고사 문제
{
    int a, b, c, d, min = 0;
    printf("네개의 숫자를 입력 : ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    min = a > b ? b : a;
    min = min > c ? c : min;
    min = min > d ? d : min;
    printf("가장 작은 수는 %d입니다\n", min);
}

void f2()
{
    /* switch - case 문
    : 여러 가지 경우 중에서 하나를 선택하는데 사용

    switch(조건식){
        case 값1:
            문장;
            break;
        case 값2:
            문장;
            break;
        default:
            문장;
            break;
    }

    조건식에는 변수가 들어가거나 간단한 식(number+1 같은)
    여기서 값은 정수값(정수 또는 문자열[아스키코드]만 위치 가능)
    case 뒤에는 콜론이 필요.
    default가 존재하는 경우, 위의 값들이 전부 아닐 때 실행된다.
    */

    int number;
    printf("정수 입력 : ");
    scanf("%d", &number);

    switch (number)
    {
    case 0: // case 옆은 정수와 아스키코드(문자형 데이터)만 가능. 문자열 아니고 문자열만 올 수 있음 !!!
        printf("0을 입력하셨군요!");
        break; // 여기서 break룰 빼면 0과 defalt가 실행
    case 1:
        printf("1을 입력하셨군요!");
        break;
    default:
        printf("0과 1은 아니네");
        break;
    }
}

void f3() // switch문으로 입력받은 성적의 학점 구하기. case옆에는 정수문으로만 가능. 100~91 이 A인 경우임.
{
    int score;
    printf("성적을 입력하세요 : ");
    scanf("%d", &score);
    switch ((score - 1) / 10)
    {
    case 10: // 100~90인 경우 case 10 필요하나 91부터이면 case 10 필요 없음.
    case 9:  // break 없는 경우 그대로~ 아래로 내려감. 즉 값이 10이거나 9일 때 A입니다가 실행됨.
        printf("A입니다.");
        break;
    case 8:
        printf("B입니다.");
        break;
    case 7:
        printf("C입니다.");
        break;
    case 6:
        printf("D입니다.");
        break;
    default:
        printf("F입니다.");
        break;
    }
}

void f4()
{
    int a;
    printf("달을 입력하시오 : ");
    scanf("%d", &a);

    switch (a)
    {
    case 2: // 제일 수가 적은건 젤 앞에
        printf("2월은 28일 입니다.");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("%d월은 30일 입니다.", a);
        break;

    default: // 제일 많은건 젤 뒤에서 디폴트로
        printf("%d월은 31일 입니다.", a);
        break;
    }
}

void f5()
{
    char b;
    int a, c; // b에 연산자 들어감. // + 43 , - 45 ,  * 42 ,  / 47 , % 37
    printf("수식을 입력하시오\n<예 : 2 + 5>\n");
    scanf("%d %c %d", &a, &b, &c);

    switch (b)
    {
    case '+': // 문자형 데이터 사용 시 ''로 묶기.....아스키 반환시킬 필요 없음
        printf("%d + %d = %d", a, c, a + c);
        break;
    case '-':
        printf("%d - %d = %d", a, c, a - c);
        break;
    case '*':
        printf("%d + %d = %d", a, c, a * c);
        break;
    case '/':
        printf("%d + %d = %d", a, c, a / c);
        break;
    }
}

void f6()
{
    printf("신호등의 색깔 입력 :");
    char color;
    scanf("%c", &color);

    switch (color)
    {
    case 'r':
    case 'R':
        printf("정지!\n");
        break;
    case 'g':
    case 'G':
        printf("진행!\n");
        break;
    case 'y':
    case 'Y':
        printf("주의!\n");
        break;
    }
}

void f7()
{
    getchar();
    printf("글자를 입력하시오 : ");
    char ans;
    scanf("%c", &ans);
    switch (ans)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("모음 입니다.");
        break;
    default:
        printf("자음 입니다.");
        break;
    }
}

void f8()
{
    int a = 0;
    while (a < 5)
    {
        printf("안녕\n");
        a++;
    }
}

void f9()
{
    int i = 1, sum = 0;
    while (i <= 10) // (++i <= 10) 도 가능하당께. 줄 1줄이면 {} 안해도 되는거 알제
    {
        printf("%d ", i);
        sum += i;
        i++;
    }
    printf("\n합계는 %d\n", sum);
}

void f10()
{
    int i = 0, fac = 1;
    while (++i <= 10)
        fac *= i;
    printf("10!는 %d임\n", fac);
}

void f11()
{
    int i = 0, j = 0;
    while (++i <= 9)
    {
        while (++j <= 9)
            printf("%d x %d = %d   ", i, j, i * j);
        printf("\n");
        j = 0;
    }
}

int main()
{
    // f1();
    // f2();
    // f3();
    // f4();
    // printf("%d %d %d %d %d\n", (int)'+', (int)'-', (int)'*', (int)'/', (int)'%'); // 43 45 42 47 37
    // f5(
    // f6();
    // f7();
    // f8();
    // f9();
    // f10();
    f11();
    return 0;
}