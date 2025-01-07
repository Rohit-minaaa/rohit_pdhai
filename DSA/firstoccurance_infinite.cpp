#include<bits/stdc++.h>
using namespace std;
void findplace(int A[],int l, int h, int & res)
{
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(A[mid]==1)
        {
            res=mid;
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
        
    }
    
   
}
void findfirst(int A[], int & h)
{
    int l=0;
    h=1;
    while(A[h]==0)
    {
        l=h;
        h= 2 * h;
    }
    return;
}
int main()
{

    int A[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1};
    int h=0,res=0;
    findfirst(A,h);
    cout<<h<<endl;
    findplace(A,0,h,res);
    cout<<res<<endl;
    
}