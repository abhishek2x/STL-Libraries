
/*!
 * Copyright (c) 2020 Abhishek Srivastava
 */

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    vector<int> A = {11, 2, 3, 14};

    cout << A[1] << endl;

    sort(A.begin(), A.end()); //O(NlogN) 

    bool present = binary_search(A.begin(), A.end(), 3);
    cout << present << endl;
    present = binary_search(A.begin(), A.end(), 41); //false
    cout << present << endl;

    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);

    A.push_back(123);
    
    // Bounds

    vector<int> :: iterator it1 = lower_bound(A.begin(), A.end(), 100); // >=
    vector<int> :: iterator it2 = upper_bound(A.begin(), A.end(), 100); // >
    
    // Or

    auto it3 = lower_bound(A.begin(), A.end(), 100); // >=
    auto it4 = upper_bound(A.begin(), A.end(), 100); // >
    

    // Iterators in vectors are randoms
    cout << *it1 << " " << *it2 << endl; 
    cout << it2-it1 << "\n"; //4

    sort(A.begin(), A.end(), greater<int>()); 

    // Printing : Method - 1
    for (vector<int>::iterator i = A.begin(); i < A.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    // Printing : Method - 2
    for (int x : A)
    {
        cout << x << " ";
    }
    cout << endl;
    
    // Changing Vector values
    for(int &x : A)
    {
        x++;
        cout << x << " ";
    }
    cout << endl;

    
    return 0;
}