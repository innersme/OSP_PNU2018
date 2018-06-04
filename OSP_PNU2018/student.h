typedef struct 
{
	char name[100000];
	int korean, math, english, computer;
	int total;
} STUDENT;

void sortStuArray(STUDENT array[], int num);
void printStuArray(STUDENT array[], int num);
