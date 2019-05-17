#include<iostream.h>
#include<conio.h>

int binarysearch(int a[3][4],int c,int d,int b)
{
   while(d>=c)
   {int m=c+(d-c)/2;

   if(a[m]==b)
   return b;

   if(a[m]>b)
   c=m+1;

   else
   d=m-1;
    }
return -1;

}

int main()
{ int i;j,b;
  int a[3][4];
  cout<<"Enter 12 elements";
  for(i=0;i<=3;i++)
  {for(j=0;j<=4;j++)
    cin>>a[i][j;]}
  cout<<"Enter elemnt to be found"
  cin>>b;
  cout<<"\nThe postion of the of the element is  "<<binarysearch(a,a[1][1],a[3][4],b)+1;
  cout<<"\nIf 0 is generated , it means element wasn't present";
  
}
