#include<iostream>
using namespace std;

int main()
{
    FILE *fp;
    fp=fopen("input.txt", "r");

    int n,m;
    int i,j;

    while(true)
    {   
        cin>>n;

        if(n==0)
            break;
        else
        {
            int a[n];   
            for(i=0;i<n;i++)
                cin>>a[i];


            cin>>m;            
            int b[m];
            for(j=0;j<m;j++)
                cin>>b[j];


            for(i=0;i<n;i++)    cout<<a[i]<<"   ";
            cout<<endl;
            for(i=0;i<m;i++)    cout<<b[i]<<"   ";


            int s1,s2,maxsum;
            s1=s2=0;
            i=j=0;
            maxsum=0;

            while(i<n && j<m)
            {
                if(a[i]<b[j])
                {
                    s1+=a[i++];
                    // cout<<"here1\n";
                }    

                else if(a[i]>b[j])
                {
                    s2+=b[j++];
                    // cout<<"here2\n";
                }
                else
                {
                    // cout<<"here\n";
                    maxsum+=max(s1,s2)+a[i];
                    // cout<<maxsum<<"----"<<endl;
                    s1=s2=0;
                    i++;
                    j++;
                }
            }

            while(i<n)
            {
                s1+=a[i++];
            }

            while(j<m)
            {
                s2+=b[j++];
            }

            maxsum+=max(s1,s2);
            cout<<maxsum<<endl;

        }
    }    
}