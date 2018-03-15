#include <iostream>
#include <climits>
using namespace std;
int i,j,k;
char arr[9];
void x();
void play(int counter);
void display();
void check();
main ()
{
    display();
for(j=1;j<=9;j++)
{
if(k!=1)
{
    play(j);
check();
}
}
if(k!=1)
    cout<<"DRAW"<<endl;
}
void display()
{
   for (i=0;i<9;i++)
    {
        arr[i]='0'+i;
    }
    cout<<"     "<<arr[0]<<" |"<<arr[1]<<" |"<<arr[2]<<endl;
    cout<<"     --"<<"|"<<"--"<<"|"<<"--"<<endl;
    cout<<"     "<<arr[3]<<" |"<<arr[4]<<" |"<<arr[5]<<endl;
    cout<<"     --"<<"|"<<"--"<<"|"<<"--"<<endl;
    cout<<"     "<<arr[6]<<" |"<<arr[7]<<" |"<<arr[8]<<endl;
}

void play(int counter)
{
    char ply = ' ';
    if(counter%2!=0)
{
    ply='X';
}
else
{
    ply='O';
}
    cout<<endl;
    cout<<"enter position of " << ply <<endl;
    cin>>i;
 while(cin.fail())
    {
        cin.clear();// to clear the character value
        cin.ignore(INT_MAX,'\n');//ignore and free the space assigning it to int
        cout<<"enter correctly my friend"<<endl;
        cin>>i;

    }
   while(arr[i]== (ply == 'X' ? 'O' : 'X') | i>8)
    {
        cout<<"invalid input "<<"enter the position of " << ply <<endl;
        cin>>i;
    }
    arr[i]=ply;
    cout<<endl;
    cout<<"     "<<arr[0]<<" |"<<arr[1]<<" |"<<arr[2]<<endl;
    cout<<"     --"<<"|"<<"--"<<"|"<<"--"<<endl;
    cout<<"     "<<arr[3]<<" |"<<arr[4]<<" |"<<arr[5]<<endl;
    cout<<"     --"<<"|"<<"--"<<"|"<<"--"<<endl;
    cout<<"     "<<arr[6]<<" |"<<arr[7]<<" |"<<arr[8]<<endl;
   }
void check()
{
for(i=0;i<=2;i++)
 {
     if((arr[i]=='X' && arr[i+3]=='X') && arr[i+6]=='X')
        {
            k=1;
        cout<<"player 1 wins"<<endl;
        }
  else if((arr[i]=='O' && arr[i+3]=='O') && arr[i+6]=='O')
      {
          k=1;
      cout<<"player 2 wins"<<endl;
      }
}
for(i=0;i<=6;i=i+3)
 {
    if((arr[i]=='X' && arr[i+1]=='X') && arr[i+2]=='X')
           {
               k=1;
          cout<<"player 1 wins"<<endl;
          }
  else if((arr[i]=='O' && arr[i+1]=='O') && arr[i+2]=='O')
            {
                k=1;
              cout<<"player 2 wins"<<endl;}
 }
 if((arr[0]=='X' && arr[4]=='X') && arr[8]=='X')
  {
         k=1;
      cout<<"player 1 wins"<<endl;
       }
else if ((arr[0]=='O' && arr[4]=='O') && arr[8]=='O')
     {
         k=1;
      cout<<"player 2 wins"<<endl;
      }
if((arr[2]=='X' && arr[4]=='X') && arr[6]=='X')
      {
                   k=1;
      cout<<"player 1 wins"<<endl;
      }
else if ((arr[2]=='O' && arr[4]=='O') && arr[6]=='O')
      {
          k=1;
      cout<<"player 2 wins"<<endl;
}
}
