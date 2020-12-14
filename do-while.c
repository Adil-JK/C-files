main() {
	
	int x,y,z;
	
	printf("Enter the number you want table of: ");
	scanf("%d", &x);
	
	printf("Enter the range of the table: ");
	scanf("%d", &z);
	
	y=1;
	do {
		printf("%d x %d = %d\n", x,y,x*y);
		y++;
	} while (y<=z);
	
}
