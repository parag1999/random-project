#include <iostream>
main()
{int i,j;
char arr[3][3];


for (i=0;i<3;i++)
  {

    {for(j=0;j<3;j++)
        arr[i][j]=48+i;
    }
    cout<<arr[0][0]<<" |"<<arr[0][1]<<" |"<<arr[0][2]<<endl;
    cout<<"--"<<"|"<<"--"<<"|"<<"--"<<endl;
    cout<<arr[1][0]<<" |"<<arr[1][1]<<" |"<<arr[1][2]<<endl;
    cout<<"--"<<"|"<<"--"<<"|"<<"--"<<endl;
    cout<<arr[2][0]<<" |"<<arr[2][1]<<" |"<<arr[2][2]<<endl;
]}
