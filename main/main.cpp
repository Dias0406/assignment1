#include <iostream>
using namespace std ;
  
int main () {
    int A , B;
    cin >> A ;
    cin >> B;
    if (A && B <= 0) {
        cout << "напиши другое число";
    }
    cout << A+B << endl;
    return 0;
}
