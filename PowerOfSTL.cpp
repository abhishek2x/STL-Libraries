
/*!
 * Copyright (c) 2020 Abhishek Srivastava
 */

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    // pair
    // eg : (x, y) -> this is a pair of <int, int>

    set< pair<int, int> > S;

    S.insert({10, 20});
    S.insert({401, 6000});
    S.insert({2, 3});
    S.insert({30, 400});

    int point = 50;

    auto it = S.upper_bound({point, INT_MAX});

    if(it == S.begin()){
        cout << "Not present";
        return 0;
    }

    it--;
    pair<int, int> current = *it;
    
    if(current.first <= point && point < current.second){
        cout << "Yes\n";
        cout << current.first << " " << current.second << endl;
    } else{
        cout << "Not present";
    }


    return 0;
}