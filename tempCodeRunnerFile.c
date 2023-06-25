#include <stdio.h>

/**
 * Description - a C program for a school grading system
 * 80 - 100 == A
 * 70 - 79 == B
 * 60 - 69 == C
 * 50 - 59 == D
 * 40 - 49 == E
 * Below 40 == F
 * */

int main (void)
{
    int score = 35;
        /*Tell students to put in their scores*/
        printf("Insert your score:\n");
        scanf("%d", &score);

        /* check if the score is between 80 and 100 then print the grade*/

        if (score >= 80 && score <= 100)
        {
            printf("Your grade is A \n");

            if (score >= 95)
            {
                printf("You got Distinction \n");

                if (score == 95)
                {
                    printf("You are awarded 2 bars of Gold \n");
                }
                else if (score == 96)
                {
                    printf("You are awarded 4 bars of Gold \n");
                }
                else if (score == 97)
                {
                    printf("You are awarded 6 bars of Gold \n");
                }
                else if (score == 98)
                {
                    printf("You are awarded 8 bars of Gold \n");
                }
                else if (score == 99)
                {
                    printf("You are awarded 10 bars of Gold \n");
                }
                else
                {
                    printf("You are awarded 20 bars of Gold \n");
                }

            }

            else
            {
                printf("You got Excellent");
            }
            
        }



        /* check if the score is between 70 and 79 then print the grade*/
        else if (score >= 70 && score <= 79)
        {
            printf("B");
        }
        
        /* check if the score is between 60 and 69 then print the grade*/
        else if (score >= 60 && score <= 69)
        {
            printf("C");
        }

        /* check if the score is between 50 and 59 then print the grade*/
        else if (score >= 50 && score <= 59)
        {
            printf("D");
        }

        /* check if the score is between 40 and 49 then print the grade*/
        else if (score >= 40 && score <= 49)
        {
            printf("E");
        }
        
        /* check if the score is less than 40, then print the grade*/
        else if (score >= 0 && score <= 39)
        {
            printf("F");
        }
         
        else
        {
            printf("You have entered an invalid value");
        }



    return 0;
}