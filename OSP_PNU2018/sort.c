void sortStuArray(STUDENT array[], int num){
//	Local Declarations
	int smallest;
	int tempData;
	int current;
	int walk;
    int *sumArray = (int*) malloc(sizeof(int));
    
	// Outer Loop
	for (current = 0; current < num; current++)
	{
		smallest = current;
		// Inner Loop: One sort pass each loop
	     	for (walk = current + 1; walk <= num; walk++)
		{
	        	if (array[walk] < array[smallest])
				smallest = walk;
		}
	 	// Smallest selected: exchange with current
	    	tempData       = array[current];
	    	array[current]  = array[smallest];
	    	array[smallest] = tempData;
	  } // for current
	return;
}	// selectionSort


