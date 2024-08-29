#include <iostream>
using namespace std;
int main()
{
    int n,i=1;
    cin >> n;
    cout << n;
    int local[109];
    while(i<=n)
    {
        cin >> local[i];
        i++;
    }
    i=1;
    int r[109],space,t[109];
    for(;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(local[j]>=local[j+1])
         {
            space=local[j];
            local[j]=local[j+1];
            local[j+1]=space;
            r[j]=j+1;
            r[j+1]=i;
         }
        }
    }
    for(i=1;i<=n;i++)
    {
        if(2*local[i]>local[i+1]+local[i-1])
            t[i]=1;
        else
            t[i]=-1;
        while(1)
        {
           for(int j=1;j<=n;j++)
           { 
                local[j]=local[j]+t[j];
           } 

        }
    }
    return 0;
}
