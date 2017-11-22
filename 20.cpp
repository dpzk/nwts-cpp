#include <iostream>
using namespace std;

int main(){
    string word="lynx",gap="_ _ _ _";
    char input;
    cout << "Hangman Game" << endl;
    int mistake=0,wrong=0,c1=0;
    while(mistake<5){
        cout << gap << endl;
        cin >> input;
        for(int c=0;c<word.length();c++){
            if(word[c]==input){
                gap[2*c]=input;
                wrong=1;
                c1++;
            }
        }
        if(wrong==0){
            mistake++;
            cout << "You made " << mistake << " mistakes." << endl;
        }else if(wrong==1){
            cout << "Correct!" << endl;
        }
        if(c1==word.length()){
            cout << gap << endl;
            cout << "You win!" << endl;
            break;
        }
        wrong=0;
    }
    if(mistake==5){
        cout << gap << endl;
        cout << "You lost." << endl << "Answer:" << word << endl;
    }
}
