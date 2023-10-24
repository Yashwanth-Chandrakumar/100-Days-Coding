#include <iostream>

using namespace std;

int main() {

    long long num;

    cin>>num;

    long long A[num], sum=0, count=0;

    for(long long i=0; i<num; i++)

    {

        cin>>A[i];

        if(A[i]>=0)        

        {

            sum+=A[i];

            count++;

        }

    }

    if (sum==0)             

    {

        sum=A[0];

        for(long long i=0; i<num; i++)

        {

            if(sum<A[i])

                sum=A[i];   

        }

        count=1;

    }

    cout<<sum<<" "<<count;

}
