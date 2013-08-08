#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;
int main() {
    int n,k,i,j,num[100000],m,count=0;
    cin>>n>>k;
        for(i=1;i<=n;i++)
        {
            cin>>num[i];
        }
        vector<int> v(num, num+n);
        sort (v.begin(), v.end());
        for(i=1;i<=n;i++)
        {
           m=v[i]+k;
            if ( binary_search(v.begin(), v.end(), m)) 
                count++;
        }
     cout<<count;               
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}