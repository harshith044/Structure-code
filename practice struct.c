#include <stdio.h>
 
struct employee{
    char    name[30];
    int    age;
    int phn;
    float   salary;
};
 
int main()
{
    struct employee emp;
     
    printf("\nEnter details :\n");
    printf("Name :");          gets(emp.name);
    printf("Age :");           
	scanf("%d",&emp.age);
	printf("Phone Number: ");
	scanf("%d",&emp.phn);
    printf("Salary :");       
	scanf("%f",&emp.salary);
     
    printf("\nEntered detail is:");
    printf("Name: %s "   ,emp.name);
    printf("Age: %d \n"     ,emp.age);
    printf("Phone Number: %d",emp.phn);
    printf("Salary: %f\n",emp.salary);
    return 0;
}
