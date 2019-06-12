/**
* Given a list of numbers and a number k, return whether any two numbers from the list add up to k
*/


#include<bits/stdc++.h>
using namespace std;

void find_the_sum(long long array[] ,long long size, long long k){
    long long ans = 0;
//	unordered_set<long long> s;
	unordered_map<long long , long long> m;
	for(long long i = 0; i < size; i++){
		long long temp = k - array[i];
		if(m.find(temp) != m.end()){
		    ans = 1;
		    cout<<"true"<<endl;
		    break;
		}
		//s.insert(array[i]);
		m.insert({array[i], array[i]});
	}
	if(ans == 0){
	    cout<<"false"<<endl;
	}
}

int main()
{
    long long a[4] = {10 , 15, 3, 7};
    long long size = sizeof(a)/sizeof(a[0]);
    find_the_sum(a , size , 17);
}