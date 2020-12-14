main(){
	int age,i;
	printf("Enter your age: ");
	scanf("%d", &age);
	
	if (age<15) {
	printf("You are not eligible \n");
	
		for(i=1; i<11; i++) {
		printf("%d \n", i);
		break;
		}
    }	
	else {
		printf("You are eligible\n");
		for(i=1; i<11; i++) {
		printf("%d \n", i);
		}
    }

}

