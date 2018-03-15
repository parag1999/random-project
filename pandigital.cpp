#include <iostream>
using namespace std;
main()
{
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0;
    int m,n,p,k,counter=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    m=n;
    while(n!=0)
    {
        n=n/10;
        counter++;
    }
cout<<"no of digits "<<counter<<endl;
if(counter<10)
{
    cout<<"it is not a pandigital number"<<endl;
}
else
{
int arr[counter];
for(k=0;k<=counter,m!=0;k++)
{
    p=m%10;
    m=m/10;
    arr[k]=p;
}

 for(k=0;k<=counter;k++)
    {
        switch(arr[k])
{
  case 0:a+=1;
  break;
  case 1:b+=1;
  break;
  case 2:c+=1;
  break;
  case 3:d+=1;
  break;
  case 4:e+=1;
  break;
  case 5:f+=1;
  break;
  case 6:g+=1;
  break;
  case 7:h+=1;
  break;
  case 8:i+=1;
  break;
  case 9:j+=1;
  break;
}
}

    if (a>0&&b>0&&c>0&&d>0&&e>0&&f>0&&g>0&&h>0&&i>0&&j>0)
    {
    cout<<"no is a pandigital number"<<endl;
    cout<<"count of 0 is "<<a<<endl;
    cout<<"count of 1 is "<<b<<endl;
    cout<<"count of 2 is "<<c<<endl;
    cout<<"count of 3 is "<<d<<endl;
    cout<<"count of 4 is "<<e<<endl;
    cout<<"count of 5 is "<<f<<endl;
    cout<<"count of 6 is "<<g<<endl;
    cout<<"count of 7 is "<<h<<endl;
    cout<<"count of 8 is "<<i<<endl;
    cout<<"count of 9 is "<<j<<endl;
    }

else
    cout<<"no is  not a pandigital number"<<endl;
}
}
