#include <stdio.h>
//using namespace std;




int main()
{
int ln,k,arr[nxt], ans;
    ans=inf;
    cin>>n>>k;
    F(i,1,n)
        cin>>arr[i];
    F(beg,1,1+k)
    {
        ll cost=0, nxt=beg;
        while(nxt<=n)
        {
            cost+=arr[nxt];
            nxt=nxt+2*k+1;
        }
        nxt=nxt-2*k-1;
        if(nxt+k>=n)
            ans=min(cost,ans);
    }
    cout<<ans<<endl;
    return 0;
}
