#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[100000];
    int korean, math, english, computer;
    int total;
} STUDENT;

void sortStuArray(STUDENT array[], int num);
void printStuArray(STUDENT array[], int num);

int main()
{
	STUDENT people[10];
    int num_students = 0;
	// Your code begins...
    int i = 0;
	// 입력할 학생의 숫자(num_students)를 사용자가 입력함.
	// 학생의 수는 10명 이하이어야 함.
    printf("Enter how many studnets>");
    scanf("%d", &num_students);
    for (i = 0; i< num_students; i++) {
        printf("\tStudent %d's name>", i+1); scanf("%s",people[i].name);
        printf("\t\tKorean>"); scanf("%d",&people[i].korean);
        printf("\t\tMath>"); scanf("%d",&people[i].math);
        printf("\t\tEnglish>"); scanf("%d",&people[i].english);
        printf("\t\tComputer>"); scanf("%d",&people[i].computer);
        people[i].total = people[i].korean + people[i].math
        +people[i].english + people[i].computer;
    }
    printStuArray(people, num_students);
	// total 값에 따라 정렬
	sortStuArray(people, num_students);
	// 정렬 결과 출략
	printStuArray(people, num_students);
    return 0;
}

void sortStuArray(STUDENT array[], int num){
    //    Local Declarations
    int smallest;
    int current;
    int walk;
    STUDENT tempData;
    
    // Outer Loop
    for (current = 0; current < num; current++)
    {
        smallest = current;
        // Inner Loop: One sort pass each loop
        for (walk = current + 1; walk <= num; walk++)
        {
            if (array[walk].total > array[smallest].total) {
                smallest = walk;
            }
        }
        // Smallest selected: exchange with current
        tempData = array[current];
        array[current]  = array[smallest];
        array[smallest] = tempData;
        
    } // for current
}    // selectionSort

void printStuArray(STUDENT array[], int num)
{
    printf("Rank\tKor\t\tMath\tEng\t\tCom\t\tTotal\tName\n");
    for(int i = 0; i < num; i++){
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%s\n",
               i+1, array[i].korean, array[i].math, array[i].english,
               array[i].computer, array[i].total, array[i].name);
    }
}
