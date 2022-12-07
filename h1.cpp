#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    srand(time(0));
    int i,j,ci=10,cj=10;
    int n[ci][cj];
    for(i=0;i<ci;i++)
        for(j=0;j<cj;j++)
            n[i][j] = rand() % 10;
    for(i=0;i<ci;i++)
    {
        for(j=0;j<cj;j++)
            if(ci-i==1 || ci-i==ci || cj-j==1 || cj-j==cj)
                cout << "* ";
            else
                cout << n[i][j] << " ";
        cout << endl;
    }
	return 0;
}
