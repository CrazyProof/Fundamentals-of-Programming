//char二维数组的使用，bool数组记录是否被检查过
#include<iostream>
using namespace std;
const int MAX_N = 100;

int main()
{
    int n = 0;  //学生人数
    cin >> n;
    char name[MAX_N][21];   //char的二维数组的第一维不用使用“/0”结尾。
    int month[MAX_N];
    int day[MAX_N];
    bool ischecked[MAX_N] = {false};    //使用bool数组检查是否被之前的检查包含过，避免重复输出

    for(int i = 0; i < n; i++){
        cin >> name[i] >> month[i] >> day[i];
    }

    for(int i = 0; i < n; i++){
        if(ischecked[i] == true){
            continue;
        }
        int issame[MAX_N]={};
        int count = 0;
        for(int j = i+1; j < n; j++){
            if(ischecked[j] == true){
                continue;
            }
            else if((month[j] == month[i])&&(day[j] == day[i])){
                issame[count] = j;
                count++;
                ischecked[j] = true;
            }
        }
        if(count > 0){
            cout << month[i] << " " << day[i] << " " << name[i] << " ";
            for(int k = 0; k < count; k++){
                cout << name[issame[k]] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}