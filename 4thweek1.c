#include <cs50.h>
#include <stdio.h>

int selection(int arr[]);
int main(void) {

    int firstNum[5] = {1, 1, 1, 3, 2};
    int secondNum[5] = {2, 1, 1, 3, 1};

    selection(firstNum);
    selection(secondNum);

    if (
    firstNum[0]==secondNum[0]&&
    firstNum[1]==secondNum[1]&&
    firstNum[2]==secondNum[2]&&
    firstNum[3]==secondNum[3]&&
    firstNum[4]==secondNum[4]) {
        
        printf("True\n");

    } else {

        printf("False\n");

    }
}

// 선택정렬 함수
int selection(int arr[]) {

    int swap, min, min_position;

    for(int i=0; i<5; i++) {
        min = 20;
        for(int j=i; j<5; j++) {
            if (arr[j] < min) {
                min = arr[j];
                min_position = j;
            }
        }
        swap = arr[min_position]; // 변수에 가장 작은 값의 현재 인덱스 위치 저장
        arr[min_position] = arr[i]; // 가장 작은 값의 인덱스 위치에 맨 좌측 인덱스 위치 저장
        arr[i] = swap; // 맨 좌측에 가장 작은 값이 온다.
    }
    return 0;
}
