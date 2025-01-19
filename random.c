#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
  int n,r,att=0,correct=0;
  srand(time(0));
  r=rand()%50+1;
  printf("Guess the number between 1 and 50. ");
  printf("\nEnter number : ");
  while(correct==0)
    {
      scanf("%d",&n);
      att=att+1;
      if(n==r)
      { printf("\nCongrats, you guessed correct. It took you %d attempts.\n",att);
        correct=1;
        break;}
      else if(n>r)
        printf("\nToo high, try again : ");
      else if(n<r)
        printf("\nToo low, try again : ");
    }
}
