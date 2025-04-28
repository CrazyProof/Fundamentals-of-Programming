#include<iostream>
using namespace std;

int main(){
    int l, r;
    cin >> l >> r;
    int count = 0;
    for(int i = l; i <= r; i++){
        if(i%10==2)
            count++;
        if(i%100/10==2)
            count++;
        if(i%1000/100==2)
            count++;
    }
    cout << count;
    return 0;
}