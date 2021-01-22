#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string x = get_string("요일을 입력하세요:");

    string a = "월요일";
    string b = "화요일";
    string c = "수요일";
    string d = "목요일";
    string e = "금요일";
    string f = "토요일";
    string g = "일요일";

    //문자열을 비교하는 함수 strcmp. str1과 2가 일치할 경우 0을 리턴한다.
   
    if (strcmp(x, a) == 0) {       
        printf("월요일: 청국장\n");
    }

    else if (strcmp(x, b) == 0) {
        printf("화요일: 비빔밥\n");
    }

    else if (strcmp(x, c) == 0) {
        printf("수요일: 된장찌개\n");
    }

    else if (strcmp(x, d) == 0) {
        printf("목요일: 칼국수\n");
    }

    else if (strcmp(x, e) == 0) {
        printf("금요일: 냉면\n");
    }
    
    else if (strcmp(x, f) == 0) {
        printf("토요일: 소불고기\n");
    }

    else {
        printf("일요일: 오삼불고기\n");
    }

}
