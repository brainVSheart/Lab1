#include <stdio.h>
int main()
{
  int N, i;
  while (1)
  {
    printf("Enter rounds:");
    if (scanf("%d", &N) != 1)
    {
      printf("Error\n");
        return 1;
    }
    if(N==0)
    {
      break;
    }
    if (N>0)
    {
      for(i=1;i<=N;i++)
      {
      printf("[%d] Hollo loop\n",i);
      }
    }else{
      printf("Error\n");
    }
  }
   return 0;
}
