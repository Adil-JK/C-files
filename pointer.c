main(){
	int x = 10;
	int *y = &x;
	printf("The address of x is %p \n", &x);
	printf("The address of x is %p \n", y);
	
	printf("The value of x is %d \n", x);
	printf("The value of x is %d \n", *y);
}

