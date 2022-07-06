#include <stdio.h>
#include <time.h>

void sleep(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
int main()
{
    int guess;
    int tries=0;
    char answer;
    answer='y';
    int min =0;
    int max = 101;
    int avg;
    int a =0;
    int i,j;

puts("pick a number between 1 and 100");
puts("if the number is higher than the guess press h");
puts("if it is less than the guess press l ");
puts("if my guess is correct press y");


    for(i=0; (i< 8); i++)
        {
         sleep(600);
         avg = (min + max)/2;
         if(!avg)
         break;

         printf("is it %d\?\n", avg );
        fff:
        answer = getchar();



        if(answer == 'y')
        {
            a++;
            break;
        }
        else if(answer == 'h')
        {
            min = avg;
        }
        else if(answer == 'l')
        {
            max = avg;

        }
        else
        goto fff;
        }


        int sol = rand() % 4 + 1;
        if(a)
        {

            switch(sol)
            {


                case 2: puts("You are not good enough to beat me, human");
                        break;

                case 3: puts("Stop wasting my time, your numbers are so easy to guess");
                        break;
                case 4: puts("Next");
                        break;
                //case 1:
                default:

                        printf("That was easy your number is : %d ", avg);
                        break;



            }


        }
        else
        {
            xa:
            switch(sol)
            {
                case 2:
                        puts("Are you sure about this number");
                        break;

                case 3: puts("I don't support imaginary numbers");
                        break;
                case 4: puts("Stop playing with me");
                break;

                //case 1:
                default:
                        puts("I think there is no such number");
            }

        }
        sleep(2000);
        getchar();

       return 0;


}
