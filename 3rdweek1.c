#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

const int NUM_OF_GRADES = 9;
const int SCORES[NUM_OF_GRADES] = {95, 90, 85, 80, 75, 70, 65, 60, 0};
const char* GRADES[NUM_OF_GRADES] = {"A+", "A", "B+", "B", "C+", "C", "D+", "D", "F"};

void showMyGrade(int studentScore);
void intro();

int main() {

    intro();
    int studentScore = get_int("성적을 입력하세요 (0 ~ 100) > ");
    while (studentScore != 999) {

        if (0 <= studentScore && studentScore <= 100) {
            
            showMyGrade(studentScore);
            studentScore = get_int("성적을 입력하세요 (0 ~ 100) > ");

        } else {
            
            printf("\n");
            printf("성적을 올바르게 입력하세요! 범위는 0 ~ 100 입니다.\n");
            studentScore = get_int("성적을 입력하세요 (0 ~ 100) : ");

        }
    }
    if (studentScore == 999) {
        printf("프로그램을 종료합니다!\n");
    }
}

//학점 테이블과 취득 성적(myScore)을 비교하여 학점 계산
void showMyGrade(myScore) {

    for (int i=0; i<NUM_OF_GRADES; i++) {

        if (myScore >= SCORES[i]) {

            printf("\n");
            printf("학점은 %s 입니다.\n", GRADES[i]);

            if (i==0 || i==1) {
                printf("참 잘했어요! ^^\n");
                printf("\n");
            }
            break;
        }
    }
}

void intro() {

    printf("\n");
    printf("\\(><)/ 공포의 학점계산기 ~(mm)~ oO(교수님! C뿌리기는 제발 그만!)\n");
    printf("\n");
    printf("*** 종료하려면 999를 입력해주세요! ***\n");
    printf("\n");
    printf("--------------[학점 테이블]--------------\n");
    printf("점수 : 95   90  85  80  75  70  65  60  0\n");
    printf("학점 : A+   A   B+  B   C+  C   D+  D   F\n");
    printf("-----------------------------------------\n");
    printf("\n");

}
