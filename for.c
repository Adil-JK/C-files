main(){
	int num;
	printf("Enter the number you want multiplication table of: ");
	scanf("%d", &num);
	int i;
	for (i=0;i<10;i++) {
		printf("%d x %d = %d \n", num, i+1, num*(i+1));
	}
	
	
}
