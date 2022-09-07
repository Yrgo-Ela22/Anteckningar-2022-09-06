/************************************************************************************
* F�r att lagra data anv�nds variabler och konstanter. Variablers v�rden kan �ndras
* vid behov, medan konstanters v�rde ej kan �ndras efter initiering (tilldelning av 
* ett startv�rde.
* 
* Variabler deklareras enligt nedan:
* datatyp namn = startv�rde;
* 
* Exempelvis f�r att lagra Kalle Ankas �lder 88 i en variabel d�pt age:
* int age = 88;
* 
* Konstanter deklareras p� samma s�tt, men med nyckelordet const framf�r eller bakom
* datatypen (oftast anv�nds framf�r):
* const datatyp namn = startv�rde;
* 
* Exempelvis f�r att lagra talet 100 i en konstant d�pt length_of_century:
* const int length_of_century = 100;
*
* Som en tumregel b�r alla datamedlemmar vars v�rde inte skall �ndras s�ttas till
* konstanter, prim�rt f�r att minska risken f�r misstag.
* 
* I C anv�nds olika datatyper beroende p� vad som skall lagras:
* 
* int st�r f�r integer (heltal), exempelvis int i = -3;
* float st�r f�r flyttal (decimaltal), exempelvis float f = 2.5f;
* double st�r f�r flyttal med h�gre (ungef�r dubbel) precision, vilket ger mer exakt
* resultat vid ber�kningar och dylikt, exempelvis double d = 3.3;
* char anv�nds f�r enskilda tecken, exempelvis 'e'.
* const char* anv�nds f�r multipla tecken, exempelvis "Hall�".
*
* F�r utskrift av lagrade v�rden anv�nds formatspecificerare, exempelvis %d f�r
* heltal (d = decimal), %g f�r flyttal (%lg f�r double), %s f�r text samt 
* %c f�r enstaka tecken.
************************************************************************************/
#include <stdio.h>

/************************************************************************************
* main: Skapar tre konstanter x, y och z och tilldelar x = 5, y = 4 och z = 3.
*       Differensen av dessa tal ber�knas och tilldelas till konstanten a.
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