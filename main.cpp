#include <iostream>

using namespace std;


float Pow(float x, int n){
    if (n==0) return 1;
    if(n<0) return 1/Pow(x, abs(n));
    return x*Pow(x,n-1);
}


int main() {
    int n;
    float x,res;
    do {
        cout << "Enter x and n:\n";
        cin >> x >> n;
    }
    while(x==0);
    res = Pow(x,n);
    cout << "Answer is:\n" << res;
    return 0;
}
