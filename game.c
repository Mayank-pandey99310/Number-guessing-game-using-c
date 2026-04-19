#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    //initilize random number generator
    srand(time(0));

    //generate random no between 1 to 100
    int randomnumber = (rand() % 100) + 1;
    int no_of_guasses=0;
    int guassed;

    //print random number
    // printf("random number : %d\n",randomnumber);
    do
    {
        printf("guess the number");
        scanf("%d",&guassed);
        if (guassed>randomnumber)
        {
            printf("lower number please\n");
        }
        else if(randomnumber,guassed){
            printf("higher number please\n");
        }
        else {
            printf("congrates!! ");
        }
        no_of_guasses++;
        
    } while (guassed!= randomnumber);
    printf("you guassed the number in %d  guasses",no_of_guasses);
    
    
    return 0;
}
