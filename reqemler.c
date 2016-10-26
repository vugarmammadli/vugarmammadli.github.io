#include <stdio.h>
 
int main()
{
    int n;
    int total = 0;
 
    printf("n: ");
    scanf("%d", &n);

    while(n < 1){
        printf("Zehmet olmasa 1'den boyuk reqem daxil edin.\n");
        printf("n: ");
        scanf("%d", &n);
    }

    int i;
    for(i = 0; i <= n; i++){
        switch(i % 3){
            case 0:
                printf("%d\n", i);
                total = total + i;
                break;
            default:
                switch(i % 5){
                    case 0:
                        printf("%d\n", i);
                        total = total + i;
                }
                break;
        }
    }

    printf("[1, %d] intervalinda 3'e ve 5'e bolunenlerin cemi: %d", n, total);
 
    return 0;
} 