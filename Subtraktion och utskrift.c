/************************************************************************************
* För att lagra data används variabler och konstanter. Variablers värden kan ändras
* vid behov, medan konstanters värde ej kan ändras efter initiering (tilldelning av 
* ett startvärde.
* 
* Variabler deklareras enligt nedan:
* datatyp namn = startvärde;
* 
* Exempelvis för att lagra Kalle Ankas ålder 88 i en variabel döpt age:
* int age = 88;
* 
* Konstanter deklareras på samma sätt, men med nyckelordet const framför eller bakom
* datatypen (oftast används framför):
* const datatyp namn = startvärde;
* 
* Exempelvis för att lagra talet 100 i en konstant döpt length_of_century:
* const int length_of_century = 100;
*
* Som en tumregel bör alla datamedlemmar vars värde inte skall ändras sättas till
* konstanter, primärt för att minska risken för misstag.
* 
* I C används olika datatyper beroende på vad som skall lagras:
* 
* int står för integer (heltal), exempelvis int i = -3;
* float står för flyttal (decimaltal), exempelvis float f = 2.5f;
* double står för flyttal med högre (ungefär dubbel) precision, vilket ger mer exakt
* resultat vid beräkningar och dylikt, exempelvis double d = 3.3;
* char används för enskilda tecken, exempelvis 'e'.
* const char* används för multipla tecken, exempelvis "Hallå".
*
* För utskrift av lagrade värden används formatspecificerare, exempelvis %d för
* heltal (d = decimal), %g för flyttal (%lg för double), %s för text samt 
* %c för enstaka tecken.
************************************************************************************/
#include <stdio.h>

/************************************************************************************
* main: Skapar tre konstanter x, y och z och tilldelar x = 5, y = 4 och z = 3.
*       Differensen av dessa tal beräknas och tilldelas till konstanten a.
*       Resultatet av differensen skrivs ut i terminalen innan programmet avslutas.
************************************************************************************/
int main(void)
{
   const int x = 5;
   const int y = 4;
   const int z = 3;

   const int a = x - y - z;
   printf("%d - %d - %d = %d\n", x, y, z, a);

   return 0;
}