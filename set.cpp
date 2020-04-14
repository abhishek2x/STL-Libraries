/*!
 * Copyright (c) 2020 Abhishek Srivastava
 */

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    set<int> s;
    
    s.insert(1);
    s.insert(2);
    s.insert(-1);
    s.insert(-13);

    // Set maintains sorted order

    // Method - 1
    for (int x : s)
    {
        cout << x << " ";
    }
    cout << endl;
    
    // Method - 2
    for (auto &&x : s)
    {
        cout << x << " ";
    }
    cout << endl;

    // Unlike vectors, in sets element can be inserted in sorted manner

    auto it = s.find(-1);
    
    if(it == s.end())
        cout << "Not present\n";
    else{

        cout << "Present\n";
        cout << *it << endl;
    }


    auto it2 = s.lower_bound(-1);
    auto it3 = s.upper_bound(-1);
    auto it4 = s.upper_bound(0);
    s.erase(-1);

    cout << *it2 << " " << *it3 << " " << *it4 << endl;

    // Method - 1
    for (int x : s)
    {
        cout << x << " ";
    }
    cout << endl;


    return 0;
}