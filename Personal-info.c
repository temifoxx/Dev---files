//program to input and display your personal information
//Full name, Matric number, DOB,Phone number, Programme, Department

#include<stdio.h>
#include<stdlib.h>


int main()
{
	char full_name[50];
	char mat_no[15];
	char DOB[15];
	char Phone_no[12];
	char Prog[12];
	char Dept[20];
	
	//Enter your details
	printf("Enter your full name:");
	fgets(full_name, 50, stdin);
	printf("Enter your matric no:");
	fgets(mat_no, 15, stdin);
	printf("Enter your Date of Birth:");
	fgets(DOB, 15, stdin);
	printf("Enter your phone number:");
	fgets(Phone_no, 12, stdin);
	printf("Enter your programme:");
	fgets(Prog, 12, stdin);
	printf("Enter your department:");
	fgets(Dept, 20, stdin);
	
	
	system("cls");
	//display my personal information
	printf(".....PERSONAL INFORMATION..... \n");
	printf("FULLNAME: %s \n", full_name);
	printf("MATRIC NUMBER: ");
	puts(mat_no);
	printf("DATE OF BIRTH: \n");
	puts(DOB);
	printf("PHONE NUMBER: %s ", Phone_no);
	printf("PROGRAMME: %s ", Prog);
	printf("DEPARTMENT: %s ", Dept);
	
	return 0;

}
