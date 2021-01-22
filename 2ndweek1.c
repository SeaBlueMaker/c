#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int a = get_int("주문건수를 입력하세요:");
    int b = 5;
    int c = b-a;

    double x = 10000*1.1*a;

    printf ("주문건수: %i건\n", a);
    printf ("기존 재고량: %i개\n", b);
    printf ("남은 재고량: %i개\n", c);
    printf ("매출액(부가세포함): %.0f원\n", x);
}
