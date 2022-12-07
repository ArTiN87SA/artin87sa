#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    srand(time(0));
    int i,j,ci=5,cj=5,n[ci][cj];
    for(i=0;i<ci;i++)
        for(j=0;j<cj;j++)
            if(i==ci-1 || j==cj-1)
                n[i][j]=0;
            else
                n[i][j]=rand()%10;
    for(j=0;j<cj-1;j++)
    {
        for(i=0;i<ci;i++)
            if(i==ci-1)
            {
                for(i=0;i<ci-1;i++)
                n[ci-1][j]+=n[i][j];
            }
    }
    for(i=0;i<ci-1;i++)
    {
        for(j=0;j<cj;j++)
            if(j==cj-1)
            {
                for(j=0;j<cj-1;j++)
                n[i][cj-1]+=n[i][j];
            }
    }
    for(i=0;i<ci;i++)
    {
        for(j=0;j<cj;j++)
        {
            cout << n[i][j] << " ";
            if(i!=ci-1)
                cout << " ";
            if(i==ci-1)
            {
                if(n[i][j]<10)
                    cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
