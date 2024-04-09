#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void f1(){
   int a , b;
   printf("임의의 정수 입력 1 : ");

   scanf("%d", &a);
   printf("임의의 정수 입력 2 : ");
   scanf("%d", &b);
   if (a < b) {
      printf("몫은 %d이고 나머지는 %d입니다.\n",b/a,b%a);
   }
   else if (a > b) {
      printf("몫은 %d이고 나머지는 %d입니다.\n",a/b,a%b);
   }
   else {
      printf("두 수를 다른 값으로 입력 바랍니다.\n");
   }
}

void f2() {
   int da, ye, mo;
   printf("일자를 입력하세요 : ");
   scanf("%d", &da);
   printf("입력한 날짜 : %d\n",da);
   ye = da / 365;
   da = da - ye * 365;
   mo = da / 30;
   da = da - mo * 30;
   printf("%d년 %d월 %d일\n",ye,mo,da);
}

void f3() {
   float rad = 8.32; 
   const float PI_c = 3.14;

   printf("구의 체적은 %.3f 입니다.\n",4.0/3.0*PI_c*rad*rad*rad); //이 부분 헷갈렸음
   printf("구의 표면적은 %.3f 입니다.\n",4*PI_c*rad*rad);
   
}

void f4(){
    printf("세 개의 정수 입력 >> ");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a > b & a > c){
        printf("가장 큰 수 : %d\n",a);
    }
    if ( b>a & b>c ){
        printf("가장 큰 수 : %d\n",b);
    }
    if ( c>a & c>b ){
        printf("가장 큰 수 : %d\n",c);
    }
}

void f5(){
    int a , b ;
    printf("키 입력 : ");
    scanf("%d",&a);
    printf("몸무게 입력 : ");
    scanf("%d",&b);
    float bmi = ( a - 100 ) * 0.9 ;
    if ( b <= bmi ){
        printf("당신은 정상입니다.\n");
    }else{
        printf("당신은 비만입니다.\n");
    }
}

#include<math.h>
void f6() {
   printf("예치 기간 입력(년) >> ");
   double ans=0, per = 4.5 , year = 0 , money = 1000000;;
   scanf("%lf", &year); // 문제 없음
   
   ans = money * pow((1 + per / 100),year);
   printf("이율 : %.1lf%%  총 금액 : %.2lf \n",per,ans);
}


int main() {
   //f1();
   //f2();
   //f3();
   f4();
    //f5();
   //f6();
   return 0;
}