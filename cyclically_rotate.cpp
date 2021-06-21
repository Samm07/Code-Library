#include<iostream>
using namespace std;

int main()
{
    FILE *fp=fopen("input.txt","r");
    int n;
    fscanf(fp,"%d",&n);

    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        fscanf(fp,"%d ",&arr[i]);
    }

    int x;
    int temp;
    while(1)
    {
        printf("\n1. Rotate");
        printf("\n2. Exit");
        
        printf("\nEnter your choice: ");
        scanf("%d",&x);
        switch(x)
        {
            case 1:  
                    temp = (arr[n-1]);
                    for(i=n-2;i>=0;i--)
                    {
                        arr[i+1]=arr[i];
                    }

                    arr[0]=temp;

                    for(i=0;i<n;i++)
                    {
                        printf("%d ",arr[i]);
                    }                  
                    break;

            case 2: exit(0);
        }
    }
}

