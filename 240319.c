// chapter 4. 화면에 출력하기

/*
#include <stdio.h>
int main(){
    printf("%d는 정수입니다.\n",10);
    printf("%.3f는 3자리 수 실수입니다.\n",10.33445);
    printf("%c는 문자이고, %d는 문자열입니다.\n",'a',"hello");
    printf("%o는 10의 8진수형이고, %x는 10의 16진수형입니다.\n",10,10);

    return 0;
}
*/

/*
#include <stdio.h>
int main(){
    printf("**********\n*        *\n*        *\n*        *\n**********");
    return 0;
}
*/

#include <stdio.h>
int main(){

    // printf("사과 %d개는 %d원 입니다.\n",2,2500);
    // printf("나의 성적은 %c입니다. 이 성적은 %c보다 앞에 있습니다.\n",'A','B');

    // printf("사과 %d개 , 사과 %5d개\n",10,10);

    // printf("이름:%s\n나이:%d살\n주소:서울 %d번지\n","정재형",21,200);

    // printf("%d 더하기 %d는 %d입니다.\n%d 곱하기 %d는 %d입니다.\n%d 나누기 %d는 %d입니다.",2,3,2+3,2,3,2*3,10,2,10/2);

    printf("축하합니다.\n이제부터 여러분도 프로그래머입니다.\n");
    printf("*****\n*****\n*****\n*****\n*****\n");

    // 다음의 상수를 printf문을 이용하여 출력하는 올바른 형식 지정자를 쓰시오
    printf("%f \n",1.2345);
    printf("%d \n",25);
    printf("%c \n",'\t');
    printf("%s \n","ABC");

    int a=10,b=20;
    printf("%d %d",a,b);
    return 0;
}