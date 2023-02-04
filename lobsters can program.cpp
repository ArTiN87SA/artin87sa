#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0)); 
    int i,j,ci=10,cj=10,n[cj][ci],rule[ci][cj],score[ci];
    for(i=1;i<=ci;i++)
    {
        for(j=1;j<=cj;j++)
            n[i][j]= rand()%10;    
    }
    
    for(i=1;i<=ci;i++)
    {
        for(j=1;j<=cj;j++)
            rule[i][j]= rand()%10;   
    }
    for(i=1;i<=ci;i++)
    {
        for(j=1;j<=cj;j++)
            cout << n[i][j] << " ";
        cout << endl;
    }
    cout <<"\n---------------\n";
    for(i=1;i<=ci;i++)
    {
        for(j=1;j<=cj;j++)
            cout << rule[i][j] << " ";   
        cout << endl;
    }
    for(i=1;i<=ci;i++) 
    {   
        score[i]=0;
        for(j=1;j<=cj;j++)
            if(rule[i][j]==n[i][j])
            {
                score[i]--;
            }
        cout <<i<<"rd line's score : "<<score[i]<<endl;
    }
    
    return 0;
}
