#include <stdio.h>
#include <unistd.h>

int main(void)
{
  char my_hostname[255];
  gethostname(my_hostname,255);
  printf("gethostname response: <%s>\n",my_hostname); 
  return 0;
}
