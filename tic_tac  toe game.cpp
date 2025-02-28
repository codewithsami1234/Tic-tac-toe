#include<iostream>
using namespace std;
char board[3][3]={{'*','*','*'},{'*','*','*'},{'*','*','*'}};
char turn ='X';
int row,col;
void game_board(){
system("CLS");
	cout<<"Tic   tack   toe   game"<<endl;
	cout<<"\t Player 1 [X] \n \tPlayer 2 [O]\n";
	cout<<"                      |                |             "           <<endl;
	cout<<"\t\t"<<board[0][0]<<"     |        "<<board[0][1]<<"       |     "<<board[0][2]<<endl;
	cout<<"\t     ____________________________________"<<endl;
	cout<<"                      |                |             "           <<endl;
	cout<<"\t\t"<<board[1][0]<<"     |        "<<board[1][1]<<"       |     "<<board[1][2]<<endl;
	cout<<"\t     ____________________________________"<<endl;
	cout<<"                      |                |             "           <<endl;
	cout<<"\t\t"<<board[2][0]<<"     |        "<<board[2][1]<<"       |     "<<board[2][2]<<endl;
}
bool isValidMove(int choice) {
//	r represent rows while c represent column
    int r = (choice - 1) / 3;
    int c = (choice - 1) % 3;
    return (board[r][c] == '*');
}
void player_turn(){
	int choice;
	 bool validMove = false;
    while (!validMove){
	if(turn=='X')
	cout<<"\n\tPlayer 1 [X] turn:";
if(turn == 'O')
	cout<<"\n\t Player 2[O] turn:";
	cin>>choice;
	 // Valid move check
        if (choice >= 1 && choice <= 9 && isValidMove(choice)) {
            validMove = true;
//choice
 switch(choice){
	case 1:{row=0;col=0;break;}
	case 2:{row=0;col=1;break;}
	case 3:{row=0;col=2;break;}
	case 4:{row=1;col=0;break;}
	case 5:{row=1;col=1;break;}
	case 6:{row=1;col=2;break;}
	case 7:{row=2;col=0;break;}
	case 8:{row=2;col=1;break;}
	case 9:{row=2;col=2;break;}
	default:
		cout<<"You entered invalid number"<<endl;
}
board[row][col] = turn;
            turn = (turn == 'X') ? 'O' : 'X';
        } else {
            cout << "You entered an invalid move. Try again! " << endl;
        }
}
}
//boolis used because we choose true or false value
  bool check_winner(){
//check winner for rows and column
		for(int i=0;i<3;i++){
		if((board[i][0]==board[i][1] && board[i][1]== board [i][2] &&  board [i][0] != '*')||
		(board[0][i]==board [1][i] && board[1][i] ==board[2][i] &&  board[0][i]!= '*'))	{
			return true;
		}
	}
//check winner diagonally
if((board [0][0]==board[1][1] && board[1][1]==board[2][2]&&  board[0][0] != '*')||
(board[0][2]== board[1][1] && board[1][1]== board[2][0]&& board[0][2]!= '*')){
	return true;
}
	return false;
}
	 int main () {
	 	bool gameOver=false;
	 	while(!gameOver){
	 game_board();
     player_turn();
  if  (check_winner()){
     	game_board();
     	if(turn =='O'){
     		cout<<"Player 1 [X] Wins . Congratulations!"<<endl;
		 }else{
		 	cout<<"Player 2 [O] Wins . Congratulations!"<<endl;
		 }
		 gameOver=true;
 }
 else {
            // Check for draw / tie
            bool draw = true;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    if (board[i][j] == '*') {
                        draw = false;
                        break;
                    }
                }
                if (!draw) break;
            }
            if (draw) {
                game_board();
                cout << "It's a draw!" << endl;
                gameOver = true;
            }
        }
}

	 	return 0;
}
