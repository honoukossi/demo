#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  int tab[20];
  for (int i=0;i<20;i++){
     tab[i] =i+1;
  }
  // affichons les valeurs du tableau

  printf("Les valeurs du tableau sont: ");
  for(int i=0;i<20;i++){
     printf("%d, ",tab[i]);
  }
  printf("\n");

  return 0;
}
