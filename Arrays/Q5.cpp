/*
Q5 - Given an array containing n distinct integers in the range [0,n] (inclusive of both 0 and n) (inclusive of
both 0 and n). Find and return the only number of the range that is not present in the array. Here 1<n<101.

Ex: arr=[3,0,1]
Output: 2
n=3, thus the range will be [0,3]
Ex: arr=[8,6,4,2,3,5,0,1]
Output: 7
n=8, thus the range will be [0,8]
*/

#include<iostream>
using namespace std;

int main(){
    int arr[]={8,6,4,2,3,5,0,1};
    int n=8;
    int sum=0;
    int sum_of_arr_elements=0;
    //sum of [0,n]
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    //sum of array elements
    for(int i=0;i<n;i++){
        sum_of_arr_elements+=arr[i];
    }
    int missing=sum-sum_of_arr_elements;
    cout<<missing;
    return 0;
}