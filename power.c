#include <stdbool.h>
#include "myMath.h"

double Exponent(int x){
    double e = 2.71828;
    double sum = 1;
    bool flag = false;
    if(x<0){
        x=x*-1;
        flag = true;
    }
    for (int i = 1; i <= x; i++)
    {
        sum = sum*e;
    }
    if (flag==true)
    {
        return 1/sum;
    }
    return sum;
}
double Power(double x, int y){
    double result=1;
    bool flag = false;
    if(y==0){
        return result;
    }
    if(y<0){
        y=y*-1;
        flag = true;
    }
    for (int i = 1; i <= y; i++)
    {
        result*=x;
    }
    if(flag == true){
        return 1/result;
    }
    return result;
}