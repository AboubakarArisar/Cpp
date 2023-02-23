#include<iostream>
using namespace std;
char block[9] = {'1','2','3','4','5','6','7','8','9'};
void shape();
int checkwin();
int main()
{

cout<<endl;
int player=1, number, result=-1;
char obj;
do
{
	shape();
	if(player%2==0) //this is because to assign the value of player 1 and 2
	player=2;
	else
	player=1;
	
	if(player==1)
	obj='X';
	else
	obj='O';
	cout<<"Player "<<player<<" : "<<" Enter the number : ";
	cin>>number;
	if(number==1 && block[0]=='1')
	{
		block[0]=obj;
	}
	else if(number==2 && block[1]=='2')
	{
		block[1]=obj;
	}
	else if(number==3 && block[2]=='3')
	{
		block[2]=obj;
	}
	
	else if(number==4 && block[3]=='4')
	{
		block[3]=obj;
	}
	
	else if(number==5 && block[4]=='5')
	{
		block[4]=obj;
	}
	
	else if(number==6 && block[5]=='6')
	{
		block[5]=obj;
	}
	
	else if(number==7 && block[6]=='7')
	{
		block[6]=obj;
	}
	
	else if(number==8 && block[7]=='8')
	{
		block[7]=obj;
	}
	
	else if(number==9 && block[8]=='9')
	{
		block[8]=obj;
	}
	else
	{
		cout<<"Wrong number "<<endl;
		if(player==1) //if player 1 or 2 inputs wrong value then his turn will be given to other player
		player++;
		else if(player==2)
		player--;
	}
	
	result=checkwin();
	if(result==0) //result 0 will be incase of TIE
	break;
	if(result==1) //result 1 will be incase of WIN
	break;
	player++;
}while(result!=1); //loop will run until win or Tie
shape();
if(result ==1)
{
	cout<<"Player "<<player<<" won"<<endl;
}
else 
{
	cout<<"Match Tie "<<endl;
}
return 0;
}
int checkwin()
{
	if((block[0]==block[1]) && (block[1]==block[2]))
	return 1;
	else if((block[3]==block[4]) && (block[4]==block[5]))
	return 1;
	else if((block[6]==block[7]) && (block[7]==block[8]))
	return 1;
	else if((block[0]==block[3]) && (block[3]==block[6]))
	return 1;
	else if((block[1]==block[4]) && (block[4]==block[7]))
	return 1;
	else if((block[2]==block[5]) && (block[5]==block[8]))
	return 1;
	else if((block[0]==block[4]) && (block[4]==block[8]))
	return 1;
	else if((block[2]==block[4]) && (block[4]==block[6]))
	return 1;
	  else if (block[0] != '1' && block[1] != '2' && block[2] != '3' 
                    && block[3] != '4' && block[4] != '5' && block[5] != '6' 
                  && block[6] != '7' && block[7] != '8' && block[8] != '9')
   {
				  

        return 0;
    }
    else
    {
        return -1;
    }
        
}
void shape()
{

	system("cls");
	cout<<"======================================"<<endl;
cout<<"============TIC TAC TOE =============="<<endl;
cout<<"======================================="<<endl;

	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

 cout << "     |     |     " << endl;
    cout << "  " << block[0] << "  |  " << block[1] << "  |  " << block[2] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    
     cout << "     |     |     " << endl;
     
    cout << "  " << block[3] << "  |  " << block[4] << "  |  " << block[5] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    
     cout << "     |     |     " << endl;
     
    cout << "  " << block[6] << "  |  " << block[7] << "  |  " << block[8] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;


}
