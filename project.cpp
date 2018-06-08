#include<iostream>
using namespace std;
char number[10] = {'0','1','2','3','4','5','6','7','8','9'};
void gameboard()
{
	cout <<endl<<endl<<"Game"<<endl<<endl;
	cout << "1        (X)  -  2        (O)" << endl << endl;
	cout << endl;
	cout << "     !     !     " << endl;
	cout << "  " << number[1] << "  !  " << number[2] << "  !  " << number[3] << endl;
	cout << "-----!-----!-----" << endl;
	cout << "     !     !     " << endl;
	cout << "  " << number[4] << "  !  " << number[5] << "  !  " << number[6] << endl;
	cout << "-----!-----!-----" << endl;
	cout << "     !     !     " << endl;
	cout << "  " << number[7] << "  !  " << number[8] << "  !  " << number[9] << endl;
	cout << "     !     !     " << endl << endl;
}
int match()
{
	if(number[1]==number[2]&&number[2]==number[3]) return 1;
	else if(number[4]==number[5]&&number[5]==number[6]) return 1;
	else if(number[7]==number[8]&&number[8]==number[9]) return 1;
	else if(number[1]==number[4]&&number[4]==number[7]) return 1;
	else if(number[2]==number[5]&&number[5]==number[8]) return 1;
	else if (number[3] == number[6] && number[6] == number[9]) return 1;
	else if (number[1] == number[5] && number[5] == number[9]) return 1;
	else if(number[3] == number[5] &&number[5] == number[7]) return 1;
	else if(number[1]!='1'&& number[2]!='2'&&number[3]!='3'&&number[4]!='4'&&number[5]!='5'&&number[6]!='6'&&number[7]!='7'&&number[8]!='8'&&number[9]!='9') return 0;
	else return -1;
}
int main()
{
	int player=1,i,entry;
	char xo;
	do
	{
		gameboard();
		cout<<"Player "<<player<<",enter a number:-";
		cin>>entry;
		player=(player%2);
		if(player==1) xo='x';
		else xo='o';
		if (entry == 1 && number[1] == '1') number[1] = xo;
		else if (entry == 2 && number[2] == '2') number[2] = xo;
		else if (entry == 3 && number[3] == '3') number[3] = xo;
		else if (entry == 4 && number[4] == '4') number[4] = xo;
		else if (entry == 5 && number[5] == '5') number[5] = xo;
		else if (entry == 6 && number[6] == '6') number[6] = xo;
		else if (entry == 7 && number[7] == '7') number[7] = xo;
		else if (entry == 8 && number[8] == '8') number[8] = xo;
		else if (entry == 9 && number[9] == '9') number[9] = xo;
		else
		{
			cout<<"Invalid entry";
			player--;
		}
		i=match();
		player++;
	}while(i==-1);
	gameboard();
		if(i==1)
		{
		    if(player==2) cout<<endl<<"Player 1 win"<<endl;
            else cout<<endl<<"Player 2 win"<<endl;
		}
	else
		cout<<"Game draw";
	return 0;
}
