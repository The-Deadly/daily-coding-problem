/**
* Given an array of integers, return a new array such that each element at index i of the new array 
* is the product of all the numbers in the original array except the one at i
*/


#include<bits/stdc++.h>
using namespace std;

void product_array(long long array[] , long long size){
	long long product[size];
	for(long long i= 0;i<size;i++){
	    product[i] = 1;
	}
	long long temp = 1;
	for(long long i = 0;i<size;i++){
	    product[i] = temp;
	    temp *= array[i];
	}
	temp = 1;
	for(long long i = size-1;i>=0;i--){
	    product[i] *= temp;
	    temp *= array[i];
	}
	for(long long i = 0;i<size;i++){
	    cout<<product[i]<<" ";
	}
	cout<<endl;
}

int main()
{
    long long a[5] = {1, 2, 3, 4, 5};
    long long size = sizeof(a)/sizeof(a[0]);
    product_array(a , size);
}