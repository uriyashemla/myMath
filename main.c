#include <stdio.h>
#include "myMath.h"

int main()
{
    double x;
    printf("Please enter a number for calculation:");
    scanf("%lf",&x);
    //int y = (int)x;
    double a = Exponent((int)x);
    double b = Power(x,3);
    float ab = add(a,b);
    double c = mul(x,3);
    double d = mul(x,2);
    double f = mul(x,4);
    double g = div(Power(f,3),5);
    float ans1 = sub(ab,(float)2);
    printf("the value of f1(x) is: %0.4f\n",ans1);
    float ans2 = add((float)c,(float)Power(d,2));
    printf("the value of f2(x) is: %0.4f\n",ans2);
    float ans3 = sub((float)g,(float)d);
    printf("the value of f3(x) is: %0.4f\n",ans3);
    return 0;
}

