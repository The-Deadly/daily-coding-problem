#include<bits/stdc++.h>
using namespace std;

void decoding(string s , long long len){
    long long count[len+1];
    count[0] = 1;
    count[1] = 1;
    for(long long i = 2;i<=len;i++){
        count[i] = 0;
        if(s[i-1] > '0'){
            count[i] = count[i-1];
        }
        if((s[i-2] == '1' or s[i-2] == '2') and s[i-1] < '7'){
            count[i] += count[i-2];
        }
    }
    cout<<count[len]<<endl;
}

int main()
{
    string s = "12321";
    long long len = s.size();
    decoding(s , len);
}