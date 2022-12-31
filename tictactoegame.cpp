#include <iostream>
using namespace std;
bool checkTie(char mat [3][3])
{
bool flag=true;
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        if(mat[i][j]=='*')
        {
            flag=false;
        }
    }
}

return flag;

}
bool checkforWinner(char mat [3][3],int player) {
    char tocheck;
    if(player==1){
tocheck='O';
    }
    else{
tocheck='X';
    }
    bool flag=false;
     for (int i=0;i<3;i++)
   {
    if (mat[i][0]==tocheck&&mat[i][1]==tocheck&&mat[i][2]==tocheck)
   {flag=true;
   }
if (mat[0][i]==tocheck&&mat[1][i]==tocheck&&mat[2][i]==tocheck)
    {flag=true;
    }
}
if (mat[0][0]==tocheck&&mat[1][1]==tocheck&&mat[2][2]==tocheck)
   {flag=true;
   }
if (mat[0][2]==tocheck&&mat[1][1]==tocheck&&mat[2][0]==tocheck)
    {flag=true;
    }
return flag;
}

int main()
{
   char mat [3][3];
   for (int i=0;i<3;i++)
   {
    for (int j=0;j<3;j++)
    {
        mat[i][j]='*';
            }
   }
   bool flag =false ;
   int player =1;
   while (!flag)
   {
    for (int i=0;i<3;i++)
   {
    for (int j=0;j<3;j++)
    {
        cout<<mat[i][j];
    }  
         cout<<endl;   
   }
   int row,col;
   cout<<"enter your choice  PLayer "<<player<<endl;
   cout<<"row:";
   cin>>row;
    cout<<"coloumn:";
   cin>>col;
   if (mat[row-1][col-1]!='*')
   {
    cout<<"Block is occupied TRY AGAIN!!!!!!!";
    continue;
   }
if (player==1)
{
    mat[row-1][col-1]='O';
}
else 
{
    mat[row-1][col-1]='X';
}

if(checkforWinner(mat,player))
   {
    cout<<"player"<<player <<"  Wins!"<<endl;
    break;
   }
   if(checkTie(mat))
   {
    cout<<"!!!!!TIE!!!!!"<<endl;
   
   break;
   }
if (player==1){
    player=2;
}
else {
    player=1;
}


   }
    return 0;

}