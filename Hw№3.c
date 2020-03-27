#include <stdio.h>

char itsString[5];
int A[5];

void fatoi(char *itsString)
{
  int i;

  for (i=0; i<10; i++)
  {
    A[i]=itsString[i];
  }
}

int main()
{
  char c;
  int i;
  printf ("BBEDITE: \n ");


  fgets( itsString, 5, stdin );

  fatoi(itsString);

  for (i=0; i<5; i++)
  {
    printf("%d",A[i]);
  }

return 0;
}
