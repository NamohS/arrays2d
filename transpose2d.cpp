#include <iostream>
using namespace std;
main()
    {
        int r1,c1,r2,c2;
        cout<<"enter rows and columns for array: ";
        cin>>r1;
        cin>>c1;
        
        int arr[r1][c1];
        int arr1[r2][c2];
for(int i=0;i<r1;i++)
        {
        for(int j=0;j<c1;j++)
        {cout<<"enter element  for array 1"<<":"<<endl;
        cin>>arr[i][j];
        }}
        for(int i=0;i<r1;i++)
        {
        for(int j=0;j<c1;j++)
        {
        arr1[i][j]=arr[j][i]
        cout<<arr1[i][j]<<" ";
        }
        cout<<endl;}}