#include <stdio.h>
#include <math.h>

int main(){
    float x;
    printf("Введите число\n");
    scanf("%f", &x);

    x = round(x);

    printf("%.0f\n", x);
    return 0;
}
