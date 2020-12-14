main(){
	int age,i;
	printf("Enter your age: ");
	scanf("%d", &age);
	
	if (age<15) {
	printf("You are not eligible \n");
	
		for(i=0; i<10; i++) {
		printf("%d \n", i+1);
		continue;
		}
	}
	else {
	
	printf("You are eligible");
	}
}

