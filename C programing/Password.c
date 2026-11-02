#include <stdio.h>
#include <stdlib.h>

int main()
{

    int password = 1234 ;
    int guess ;
    int attempts = 0 ;

  do
    {
        printf("Enter Password: ");
        scanf("%d", &guess);

        attempts++;
    }
    while (guess != password && attempts < 3);


    if (guess == password)
        printf("Correct Password\n");

    else
        printf("Attempts Finished\n");



    return 0;
}
