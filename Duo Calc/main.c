//
//  main.c
//  Duo Calc
//
//  Created by Galahad L on 2024/10/7.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    float a = 1;
    float b = 1;
    char c = '0';
    while(1){
        printf("Input an operator:");
        scanf("%c",&c);
        if(c=='M'){
            printf("Input a:");
            scanf("%f",&a);
            printf("Input b:");
            scanf("%f",&b);
            if (a>b) {
                printf("a = %f\n",a);
            } else {
                printf("b = %f\n",b);
            }
        }
        else if(c=='m'){
            printf("Input a:");
            scanf("%f",&a);
            printf("Input b:");
            scanf("%f",&b);
            if (a<b) {
                printf("a = %f\n",a);
            } else {
                printf("b = %f\n",b);
            }
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
        getchar();
    }
    return 0;
}

