#include <iostream>
using namespace std;

int main(){
    string word="lynx",gap="_ _ _ _",used="",temp=" ";
    char input;
    int mistake=0,wrong=0,c1=0;
    cout << "Hangman Game" << endl;
    while(mistake<5){
        cout << gap << endl;
        cout << "Used: " << used << endl;
        cin >> input;
        temp[0]=input;
        if(used.find(temp)==-1){
            used+=temp + " ";
        }else{
            cout << "Warning: Used letter!" << endl;
            continue;
        }
        for(int c=0;c<word.length();c++){
            if(wrong==2){
                break;
            }
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
