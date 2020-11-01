#include <iostream>
using namespace std;

int main(int argc,char* argv[])
{
    int i, j, v;
    int get(int i,int j,int arr[]);
    void set(int i,int j,int arr[],int v);
    int arr[9];
    for(i=0,i<9,i++)
    {
        arr[i]=i;

    }
    cin>>i>>j;
    cout<<arr[(i-1)*3+(j-1)]<<endl;

    cin>>i>>j>>v;
    cout<<arr[(i-1)*3+(j-1)]<<endl;

}
int get(i, j, arr[])
{
    return arr[i,j]=[(i-1)*3+(j-1)];
}
void set( i,  j, arr[], v)
{
    arr[i,j]=[(i-1)*3+(j-1)]=v;
}