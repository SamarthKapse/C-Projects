#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
    int num =1;
    while(num!=0)
    {
        system("cls");
        printf("C | Bharat Acharya\n");
        printf("-------------------\n");
        printf("Number Gussing Game | Project No : 01 \n");
        int guess_no,random_no;
        int no_of_guess = 0;
        srand(time(NULL));
        random_no = rand() % 100 + 1;
        do
        { 
            printf("\nEnter a number between (1 to 100) : ");
            scanf("%d",&guess_no);          
            no_of_guess++;
            if(guess_no<random_no)
            {
                printf("Guess a larger Number....\n\n");
            }
            else if(guess_no>random_no)
            {
                printf("Guess a smaller Number....\n\n");
            }
            else
            {
                printf("\n\ncongratulations you guessed right in %d attempt",no_of_guess);
            }
            
        }while(guess_no!=random_no);
        printf("\n\nDo You Want To Play Again Yes[1] or No[0]: ");
        scanf("%d",&num);
    }
    printf("\n\nThanks For Playing Visit Again !!!!");
    printf("\n\nDeveloped By : Samarth Kapse....");
    printf("\n\n\n");
    return 0;
}