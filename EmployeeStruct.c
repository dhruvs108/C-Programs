#include <stdio.h>
#include <stdlib.h>
struct employee
{
	char name[10];
	char addrs[30];
	int id;
	float salary;
};

int main()
{
	struct employee office[3];

	for(int i=0;i<3;i++)
	{
		printf("id: ");
		scanf("%d",&office[i].id);
		printf("name: ");
		scanf("%s",&office[i].name);
		printf("location: ");
		scanf("%s",&office[i].addrs);
		printf("salary: ");
		scanf("%f",&office[i].salary);
	}
/*	for(int i=0;i<3;i++)
	{
		printf("\nid : ");
		printf("%d\n",office[i].id);
		printf("name :");
		printf("%s\n",office[i].name);
		printf("locn :");
		printf("%s\n",office[i].addrs);
		printf("salary :");
		printf("%f\n",office[i].salary);
	}
*/
    if((*(office.salary) >  *(office.salary + 1)) && (*(office.salary) > *(office.salary + 2)))
    {
        printf("Greatest salary is %s", office[0].name);
    }
    return 0;
}
