#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=2,code,number,i;
    float price,paid=0.00;

    for(i=0; i<n; i++){
        scanf("%d %d %f", &code, &number, &price);
         paid = paid+(number*price);
    }
    printf("VALOR A PAGAR: R$ %.2f\n", paid);
    return 0;
}
