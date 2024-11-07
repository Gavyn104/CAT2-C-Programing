#include <stdio.h>
#include <string.h>

struct employee{
	char name[25];
	int id ;
	char department[20];
	float salary;
	char email[50];
	
	}employee;
	int main (){
		
	printf("enter name:");
	scanf("%s",&employee.name);
	printf("name is: %s\n",employee.name);
	
	printf("enter id:");
	scanf("%d",&employee.id);
	printf("id is : %f\n",employee.id);
	
	printf("enter department:");
	scanf("%s",&employee.department);
	printf("department is: %s\n",employee.department);
	
	printf("enter salary:");
	scanf("%f",&employee.salary);
	printf("salary is: %f\n",employee.salary);
		
		
		
		
		
		
		
		
		
		
		
		
		
	return 0;	
	}