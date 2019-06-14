/*
* This problem was asked by Stripe.
* Given an array of integers, find the first missing positive integer in linear time and constant space. 
* In other words, find the lowest positive integer that does not exist in the array. 
* The array can contain duplicates and negative numbers as well.
*/

#include<bits/stdc++.h>
using namespace std;

long long separate(long long array[] , long long size){
    long long j = 0;
    for(long long i = 0;i<size;i++){
        if(array[i] <= 0){
            swap(array[i] , array[j]);
            j++;
        }
    }
    return j;
}

long long missingNumber(long long array[] , long long size){
    for(long long i = 0;i<size;i++){
        if((abs(array[i])-1 < size) and (array[abs(array[i])-1] > 0)){
            array[abs(array[i])-1] = -array[abs(array[i])-1];
        }
    }
    for(long long i = 0;i<size;i++){
        if(array[i] > 0){
            return i+1;
        }
    }
    return size+1;
}

int main()
{
    long long a[] = {1,2,0};
    long long size = sizeof(a)/sizeof(a[0]);
    long long start_positive = separate(a , size);
    long long number = missingNumber(a+start_positive , size-start_positive);
    cout<<endl;
    cout<<number<<endl;
}