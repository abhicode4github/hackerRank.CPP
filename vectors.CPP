// PROBLEM 
Consider an n element array, a , where each index  in i  the array contains a reference to an array of ki integers 
(where the value of ki varies from array to array). See the Explanation section below for a diagram.

Given a , you must answer q  queries. Each query is in the format i j, where i  denotes an index in array a  and j  denotes an index in the array a[i] located at
  . For each query, find and print the value of element j  in the array at location a[i]  on a new line.

// PROGRAM 

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    
    int n,q;
    cin >> n >> q ;

    vector<int> a[n];
int k;
    for(int i = 0; i < n; i++)
    {
        cin >> k; 
        for (int j = 0; j < k; j++)
        {
            int val_a_i_j;
            cin >> val_a_i_j;
            a[i].push_back(val_a_i_j);
        }
            };

    for (int i = 0; i < q; i++)
    {
        int a_i, j;
        cin >> a_i >> j;
        cout << a[a_i][j] << '\n';
    }

    return 0;
}
