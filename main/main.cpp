#include "List.h"

using namespace std;
int main() {
    vector<float> c = { 1,2,3,7,5,6};
    list<float> a(c);
    //a.MakeCycle(1,0);
    list<float> b(c);
    list<float>::iterator it(b);
    list<float>::iterator it2(b);
    ++it;
    ++it2;
    it2++;
    cout << (it == it2);
    return 0;
}