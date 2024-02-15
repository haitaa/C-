#include <stdio.h>

int main()
{
    int i = 1;
    float examGrade = 0.0, sumGrade = 0.0, average;

    do
    {
        printf("%dth exam grade: ", i);
        scanf("%f", &examGrade);

        if (examGrade == 0)
        {
            break;
        }

        if (examGrade < 0)
        {
            printf("Please enter a valid exam grade.\n");
            continue;
        }
        else
        {
            sumGrade += examGrade;
        }
        i++;
    } while (examGrade != 0);

    average = sumGrade / i;

    printf("You entered %d exam grades!", i);
    printf("Average: %f", average);

    return 0;
}