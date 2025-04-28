#include<iostream>
using namespace std;

int main(){
    int n = 0;
    cin >> n;
    int day = n / (24 * 60);
    int hour = (n % (24 * 60)) / 60;
    int min = n % 60;
    cout << day << " " << hour << " " << min;
    return 0;
}