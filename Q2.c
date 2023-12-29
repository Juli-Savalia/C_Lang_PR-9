//Write a Program to generate mark sheets for a student.
// Enter the marks of 5 students in Chemistry, Mathematics, and 
//Physics (each out of 100) using a Structure having attributes: 
//roll no, name, chem_marks, maths_marks, and phy_marks. Display the percentage of each student.


#include<stdio.h>
#include<string.h>

struct marksheet{
	int roll_no;
	char name[10];
	int chem_marks;
	int math_marks;
	int phy_marks;
};

void main()
{	
	int i,n;
	printf("Enter the number of records you want to print:-");
	scanf("%d",&n);
	
	struct marksheet m1[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter the details of student  %d:- \n\n",i+1);
		
		printf("Enter the Roll_number:");
		scanf("%d",&m1[i].roll_no);	   	
					
		printf(" Enter the Name:");
		scanf("%s",&m1[i].name);

		printf("Enter the chemistry marks out of 100 :");
		scanf("%d",&m1[i].chem_marks);	   	
		
		printf("Enter the maths marks out of 100 :");
		scanf("%d",&m1[i].math_marks);	   	
		
		printf("Enter the Physics marks out of 100 :");
		scanf("%d",&m1[i].phy_marks);	   	
		
		printf("\n\n\n\n");
	}
	
	printf("\n\n-------------- REPORT CARD ---------------\n\n");
	
    for(i=0; i<n; i++){
        printf("Name : ");
        printf("%s \n",m1[i].name);
 
        printf("Roll_no : ");
        printf("%d \n",m1[i].roll_no);
 
        printf("Chemistry marks : ");
        printf("%d \n",m1[i].chem_marks);
        
        printf("Maths marks : ");
        printf("%d \n",m1[i].math_marks);
        
        printf("Phy marks : ");
        printf("%d \n",m1[i].phy_marks);
        
        printf("\n\n");
       }
}
