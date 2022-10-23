#include <iostream>

using namespace std;

int main()
{
    int i,n,sum1=0,sum2=0;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++){
            cin>>a[i]>>b[i];
    }
    /*for(i=0;i<n;i++){
        sum1+=a[i];
        sum2+=b[i];
    }*/
    for(i=0;i<n;i++){
        if(a[i]>b[i])
            sum1++;
        else if(a[i]<b[i])
            sum2++;
    }

    if(sum1>sum2)
        cout<<"Mishka"<<endl;
    else if(sum1<sum2)
        cout<<"Chris"<<endl;
    else
        cout<<"Friendship is magic!^^"<<endl;
    return 0;
}
