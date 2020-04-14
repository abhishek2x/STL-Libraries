
/*!
 * Copyright (c) 2020 Abhishek Srivastava
 */

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    map<int, int> A;

    A[1] = 100;
    A[2] = -1;
    A[3]= 300;
    A[4] = 1;

    map<char, int> cnt;
    string s = "Abhishek Srivastava";

    for (auto &&c : s)
    {
        cnt[c]++;
    }
    // or
    // for (char c : x)
    // {
    //     cnt[c]++;
    // }
    

    cout << cnt['a'] << " " <<  cnt['z'] << endl;

    auto it = A.find('z');
    if(it == A.end())
        cout << "Not Found\n";

    return 0;
}