#include<iostream>
using namespace std;

// int max_num(int n){
//     int a = n/1000;
//     int b = (n-1000*a)/100;
//     int c = (n-1000*a-100*b)/10;
//     int d = (n-1000*a-100*b-10*c);
// }
int max_num(int n)
{
    int a = n % 10;
    int b = (n % 100) / 10;
    int c = (n % 1000) / 100;
    int d = n / 1000;
    if(a > b){
        int tmp = a;
        a = b;
        b = tmp;
    }
    if (b > c)
    {
        int tmp = b;
        b = c;
        c = tmp;
    }
    if (c > d)
    {
        int tmp = c;
        c = d;
        d = tmp;
    }
    if (a > b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    if (b > c)
    {
        int tmp = b;
        b = c;
        c = tmp;
    }
    if (a > b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    return 1000*d+100*c+10*b+a;
}

int min_num(int n)
{
    int max = max_num(n);
    int a = max % 10;
    int b = (max % 100) / 10;
    int c = (max % 1000) / 100;
    int d = max / 1000;
    return 1000*a+100*b+10*c+d;
}

int main(){
    int n = 0;
    cin >> n;
    int count = 1;
    int result = max_num(n)-min_num(n);
    while(result!=6174){
        result = max_num(result)-min_num(result);
        count++;
    }
    cout << count;
    return 0;
}