#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void print_meanu();
float dvision();
float modulos(float,float);
int main()
{
    int choose,rep=1;
    int num1 , num2;
    int result;
    float result1;
    
    while(rep!=0)
    {
        system("cls");
        printf("C | Bharat Acharya\n");
        printf("------------------\n");
        printf("Simple Calculator | Project No : 02\n");
        print_meanu();
        printf("\n             Enter 1st Number: ");
        scanf("%d",&num1);
        printf("\n             Enter 2nd Number: ");
        scanf("%d",&num2);
        printf("\n             Enter Your Choice: ");
        scanf("%d",&choose);
        switch(choose)
        {
            case 1:
                result = num1 + num2;
                printf("\nADD is %d",result);
                break;
            case 2:
                result = num1 - num2;
                printf("\nSUB is %d",result);
                break;
            case 3:
                result = num1 * num2;
                printf("\nMUL is %d",result);
                break;
            case 4:
                result1 = dvision(num1,num2);
                if(isnan(result1))
                {
                    fprintf(stderr,"\nError..!!");
                }
                else
                {
                    printf("\nDIV is %.2f",result1);
                }
                break;
            case 5:
                result1 = modulos((float)num1,(float)num2);
                if(isnan(result1))
                {
                    fprintf(stderr,"\nError");
                }
                else
                {
                    printf("\nMODULOS is %.2f",result1);
                }
                break;
            case 6:
                printf("\nThanks!!");
                break;
            default:
                printf("Invalid Choice");
        }   
        printf("\n\nwant to Continue Yes[1] or No[0]: ");
        scanf("%d",&rep);
    }
printf("\nEND THE PROGRAM....!!");
printf("\n\n");
return 0;
}
void print_meanu()
{
    printf("\n1. ADD\n");
    printf("2. SUB\n");
    printf("3. MUL\n");
    printf("4. DIV\n");
    printf("5. MODULOS\n");
    printf("6. POWER\n");
    printf("7. EXIT");
}
float dvision(int num1, int num2)
{
    if(num2!=0)
    {
        return (float)num1/num2;
    }
    else
    {
        return NAN;
    }
}
float modulos(float num1,float num2)
{
    if(num2!=0)
    {
        return fmod(num1,num2);
    }
    else
    {
        return NAN;
    }
}