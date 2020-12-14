main(){
	int x,y;
	
	printf("Enter the two numbers for x and y: \n");
	scanf("%d", &x);
	scanf("%d", &y);
	
	if (x<y){
		printf("x<y");
	}
	else if (x>y) {
		printf("x>y");
	}
	else {
		printf("x=y");
	}
}
