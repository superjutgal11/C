// #include <stdio.h>

// #define PI 3.141592
// 뱐수가 아니므로 PI=3.141592 처럼 = 을 안써도 됨.
// float radius = 10 ;
// double area ;
// const float PI = 3.141592;
// // f * f * f 이므로 double 이 맞음.
// area = PI * radius * radius ;
// printf("원의 면적 : %lf\n",area);
    

// int main(){

//     // int a=100, b=200;
//     // printf("두 수의 합 = %d\n",a+b);

//     float x,y,z ;

//     x=155.423;
//     y=20.787;
//     z=50.43;

//     printf("x=%.3f,y=%.3f,z=%.3f\n",x,y,z);
//     printf("x+y+z=%.3f\n",x+y+z);
//     printf("x-y-z=%.3f\n",x-y-z);
//     printf("z/y/z=%.3f\n",x/y/z);
//     printf("(z*y)/z=%.3f\n",x*y/z);
        

//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int age;

//     printf("나이를 입력해 주십시오");
//     scanf("%d",&age);
//     printf("당신의 나이는 %d 살이군요!",age);
//     return 0;
// }

// # include <stdio.h>
// # include <math.h>

// int main(){
    // char name_1[10];
    // char name_2[10];
    // int age_1,age_2;

    // printf("첫 번째 사람의 이름과 나이를 입력하시오 : ");
    // scanf("%s %d",name_1,&age_1);

    // printf("두 번째 사람의 이름과 나이를 입력하시오 : ");
    // scanf("%s %d",name_2,&age_2);

    // printf("첫 번째 사람의 이름은 %s 이고 나이는 %d 이군요.\n",name_1,age_1);
    // printf("두 번째 사람의 이름은 %s 이고 나이는 %d 이군요.\n",name_2,age_2);
    // return 0;

    // printf("사람의 나이와 이름을 입력하시오 : ");
    // scanf("%d %s",&age_1,name_1);
    // printf("사람의 이름은 %s 이고 나이는 %d 이군요.\n",name_1,age_1);

    // int age;
    // char name[10];
    // char add[100];

    // printf("나이를 입력 : ");
    // scanf("%d",&age);

    // printf("이름을 입력 : ");
    // scanf("%s",name);

    // getchar(); // 엔터도 
    // printf("주소를 입력 : ");
    // gets(add);

    // printf("나이는 %d살이고 이름은 %s입니다.\n주소는 %s입니다.",age,name,add);

    // double grade;

    // printf("학점을 입력해 주십시오 : ");
    // scanf("%lf",&grade);
    // printf("학점은 %lf입니다.\n",grade);
    // printf("학점은 %f입니다.",grade);

    // int a,b,c,sum;
    // float ave ;

    // printf("첫 번째 숫자를 입력하시오 : ");
    // scanf("%d",&a);
    // printf("두 번째 숫자를 입력하시오 : ");
    // scanf("%d",&b);
    // printf("세 번째 숫자를 입력하시오 : ");
    // scanf("%d",&c);
    // sum = a+b+c;
    // ave = sum/3;

    // printf("세 값의 합은 %d 입니다.\n",sum);
    // printf("세 값의 평균은 %f입니다.\n",ave);

// 외부로부터 반지름을 입력받아 원의 면적 및 둘레를 구하는 프로그램 작성
// 파이값은 상수로 작성해 둔다. 모든 출력치는 3번째 자리까지 출력.
// const float PI = 3.141592;
// float rad ;

// printf("원의 반지름을 입력해 주십시오 : ");
// scanf("%f",&rad);

// printf("원의 반지름은 %.3f이고, 둘레는 %.3f이고,\n 면적은 %.3f입니다.\n",rad,rad*2*PI,rad*rad*PI);
// printf("power함수를 이용하여 구한 원의 넓이 : %f",pow(rad,2)*PI);
// return 0;


// int c;
// printf("나이를 입력하시오 : ");
// scanf("%d",&c)
// prointf("당신의 나이는 %d살 입니다.",c);


// char x[2];
// printf("문자를 입력하십시오 : ");
// scanf("%s",&x);
// printf((int)x);

// float a,b;

// printf("2개의 실수를 입력하시오 : ");
// scanf("%f %f",&a,&b);

// printf("합의 정수부 : %d",(int)a+(int)b);

// return 0;

// }

#include <stdio.h>
#include <math.h>

void P1(){
    printf("10");
}

void P2(){
    printf("100");
}

void P3(){
    int a1,a2,a3,a4;

    printf("==========Quizzes==========\n");
    printf("퀴즈 1 성적 : ");
    scanf("%d",&a1);
    printf("퀴즈 2 성적 : ");
    scanf("%d",&a2);
    printf("==========MID-TERM==========\n");
    printf("중간고사 성적 : ");
    scanf("%d",&a3);
    printf("==========FINAL-TERM==========\n");
    printf("기말고사 성적 : ");
    scanf("%d",&a4);
    printf("quiz total : %d",a1+a2);
    printf("%d",a3);
    printf("final : %d\n",a4);
    printf(".........................\n");
    printf("total : %d",a1+a2+a3+a4);
}
 
int main(){
    P3();
    return 0;
}