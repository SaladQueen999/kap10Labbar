#include "functions.h"
/* Tärningsspelet har följande regler:
1. Att spela en omgång kostar 10 kr.
2. Tre tärningar kastas (3 slumptal mellan 1 och 6).
3. Om alla tärningarna visar siffran 6 vinner spelaren 100 kr brutto
(men eftersom det kostade 10 kronor att spela blir nettovinsten bara
90 kronor).
4. Om alla tärningarna visar samma siffra (utom 6) blir bruttovinsten
50.
5. Om exakt två tärningar har samma siffra blir bruttovinsten 20 kr.
6. Om tärningarna visar olika siffror blir bruttovinsten 0 kr. */

int tarningsvarde(){
    //SKALL RETUNERA ETT TAL MELLA 1 OCH 6 
}
int bruttovinst(int t1, int t2, int t3){
    //HUR VINSTEN SKALL BERÄKNAS T.EX SKA 6,6,6 RETUNERA 100 
}
bool boolFranUppmaning(const char uppmaning[]){
    //SKRIVA UPPMANING PÅ SKÄRMEN OCH LÄSA IN JA ELLER NEJ.
}
int bruttovinstFranUtfortSpelOmgang(){
    //SKALL URTFÖRA EN SPELOMGÅNG, SKRIVA UT DEN PÅ SKÄRMEN T.EX
    //"Tärningarna blev  1 1 5. du vann 20kr" och sedan retunerar vinsten
}
void spelaTarningsSpelet(){
    int kapital =100; 
    while(kapital >= 10){
        cout << "du har "<< kapital << " kronor" << endl;
        bool spelaMera = boolFranUppmaning("Vill du spela mera?");
        if (spelaMera){
            kapital = kapital -10 + bruttovinstFranUtfortSpelOmgang();
        }
        else {
            cout << "Fegis!!" << endl;
        }
    }
}