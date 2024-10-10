#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void questions(void);

int main(void)
{
    printf("WELCOME TO MY FUTSAL QUIZ! GET THE ORACLE'S 10 QUESTIONS RIGHT.\n");
    questions();
    return 0;
}

void questions(void)
{
    char answer;    // Variable to store the answer
    int points = 0; // Variable to count the points

    printf("\n1. How many players can a futsal team have on the field, including the goalkeeper?\n");
    printf("a. 6\n");
    printf("b. 5\n");
    printf("c. 7\n");
    printf("d. 4\n");
    printf("Enter the correct option: ");
    scanf(" %c", &answer);
    getchar();
    if (answer == 'b'){
        points++;
    }

    printf("\n2. How long does a standard futsal match last?\n");
    printf("a. 40 minutes\n");
    printf("b. 30 minutes\n");
    printf("c. 50 minutes\n");
    printf("d. 60 minutes\n");
    printf("Enter the correct option: ");
    scanf(" %c", &answer);
    getchar();
    if (answer == 'a'){
        points++;
    }

    printf("\n3. In futsal, what is the maximum number of substitutes allowed?\n");
    printf("a. 5\n");
    printf("b. 7\n");
    printf("c. Unlimited\n");
    printf("d. 3\n");
    printf("Enter the correct option: ");
    scanf(" %c", &answer);
    getchar();
    if (answer == 'c'){
        points++;
    }

    printf("\n4. What is the size of a futsal ball compared to a regular football?\n");
    printf("a. Larger\n");
    printf("b. The same size\n");
    printf("c. Smaller\n");
    printf("d. There is no difference\n");
    printf("Enter the correct option: ");
    scanf(" %c", &answer);
    getchar();
    if (answer == 'c'){
        points++;
    }

    printf("\n5. What is the penalty distance in futsal?\n");
    printf("a. 7 meters\n");
    printf("b. 9 meters\n");
    printf("c. 6 meters\n");
    printf("d. 5 meters\n");
    printf("Enter the correct option: ");
    scanf(" %c", &answer);
    getchar();
    if (answer == 'a'){
        points++;
    }

    printf("\n6. How many referees are there in a futsal match?\n");
    printf("a. 1\n");
    printf("b. 2\n");
    printf("c. 3\n");
    printf("d. 4\n");
    printf("Enter the correct option: ");
    scanf(" %c", &answer);
    getchar();
    if (answer == 'b'){
        points++;
    }

    printf("\n7. Which country is considered the birthplace of futsal?\n");
    printf("a. Spain\n");
    printf("b. Argentina\n");
    printf("c. Brazil\n");
    printf("d. Portugal\n");
    printf("Enter the correct option: ");
    scanf(" %c", &answer);
    getchar();
    if (answer == 'c'){
        points++;
    }

    printf("\n8. How many fouls can a team commit before the opposing team is awarded a free kick?\n");
    printf("a. 4\n");
    printf("b. 5\n");
    printf("c. 6\n");
    printf("d. 3\n");
    printf("Enter the correct option: ");
    scanf(" %c", &answer);
    getchar();
    if (answer == 'b'){
        points++;
    }

    printf("\n9. What is the minimum width of a futsal court?\n");
    printf("a. 18 meters\n");
    printf("b. 20 meters\n");
    printf("c. 25 meters\n");
    printf("d. 16 meters\n");
    printf("Enter the correct option: ");
    scanf(" %c", &answer);
    getchar();
    if (answer == 'a'){
        points++;
    }

    printf("\n10. How long is the break between halves in a futsal match?\n");
    printf("a. 10 minutes\n");
    printf("b. 15 minutes\n");
    printf("c. 5 minutes\n");
    printf("d. 12 minutes\n");
    printf("Enter the correct option: ");
    scanf(" %c", &answer);
    getchar();
    if (answer == 'a'){
        points++;
    }

    printf("\nYou scored %d points out of 10!\n", points);
}
