main(){
	int arr[] = {1,2,3,4,5,6};
	printf("The address of first element of array is %d \n", &arr[0]);
	printf("The address of first element of array is %d \n", arr);
	printf("The value of first element of array is %d \n", *arr);
	printf("The value of first element of array is %d \n", *(&arr[0]));
	
	printf("The address of second element of array is %d \n", &arr[1]);
	printf("The address of second element of array is %d \n", arr+1);
	printf("The value of second element of array is %d \n", *(arr+1));
	printf("The value of second element of array is %d \n", *(&arr[1]));
} 
