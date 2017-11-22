#include <iostream>
using namespace std;

int main(){
    int player=1,left,first=1,rmove=1;
    cout << "Matchstick Game" << endl;
    cout << "How many matchsticks do you want?";
    cin >> left;
    cout << endl;
    cout << "Game start." << endl << "Player1 go first."<<endl;
    while(left>0){
        if (player==1){
            cout << "Player1:";
            cin >> rmove;
            if (rmove>=0&&rmove <=3){
                 if (left-rmove<0){
                    cout << "Warning: Please input a smaller number." << endl;
                    player=1;
                 }else{
                    left=left-rmove;
                    player=2;
                    cout << "There are " << left << " left." << endl;
                 }
            }else{
                cout << "Warning: Please input number 1,2 or 3." << endl;
                player=1;
            }
        }else if(player=2){
            cout << "Player2:";
            cin >> rmove;
            if (rmove>=0&&rmove <=3){
                 if (left-rmove<0){
                    cout << "Warning: Please input a smaller number." << endl;
                    player=2;
                 }else{
                    left=left-rmove;
                    player=1;
                    cout << "There are " << left << " left." << endl;
                 }
            }else{
                cout << "Warning: Please input number 1,2 or 3." << endl;
                player=2;
            }
        }
    }
    if(player==2){
        cout << "Player1 WIN"<<endl;
    }else{
        cout << "Player2 WIN"<<endl;
    }
}
