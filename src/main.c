#include <stdio.h>

int main(void)
{
  /* code */
  int n ;  /*Le nombre a fournir par l'utilisateur*/
  int somme; /* le resultat du calcul*/

  /*Demande et lecture du nombre*/
  printf("Introduire n: ");
  scanf("%d", &n);

  /* calcul de la somme des n premiers entiers*/
  for(somme = 0; 0 < n ; n--) somme += n;
    /* affichage du resultat */
     printf("Somme: %d\n", somme);
  
  

  return 0;
}
