#include "Translator.h"
//#include "Polynoms.h"
//#include "List.h"

using namespace std;


int main() {
    
    vector<float> c = { 1,2 };
    list<float> a(c);
    
    Polynom p1;
    p1 = TermsToPolyom(String_To_Terms("yz + x"));


    Polynom p2;
    p2 = TermsToPolyom(String_To_Terms("y"));

    cout << p1 << endl;
    cout << p2 << endl;
    cout << p1 + p2<<endl;
    cout << p1*p2 <<endl;

    return 0;
}


