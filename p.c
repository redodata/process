#include<stdio.h>
#include<unistd.h>
#define BLACK "\e[0;30m"
#define YELLOW "\e[1;33m"
#define GREEN "\e[0;32m"
#define BLUE "\e[0;34m"
#define RED "\e[0;31m"
int main()
{
  char string[4]={'-','/','|','\\'};
  char buf[100]={0};
  int i=0;
  for(;i<=100;i++)
  {
    buf[i]='#'; 
    printf(BLACK"[%d]",i);
    if(i<=25)
    {
       printf(YELLOW"[%c]",string[i%4]);
       printf(YELLOW"[%s]\r",buf);
    }
    else if(i<=50)
    {
      printf(GREEN"[%c]",string[i%4]);                                                                                                
      printf(GREEN"[%s]\r",buf);
    }
    else if(i<=75)
    {
      printf(BLUE"[%c]",string[i%4]);                                                                                                
      printf(BLUE"[%s]\r",buf);       
    }
    else{
     printf(RED"[%c]",string[i%4]);                                                                                                
     printf(RED"[%s]\r",buf);       
    }
    fflush(stdout);
    usleep(100*1000);
  }
  printf(BLACK"\n");
  return 0;
}
