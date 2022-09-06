
/******************************************************************************
* #include används för inkluderingsdirektiv, dvs. vi kan inkludera bibliotek,
* egna headerfiler och dylikt. I detta fall inkluderas stdio.h (C Standard 
* Input and Output Library), som används för utskrift och inmatning i C.
* 
* Inkluderingsdirektiv sker enligt nedan för C-bibliotek:
* #include <biblioteksnamn.h>
*
* För egna headerfiler används "" i stället för <>, exempelvis:
* #include "headerfil.h"
* 
* Alla C-program börjar i funktionen main, vilket också är fallet i många
* andra språk, såsom C++, Java, C#, Rust med mera.
* 
* Funktioner är kodstycken som exekverar sekventiellt. 
* En funktion skrivs definieras med följande syntax:
* 
* returtyp funktionsnamn(funktionsparametrar)
* {  
* }
* 
* Funktionsparametrarna möjliggör att vi kan skicka med data, exempelvis
* heltal, adresser eller text till en funktion. En tom parentes eller void
* (tomrum) indikerar att inga parametrar skickas med till funktionen.
* 
* Returtypen indikerar vilken datatyp som vi ska returnera, exempelvis ett 
* heltal, ett flyttal (decimaltal), en textsnutt med mera. När vi skriver int
* deklarerar vi att vi kommer returnera ett heltal (integer = heltal) när
* funktionen avslutas.
* 
* Måsvingar { } indikerar var funktionen börjar och slutar, där { = början
* och } = slutet. I vissa andra språk används begin och end eller bara
* indrag i stället, men vanligast är måsvingar.
* För att skriva ut {, tryck alt gr + 7. 
* För att skriva ut }, tryck alt gr + 0.
* 
* Vi anropar funktionen printf för att skriva ut textsnutten "Hello world".
* Därför skickar vi med denna textsnutt. Efter utskriften hoppar vi tillbaka
* och läser nästa instruktion (på nästa rad).
* 
* Vi använder semikolon för att avsluta instruktioner, likt hur vi använder
* punkt för att avsluta meningar.
* 
* Vi returnerar heltalet 0 för att indikera för operativsystemet (Windows,
* Linux med mera) att programkörningen gick bra. I C kör vi ofta att 0 = bra, 
* 1 = felkod. Egentligen är denna rad endast användbar om vi kör i en 
* terminal eller dylikt och vill kolla ifall programmet körde som det skulle 
* eller inte. Sedan C99 så är instruktionen return 0 inte obligatorisk. Ni 
* kan alltså skippa denna instruktion om ni vill och det sker som default
* (automatiskt).
*******************************************************************************/
#include <stdio.h> /* Inkluderar bibliotek för inmatning och utskrift. */

/******************************************************************************
* main: Programmets startpunkt. Skriver ut "Hello world i terminalen.".
*******************************************************************************/
int main(void)
{
    printf("Hello World");
    return 0;
}


