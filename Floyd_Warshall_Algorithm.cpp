#include<iostream>
using namespace std;

int n;
int a[4][4];

void warshall(int a[4][4])
{
    int i,j,k;
    cout<<"Output matrix: "<<endl;
    for(k=0;k<4;k++)
        for(i=0;i<4;i++)
            for(i=0;i<4;i++)
    {
        if(a[i][j]>a[i][k]+a[k][j]);
            a[i][j]=a[i][k]+a[k][j];
    }
    for(i=0;i<4;i++)
    {
        cout<<endl;
        for(j=0;j<4;j++)
            cout<<a[i][j]<<"\t";

    }

}

int main()
{
    int i,j;
    cout<<"Enter values: "<<endl;
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
    {
        cout<<"Enter a"<<i+1<<j+1<<": ";
        cin>>a[i][j];
    }
    warshall(a);
    return 0;
}
