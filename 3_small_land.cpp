#define PI 3.14159
#include<iostream>
using namespace std;

int main(){
    float x = 0.0, y = 0.0;
    cin >> x >> y;
    int year = 0.5*(PI * (x*x+y*y))/50+1;
    cout << year;
    return 0;
}