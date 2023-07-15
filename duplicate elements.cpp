// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int arr[] = {5,5,1,2,2,3,3,4,8,0,0,8};
    int temp[50],j=0,n,c=0;
    
    n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    for (int i = 0; i < n -1; i++)
        if (arr[i] == arr[i + 1])
            c++;//counts the number of duplicates
        else
            temp[j++] = arr[i];// first j is 0 then +1 as post increments
    
    // Store the last element as whether it is unique or
    // repeated, it hasn't stored previously
    temp[j++] = arr[n - 1];// j=4
 
    // Modify original array
    for (int i = 0; i < j; i++)//final result
       cout<<temp[i]<<" ";
    cout<<"\nThe number of duplicate elements: "<<c;
    return c;
}
