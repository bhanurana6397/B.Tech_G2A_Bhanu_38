#include <stdio.h>
int main(){
    int a,b,c;
    float e;
    char d;
    printf("enter the sign");
    scanf(" %c",&d);
    printf(" enter the two no");
    scanf("%d%d",&a,&b);
    switch (d)
     {
        case '+':
        c= a+b;
        printf(" sum is = %d",c);
        break;
        case '-':
        c = a-b;
        printf(" diff is %d",c);
        break;
        case '*':
        c=a*b;
        printf("prod is %d",c);
        break;
        case '/':
        e= (float)a/b;
        printf(" division is %f",e);
        break;
        default:
        printf("not possible");
     }
    return 0;
}