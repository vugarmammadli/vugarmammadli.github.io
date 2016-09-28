#include <stdio.h>
 
int main()
{
    int a, b, c, d;
    int abc = 0, bcd = 0, acd = 0, abd = 0;
 
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    printf("d: ");
    scanf("%d", &d);

    if((a+b > c) && (a+c > b) && (b+c > a))
        abc = 1;
    if((a+b > d) && (a+d > b) && (b+d > a))
        abd = 1;
    if((c+b > d) && (c+d > b) && (b+d > c))
        bcd = 1;
    if((a+c > d) && (a+c > b) && (c+d > a))
        acd = 1;

    if (abc == 0 && abd == 0 && bcd == 0 && acd == 0){
        printf("bu parcalardan ucbucag qurula bilmez.\n");
    }
    else{
        if (abc == 1)
            printf("a, b ve c parcalarindan ucbucag qurula biler.\n");
        if (abd == 1)
            printf("a, b ve d parcalarindan ucbucag qurula biler.\n");
        if (bcd == 1)
            printf("b, c ve d parcalarindan ucbucag qurula biler.\n");
        if (acd == 1)
            printf("a, c ve d parcalarindan ucbucag qurula biler.\n");
    }
 
    return 0;
} 