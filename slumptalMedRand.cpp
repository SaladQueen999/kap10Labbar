#include "functions.h"
#include <time.h>
void skrivSlumptal(int antal){
    cout << "skriver några slumptal mellan 0 och " << RAND_MAX << endl;
    for (int i=0; i<antal; ++i)
        cout << rand() << " ";
cout << endl;
}
void provaSkrivSlumptal(){
    cout << "Provar skrivSlumptal" << endl;
    skrivSlumptal(5);
    skrivSlumptal(5);
}
void ingangTillSlump(){
    provaSkrivSlumptal();
}
void testsrand(){
    int n = 1 + rand() % 6;
    for (int i=0; i<rand(); i++){
        cout << i << n << endl; 
    }
}
int main(){
    testsrand();
}