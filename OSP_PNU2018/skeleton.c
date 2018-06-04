typedef struct 
{
	char name[100000];
	int korean, math, english, computer;
	int total;
} STUDENT;


void printStuArray(STUDENT array[], int num);
void sortStuArray(STUDENT array[], int num);

void main()
{

	STUDENT people[10];
	int num_students;
	// Your code begins...
	
	// 입력할 학생의 숫자(num_students)를 사용자가 입력함.
	// 학생의 수는 10명 이하이어야 함.
	
	// total 값에 따라 정렬
	sortStuArray(people, num_students);
	// 정렬 결과 출략
	printStuArray(people, num_students);
}


// 참고용 정렬 코드

void selectionSort (int list[], int last)
{
//	Local Declarations
	int smallest;
	int tempData;
	int current;
	int walk;

	// Outer Loop
	for (current = 0; current < last; current++)
	{
		smallest = current;
		// Inner Loop: One sort pass each loop
	     	for (walk = current + 1; walk <= last; walk++)
		{
	        	if (list[walk] < list[smallest])
				smallest = walk;
		}
	 	// Smallest selected: exchange with current
	    	tempData       = list[current];
	    	list[current]  = list[smallest];
	    	list[smallest] = tempData;
	  } // for current
	return;
}	// selectionSort