#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MET 3.3
// 스캔f 오류 안뜨게

void p1(){
    // 각 데이터타입이 몇 바이트의 크기를 갖는지 출력하는 함수.

    // int a 선언 후 a 넣어도 되고 걍 int 넣어도 됨.
    printf("short 방의 크기 : %d \n",sizeof(short));
    printf("int 방의 크기 : %d \n",sizeof(int));
    printf("long 방의 크기 : %d \n",sizeof(long));
    printf("long long 방의 크기 : %d \n",sizeof(long long));

    printf("float 방의 크기 : %d \n",sizeof(float));
    printf("double 방의 크기 : %d \n",sizeof(double));
    printf("long double 방의 크기 : %d \n",sizeof(long double));

    printf("char 방의 크기 : %d \n",sizeof(char));

    // short 방의 크기 : 2 
    // int 방의 크기 : 4 
    // long 방의 크기 : 8 
    // long long 방의 크기 : 8 
    // float 방의 크기 : 4 
    // double 방의 크기 : 8 
    // long double 방의 크기 : 8 
    // char 방의 크기 : 1 

}

void p2(){
    // 각 데이터타입 간의 표현 범위에 대한 함수

    short year = 0;
    int sale = 0;
    long long total_sale = 0;

    year = 10; // 약 3만 2천을 넘지 않도록
    sale = 200000000; // 약 21억을 넘지 않도록
    total_sale = year * sale; // 웬만하면 넘지 않으니 자유롭게

    printf("%hd   %d   %lld",year,sale,total_sale);
}

void p3(){
    // scanf 에서 값들을 구분받는 방법에 대한 함수

    int a,b;

    printf("날짜 입력 : ");
    scanf("%d.%d",&a,&b); // . 를 기준으로 구분하여 데이터를 할당한다.
    printf("%d %d",a,b);
}

void p4(){
    // 사용자롭터 정수 실수로 데이터를 받아 재출력 하여 보자. c에선 필요 변수를 위에서 선언하는게 좋음.
    int a,b,c,d;
    float e;

    printf("오늘의 날짜를 입력하시오(YYYY.MM.DD) : ");
    scanf("%d.%d.%d",&a,&b,&c);
    printf("요즘 영화 한편 보려면 얼마나 하나요? : ");
    scanf("%d",&d);
    printf("멤버쉽 카드가 있다면 얼마나 할인되나요? : ");
    scanf("%f",&e);
    printf("\n");
    printf("%d년 %d월 %d일 저녁에\n",a,b,c);
    printf("%d원으로 영화 한 편 보면 어때요?\n",d);
    printf("%.2f%%나 할인받을 수 있는데요!\n",e);
}

void p5(){
    // 이거 b에 값 안들어가는데 알아보기.
    char a , b;
    printf("영어 이름 첫 글자는 무엇인가요 ? : ");
    scanf("%c",&a);
    printf("프로그래밍 과목 학점은 무엇인가요? : ");
    getchar();
    scanf("%c",&b);
    printf("\n");
    printf("%c군의 프로그래밍 과목 성적은 %c입니다.\n",a,b);

}

void p6(){
    // 빛의 속도는 1초에 30만km을 이동한다.
    // 태양와 지구 사이의 거리는 약 1억 4960만 km이다.
    // 이때 태양에서 지구까지 빛은 몇초만에 도착할까??
    // 속도 = 거리/시간 , 즉 시간 = 속도/거리

    long double a = 300000 , b = 149600000;
    printf("%Lf초 걸립니다.",b/a);    
}

void p7(){
    char a = 'x';
    // 이게 이상적
    char b = "x";
    // 오류
    char c[2] = "x";
    printf("%c",c);
    
    // 이 부분 공부 더 해야될 듯;;
}

void p8(){
    // 부피 구하는 프로그램 작성
    // 부피는 길이 넓이 높이의 곱으로 구하며 모두 더블형으로 받아 내자.

    double a,b,c;
    printf("상자의 가로 세로 높이를 한번에 띄어쓰기로 구분하여 입력하시오.\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("상자의 부피는 %lf입니다.\n",a*b*c);
}

p9(){
    // 평을 제곱미터로 환산하는 프로그램을 작성하라. 1평은 3.3m^2이다. 기호상수를 이용하여 1평당 제곱미터를 나타내라.

    // 맨 뒤에 #define MET 3.3 으로 기호상수 선언해 둔 상태임.
    float a;
    printf("평을 입력하시오 : ");
    scanf("%f",&a);
    printf("%f평방미터입니다.\n",MET*a);
     
}

p10(){
    //운동에너지는 0.5*m*v^2로 계산한다. 질량과 속도를 사용자로부터 받아 운동에너지를 구하라. 모든 변수는 더블형을 사용하라.

    double a,b,c;
    printf("질량 : ");
    scanf("%lf",&a); 
    printf("속도 : ");
    scanf("%lf",&b); 
    c = 0.5 * a * b * b ;
    printf("운동 에너지 : %lf\n",c);
}

p11(){
int a=3,b=4;
printf("%d",a/b);
printf("\n");
float c = 4;
printf("%f",a/c);

}

p12(){
    int x,y,result;
    printf("두 개의 정수를 입력하시오 : ");
    scanf("%d %d",&x,&y);

    result=x+y;
    printf("%d + %d = %d\n",x,y,result);

    result=x-y;
    printf("%d - %d = %d\n",x,y,result);

    result=x*y;
    printf("%d * %d = %d\n",x,y,result);

    result=x/y;
    printf("%d / %d = %d\n",x,y,result);
}

p13(){
    int a,b;
    printf("2개의 정수를 입력하세요 : ");
    scanf("%d %d",&a,&b);
    printf("몫은 %d입니다.\n나머지는 %d입니다.\n",a/b,a%b);
}

p14(){
    int a,b,c;
    int x5000,x1000,x500,x100,x50,x10;

    printf("고객으로부터 받은 돈 : ");
    scanf("%d",&a);
    printf("물건 값 : ");
    scanf("%d",&b);

    c = a - b ; // c는 거스름돈임

    if (c>5000){
        x5000 = c/5000;
        printf("오천원 : %d\n",x5000);
        c = c - 5000*x5000;
    } else{
        printf("오천원 : 0\n");    
    }
    if (c>1000){
        x1000 = c/1000;
        printf("천원 : %d\n",x1000);
        c = c - 1000*x1000;
    } else {
        printf("천원 : 0\n");  
    }
    if (c>500){
        x500 = c/500;
        printf("오백원 : %d\n",x500);
        c = c - 500*x500;
    }else{
    printf("오백원 : 0\n");  
    }
    if (c>100){
        x100 = c/100;
        printf("백원 : %d\n",x100);
        c = c - 100*x100;
    }else{
        printf("백원 : 0\n");  
    }
    if (c>50){
        x50 = c/50;
        printf("오십원 : %d\n",x50);
        c = c - 50*x50;
    }else{
        printf("오십원 : 0\n");  
    }
    if (c>10){
        x10 = c/10;
        printf("십원 : %d\n",x10);
        c = c - 10*x10;
    }else{
        printf("십원 : 0\n");  
    }
}

p15(){
    // 화씨 온도를 섭씨 온도로 바꾸는 프로그림
    float a;
    printf("화씨 온도를 입력해 주세요 : ");
    scanf("%f",&a);
    printf("화씨 온도 : %f\n섭씨 온도 : %f\n",a,5.0/9.0*(a-32));
    // 반드시 5.0/9.0 으로 해야 함.
    printf("화씨 온도 : %f\n섭씨 온도 : %f\n",a,5./9.*(a-32));
    printf("화씨 온도 : %f\n섭씨 온도 : %f\n",a,(float)5/(float)9.0*(a-32));

// 화씨 온도를 입력해 주세요 : 100
// 화씨 온도 : 100.000000
// 섭씨 온도 : 37.777778
// 화씨 온도 : 100.000000
// 섭씨 온도 : 37.777778
// 화씨 온도 : 100.000000
// 섭씨 온도 : 37.777779
}


int main(){
    // p1();
    // p2();
    // p3();
    // p4();
    p5();
    // p6();
    // p8();
    // p9();
    // p10();
    // p11();
    // p13();
    // p14();
    // p15();






    return 0;
}