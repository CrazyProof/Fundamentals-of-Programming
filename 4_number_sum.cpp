//使用暴力循环
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n = 0;
    cin >> n;
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        sum = 0;
        for(int j = i; j < n; j++)
        {
            sum+=j;
            if(sum == n){
                cout << i << " " << j << endl;
                break;
            }
            if(sum > n)
                break;
        }
    }
    return 0;
}