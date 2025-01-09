#include<bits/stdc++.h>
using namespace std;
int findplace(int A[],int l, int h, int & res)
{

                    while(l<=h)
                {
                    int mid=(l+h)/2;
                    if(mid>0 && mid<h)
                    {
                        if(A[mid]>A[mid+1] && A[mid]>A[mid-1])
                        {
                            res=mid;
                            return mid;
                        }
                        else if(A[mid]<A[mid-1])
                        {
                            h=mid-1;
                        }
                        else{
                            l=mid+1;
                        }
                    } 
                    else if(mid==0)
                    {
                        if(A[0]>A[1])
                        {
                            res=0;
                        }
                        else{res=1;}
                    }
                    else if(mid==h-1)
                    {
                        if(A[h-1]>A[h-2])
                        {res=h-1;}
                        else{res=h-2;}
                    }
                
                }
               return res;
    
   
}

int main()
{

    int A[] = {2,3,6,4,7,23,45,65,34,23,33,78,89,76,5};
    int l=0,ans=0;
    int r=15;
    findplace(A,l,r,ans);
    cout<<A[ans];
    
}