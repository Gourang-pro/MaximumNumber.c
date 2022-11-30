#include<stdio.h>
#include<conio.h>


int main()
{   

    int num1,num2,num3;

    printf("ENTER YOUR THREE NUMBER :\n");    
    scanf("%d %d %d",&num1,&num2,&num3);

if (num1>num2 && num1>num3)
{
    printf("THE %d IS MAXIMUM NUMBER",num1);
}
else if (num2>num1 && num2>num3)
{
    printf("THE %d IS MAXIMUM NUMBER",num2);
}
else 
{
    printf("THE %d IS MAXIMUM NUMBER",num3);
}

return 0;
}