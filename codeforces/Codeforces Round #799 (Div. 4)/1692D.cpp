#include <bits/stdc++.h>

using namespace std;

bool ispalindromes(int hour, int minute){
    int a = hour/10 + 10*(hour%10);
    if (a == minute){
        return true;
    }else{
        return false;
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        string S; cin>>S;
        int m; cin>>m;
        int hour = stoi(S.substr(0,2));
        int minute = stoi(S.substr(3,2));
        int timenow = hour*60 + minute;
        int count = 0;
        if (ispalindromes(hour, minute)) count++;
        while (true){
            int r = 0;
            timenow+= m;
            int a,b;
            b = timenow%60;
            a = (timenow - b)/60;
            if (a >= 24){
                timenow = timenow - 1440;
                a = a - 24;
            }
            if (a == hour && b == minute) break;
            if (ispalindromes(a,b)) count++;
        }
        cout<<count<<endl;
    }
}
