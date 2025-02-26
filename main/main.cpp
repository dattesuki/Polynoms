#include "List.h"

using namespace std;
int main() {
    vector<float> c = { 1,2,3,7,5,6};
    list<float> a(c);
    a.MakeCycle(3,3);
    cout << a<<endl;
    cout << (*a.GoBack()).GetValue();
    return 0;
}