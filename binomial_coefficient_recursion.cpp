#include<iostream>
using namespace std;

int bcRecursion(int n, int k)
{
    int i,j;

    if(n==k | k==0)
        return 1;

    else if(k==1)
        return n;

    else
        return bcRecursion(n-1,k-1)+bcRecursion(n-1,k);
}

int main()
{
    int n,k;
    // cin>>n>>k;

    n=7;
    k=3;

    int nCk;
    nCk=bcRecursion(n,k);
    cout<<nCk;
    

}