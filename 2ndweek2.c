#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int a = get_int("예금액:");
    double b = a+a*0.012;
    
    printf("만기시 받게 되는 금액: %.0f원\n", b);
}
