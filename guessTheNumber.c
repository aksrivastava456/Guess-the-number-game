#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void){
    int number,guess,count=1;
    srand (time(0));
    number = rand ()%100+1;
    //printf ("%d",number);
    
    do{
      printf ("Enter the number between 1 to 100\n");
      scanf ("%d",&guess);
      if (guess>number) printf ("Lower Number Please.\n");
      else if (guess<number) printf ("Higher Number Please.\n");
      else printf ("You have guessed the correct number in %d attempts.",count);
      count++;
    } while (guess!=number);
}
