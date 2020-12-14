#include<stdio.h>
#include<string.h>

struct Student_info {
	char Name[20];
	int Roll_number;
	int Marks;
};

main() {
	struct Student_info Student;
	strcpy(Student.Name, "Muhammad Adil");
	Student.Roll_number = 305;
	Student.Marks = 880;
	
	printf("Name: %s\nRoll Number: %d\nTotal Marks obtained: %d\n", Student.Name,Student.Roll_number, Student.Marks);

}

