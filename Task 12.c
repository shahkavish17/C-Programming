#include<stdio.h>
int main()
{
    float c;
    char ch='y';
    float f;
    do{
	
	printf("\n1. CELCIUS TO FAHRENHEIT, \n2. FAHRENHEIT TO CELCIUS, \n3. EXIT\n");
    int option=0;
    printf("Choose an option: ");
	scanf("%d",&option);
    switch(option)
    {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f",&c);
            f=((9*c)/5)+32;
            printf("Entered temperature in Fahrenheit: %f",f);
            break;
        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f",&f);
            c=5*(f-32)/9;
            printf("Entered temperature in Celsius: %f",c);
            break;
        case 3:
            printf("You choose to exit...");
            break;
        default:
            printf("Your entered a invalid option!");
    }
    printf("\n\n\tDo you Want to Continue:");
    scanf("%c",ch);
  }while(ch=='y'||ch=='Y');
    return 0;
}
