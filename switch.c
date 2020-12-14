main(){
	int age;
	printf("Enter the age: ");
	scanf("%d", &age);
	
	switch(age) 
	{
		case 10:
			printf("You are not eligible");
			break;
			
		case 15:
			printf("You may be eligible but need permission");
			break;
			
		case 18:
			printf("You are eligible");
			break;
			
		default:
			printf("You need permission");
			break;
	}
}
