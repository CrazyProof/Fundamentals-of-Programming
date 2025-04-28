#include<iostream>
#include<cmath>
using namespace std;

bool isprime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

bool isA(int n){
    for(int i = 2; i <= n; i++){
        if(isprime(i)){
            int count = 0;
            int k = n;
            while (k % i == 0)
            {
                k /= i;
                count++;
            }
            if(count > 1)
                return false;
        }
    }
    return true;
}

int main(){
    int n = 0;
    cin >> n;
    if(isA(n))
        cout << "A" << endl;
    else
        cout << "B" << endl;
    for(int i = 2; i <= n; i++){
        if(isprime(i)){
            int k = n;
            while(k % i == 0){
                k /= i;
                cout << i << endl;
            }
        }
    }
    return 0;
}