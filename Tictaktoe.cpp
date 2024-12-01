#include <iostream>
#include<ctime>

void drawboard(char board[]){
        std::cout<<"     |     |     "<<"\n";
        std::cout<<"  "<<board[0]<<"  |  "<<board[1]<<"  |   "<<board[2]<<"   "<<"\n";
        std::cout<<"_____|_____|_____"<<"\n";
        std::cout<<"     |     |     "<<"\n";
        std::cout<<"  "<<board[3]<<"  |  "<<board[4]<<"  |   "<<board[5]<<"   "<<"\n";
        std::cout<<"_____|_____|_____"<<"\n";
                std::cout<<"     |     |     "<<"\n";
        std::cout<<"  "<<board[6]<<"  |  "<<board[7]<<"  |   "<<board[8]<<"   "<<"\n";
                std::cout<<"     |     |     "<<"\n";

    }
void Player(char board[]){
    int value;
do{
std::cout<<"Enter value between [1-9]\n";
std::cin>>value;
}
while((value<1 || value>9) || board[value-1]=='O'||board[value-1]=='X');
value--;
board[value]='X';
}
void Computer(char board[]){
    int num;
    srand(time(0));
    do{
    num=rand()%9;
}
while(board[num]=='X'||board[num]=='O');
board[num]='O';
    

}
bool is_tie(char board[]){
    for(int i=0;i<9;i++){
        if(board[i]==' '){
            return false;
        }
    }
    return true;
}
bool winner(char board[]){
    if(board[0]==board[1] && board[1]==board[2] && board[0]!=' ' ){
        if(board[0]=='X'){
            std::cout<<"Player Won";
        }
        else{
            std::cout<<"Computer Won";
        }
        return true;
    }

    if(board[3]==board[4] && board[4]==board[5] && board[3]!=' ' ){
        if(board[3]=='X'){
            std::cout<<"Player Won";
        }
        else{
            std::cout<<"Computer Won";
        }
        return true;
    }

    if(board[6]==board[7] && board[7]==board[8] && board[6]!=' ' ){
        if(board[6]=='X'){
            std::cout<<"Player Won";
        }
        else{
            std::cout<<"Computer Won";
        }
        return true;
    }

    if(board[0]==board[3] && board[3]==board[6] && board[0]!=' ' ){
        if(board[0]=='X'){
            std::cout<<"Player Won";
        }
        else{
            std::cout<<"Computer Won";
        }
        return true;
    }

    if(board[1]==board[4] && board[4]==board[7] && board[1]!=' ' ){
        if(board[1]=='X'){
            std::cout<<"Player Won";
        }
        else{
            std::cout<<"Computer Won";
        }
        return true;
    }

    if(board[2]==board[5] && board[5]==board[8] && board[2]!=' ' ){
        if(board[2]=='X'){
            std::cout<<"Player Won";
        }
        else{
            std::cout<<"Computer Won";
        }
        return true;
    }

    if(board[0]==board[4] && board[4]==board[8] && board[0]!=' ' ){
        if(board[0]=='X'){
            std::cout<<"Player Won";
        }
        else{
            std::cout<<"Computer Won";
        }
        return true;
    }

    if(board[2]==board[4] && board[4]==board[6] && board[2]!=' ' ){
        if(board[2]=='X'){
            std::cout<<"Player Won";
        }
        else{
            std::cout<<"Computer Won";
        }
        return true;
    }
return false;
}
int main(){
    char board[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    bool running=true;
    
    drawboard(board);
    
    while(running){
    Player(board);
    drawboard(board);
    if(winner(board)){
        running=false;
        break;
    }
    if(is_tie(board)){
        std::cout<<"Its a Tie!!!";
        running=false;
        break;
    }
    Computer(board);
    drawboard(board);
       if(winner(board)){
        running=false;
        break;
    }
        if(is_tie(board)){
        running=false;
        break;
    }
}
return 0;

}