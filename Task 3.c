#include <stdio.h>

main()
{
    int sub1,sub2,sub3;
    float sum,avg;

    //Input the Marks obtained 
    printf("Enter the marks of Subject 1: ");
    scanf("%d", &sub1);
    printf("Enter the marks of Subject 2: ");
    scanf("%d", &sub2);
    printf("Enter the marks of Subject 3: ");
    scanf("%d", &sub3);
    
	//Evaluating the Sum of the Marks 
    sum=sub1+sub2+sub3;
    //Evaluating the Average of the marks
    avg= (sub1+sub2+sub3)/3;
	
	printf("\n\tThe sum of the marks obtained in 3 subjects is: %f ", sum);
	printf("\n\tThe Average marks of the marks obtained in 3 subjects is: %f", avg);
    

}
