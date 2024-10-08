//
//  main.c
//  Duo Calc
//
//  Created by Galahad L on 2024/10/7.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>
float max(float a,float b);
float min(float a,float b);
int main(int argc, const char * argv[]) {
    float a = 1;
    float b = 1;
    char c = '0';
    int count = 0;
    printf("Welcome to use Duo-Calc!\n");
    sleep(1);
    while(1){
        printf("Choose from '+' '-' '*' '/' '%' '!' '^'\nPress '$' to exit\nInput an operator:");
        scanf("%c",&c);
        if(c=='M'){
            printf("Input a:");
            scanf("%f",&a);
            printf("Input b:");
            scanf("%f",&b);
            float i =max(a,b);
            printf("Max = %f\n",i);
        }
        else if(c=='m'){
            printf("Input a:");
            scanf("%f",&a);
            printf("Input b:");
            scanf("%f",&b);
            float i = min(a,b);
            printf("Min = %f\n",i);
        }
        else if(c=='+'){
            printf("Input a:");
            scanf("%f",&a);
            printf("Input b:");
            scanf("%f",&b);
            printf("a+b=%f\n",a+b);
        }
        else if(c=='-'){
            printf("Input a:");
            scanf("%f",&a);
            printf("Input b:");
            scanf("%f",&b);
            printf("a-b=%f\n",a-b);
        }
        else if(c=='*'){
            printf("Input a:");
            scanf("%f",&a);
            printf("Input b:");
            scanf("%f",&b);
            printf("a*b=%f\n",a*b);
        }
        else if(c=='/'){
            printf("Input a:");
            scanf("%f",&a);
            printf("Input b:");
            scanf("%f",&b);
            if(b==0){
                printf("Invalid usage of operator '/'\n");
            }else{
                printf("a/b=%f\n",a/b);
            }
        }
        else if(c=='%'){
            int c = 1;
            int e = 1;
            double f = c%e;
            printf("Input a:");
            scanf("%d",&c);
            printf("Input b:");
            scanf("%d",&e);
            printf("a%%b=%f\n",f);
        }
        else if(c=='!'){
            printf("Input a:");
            scanf("%f",&a);
            double result = 1;
            if (a<0) {
                printf("Invalid usage of operator '!'");
            }
            else{
                for (int i = 1; i <= a; i++) {
                    result =result* i;
                }
                printf("a!=%e\n",result);
            }
        }
        else if (c=='^'){
            int x =1;
            int y =1;
            printf("Input a:");
            scanf("%d",&x);
            printf("Input b:");
            scanf("%d",&y);
            double g = pow(x,y);
            printf("a^b=%e\n",g);
        }
        else if (c=='$'){
            break;
        }
        else{
            printf("Invalid Operator\n");
        }
        printf("\n");
        getchar();
        count++;
        sleep(1);
    }
    printf("\n********** Program Ended **********\n");
    printf("Total Circulation:%d\n",count);
    return 0;
}
float max(float a,float b){
    float max;
    if (a>b) {
        max = a;
    } else {
        max = b;
    }
    return max;
}
float min(float a,float b){
    float min;
    if (a<b) {
        min = a;
    } else {
        min = b;
    }
    return min;
}
