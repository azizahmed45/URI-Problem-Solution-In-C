#include <stdio.h>
#include <stdlib.h>

int main()
{
    double A,B,C,MEDIA;
    float AW=2,BW=3,CW=5;
    scanf("%lf%lf%lf", &A, &B, &C);
    MEDIA = ((A*AW)+(B*BW)+(C*CW))/(AW+BW+CW);
    printf("MEDIA = %.1lf\n", MEDIA);
    return 0;
}
