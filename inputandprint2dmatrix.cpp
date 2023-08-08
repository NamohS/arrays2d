#include <iostream>
using namespace std;
main()
    {
        int r1,c1,r2,c2;
        cout<<"enter rows and columns for array1: ";
        cin>>r1;
        cin>>c1;
        cout<<"enter rows and columns for array2: ";
        cin>>r2;
        cin>>c2;

        int arr[r1][c1];
        int arr1[r2][c2];
for(int i=0;i<r1;i++)
        {
        for(int j=0;j<c1;j++)
        {cout<<"enter element  for array 1"<<":"<<endl;
        cin>>arr[i][j];
        }}
         for(int i=0;i<r2;i++)
        {
        for(int j=0;j<c2;j++)
        {cout<<"enter element for array 2 "<<":"<<endl;
        cin>>arr1[i][j];
        }}
        if(r1==r2&&c1==c2)
        {
        int sum[2][2];
        
        cout<<"sum:"<<endl;
        for(int i=0;i<r1;i++)
        {
        for(int j=0;j<c1;j++)
        {sum[i][j]=arr[i][j]+arr1[i][j];
        cout<<sum[i][j]<<" ";
        }
        cout<<endl;}
    
        }
        
        else{
            cout<<"error";
        }

    }
