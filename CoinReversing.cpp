#include <iostream>
#include <vector>
using namespace std;

double headsCount_Last(int N, int a[], int K) {
        double head = N;
        double tail = 0;
        for (int i = 0; i < K; i++) {
            double counter = (tail - head) * a[i] / N;
            head += counter;
            tail -= counter;
        }
        return head;
}

int main()
{
    int N;
    int K;
    int i=0;

    cin>>N; // Number of coins i.e. Heads
    cin>>K; // Number of operations
    int A=K;

    int a[K]; // container to hold the value of each K

    while(A-- > 0) {
        cin>>a[i++];
    }

    cout<<headsCount_Last(N, a, K);
    return 0;
}
