//Helia Bayat    40223015
#include<stdio.h>
int main()
{
int firstnum , secondnum ;
int i , j ;
int tedad = 0 ;
printf("Enter two integer numbers.\n");
scanf("%d%d" , &firstnum , &secondnum);
while((firstnum >= secondnum) || (firstnum <= 0) || (secondnum <= 0))
{
printf("You entered incorrect numbers.\n");
printf("Enter two integer numbers.\n");
scanf("%d%d" , &firstnum , &secondnum);
}

for (j = firstnum + 1 ; j < secondnum ; j++) //halghe baraye tedade adade aval.
{
 for (i = 2 ; i < j ; i++)
 { 
   if ((j%i) == 0)
   break;

 }
  tedad++ ;

}


 printf("\ntedade adade aval: ");
 printf("%d\n" , tedad ) ;



for (j = firstnum + 1 ; j < secondnum ; j++) //halghe baraye chape adade aval.
{
 for (i = 2 ; i < j ; i++)
 {
   if ((j%i) == 0)
   break;   
 }

printf("\nadade aval: ") ;
printf("%d\n" , j ) ;
}

return 0 ;
}