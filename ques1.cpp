#include<iostream>
using namespace std;
void derivative(int coeff[], int n) {
    int derivative_coeff[n];
    for(int i=0; i<n; i++) {
        derivative_coeff[i] = i*coeff[i];
    }
    for(int i=n-1; i>0; i--) {
        cout << derivative_coeff[i] << "*x^" << i << " + ";
    }
    cout << "0";
}
int main() {
    int coeff[6] = {1,2,3,0,0,0};
    derivative(coeff, 6);
    return 0;
}
