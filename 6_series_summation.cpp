#include<iostream>
using namespace std;

int main(){
    int k = 0;
    cin >> k;
    double s = 0.0;
    double i = 1.0;
    while(s < k){
        s += 1/i;
        i++;
    }
    cout << i;
    return 0;
}