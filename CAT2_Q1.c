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

		strcpy(employee.name,"John Doe");
		int id=12345;
		strcpy(employee.department,"Human Resources");
		float salary=550000.50;
		strcpy(employee.email,"john.doe@company.com");
		
	printf("name is :%s\n",employee.name);
	printf("id:%d\n",id);
	printf("department:%s\n",employee.department);
	printf("salary:%f\n",salary);
	printf("email:%s\n",employee.email);
		
		
		
		
		
		
		
		
	return 0;	
	}