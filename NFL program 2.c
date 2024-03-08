#include <stdio.h>
void print_scores(int score)
{
    int touchdown;
    int fieldgoal;
    int safety;

    printf("Possible combinations of scoring plays:\n");
    for (touchdown = 0; touchdown <= score / 6; touchdown++)
    {
        for (fieldgoal = 0; fieldgoal <= score / 3; fieldgoal++)
        {
            for (safety = 0; safety <= score / 2; safety++)
            {
                for (int touchdown_2pt = 0; touchdown_2pt * 8 <= score; touchdown_2pt++)
                {
                    for (int touchdown_1fieldgoal = 0; touchdown_1fieldgoal * 7 <= score; touchdown_1fieldgoal++)
                    {
                        if (touchdown * 6 + fieldgoal * 3 + safety * 2 + touchdown_2pt * 8 + touchdown_1fieldgoal * 7 == score)
                        {
                            printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", touchdown_2pt, touchdown_1fieldgoal, touchdown, fieldgoal, safety);
                        }
                    }
                }

                // distributes the list of possibilities!
            }
        }
    }
}
int main()
{
    int score;
    while (1)
    {
        printf("Enter 0 or 1 to STOP\n");
        printf("Enter an NFL score: ");
        scanf("%d", &score);

        if (score <= 1)
        {
            printf("Program terminating.... ");
            break; // ends the program!
        }

        print_scores(score);
    }
    return 0;
}
