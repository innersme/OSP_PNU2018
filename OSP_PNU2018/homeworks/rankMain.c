int main()
{

	STUDENT people[10];
	int num_students;
	// Your code begins...
	
	// 입력할 학생의 숫자(num_students)를 사용자가 입력함.
	// 학생의 수는 10명 이하이어야 함.
    printf("Enter how many studnets>");	
	// total 값에 따라 정렬
	sortStuArray(people, num_students);
	// 정렬 결과 출략
	printStuArray(people, num_students);
    return 0;
}

