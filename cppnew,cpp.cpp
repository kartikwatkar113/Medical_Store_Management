#include<iostream>
using namespace std;
int flag;
void ArrOop(int a[])
{
   for(int i=0;i<5;i++)
   {
      for(int j=i+1;j<5;j++)
     {
         if(a[i]<a[j])
         {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }
     }
   }
   for(int i=0;i<5;i++)
   {
     cout<<a[i];
   }
}
void ArrOop(int arr[],int key)
{
    for(int i=0;i<5;i++)
    {
        if(arr[i]==key)
        {
            int flag=i;
            break;
        }
    }
    if(flag)
    {
        cout<<"\nsearch key found";
    }
    else
    {
        cout<<"\nsearch key not found";
    }
}
int main()
{

    int a[5]={5,6,2,7,8};
    int skey;
    ArrOop(a,skey);
    return 0;
}
