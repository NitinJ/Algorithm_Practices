/* Sample program illustrating input and output methods */
#include<cstdlib>
#include <algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main(){


   long long N,a,h;
   long long time = 1000000006,circle_time = 10000,add=0,flag=0;
    vector<int> v;
        cin >> N;

   int V[N];
   for(long long i = 0; i < N; i++){
      cin >> a;
       v.push_back(a);
   }
   sort(v.begin(),v.end());
   if(N%2==0)
       h=time/circle_time*(N/2 *2 * N/2 *2);
   else
       h = time/circle_time *(N/2 *2 * (N/2 +1) *2);
       
   long result = 0;
    for (long long i=0;i<N-1;i++)
    {
        if (flag == 0)
        {
            if (v[i+1] - v[i] == 1)
            {
			    add +=2;
			    flag = 1;
            }
		    else
			    flag = 0;
        }
	    else
		    flag = 0;
    }

   cout << h+add << "\n";
   


   return 0;
}