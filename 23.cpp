#include <fstream>
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main(){
    int mistake=0,wrong=0,c1=0,c2=0,tr=0;
    while(1){
    srand(time(NULL));
    ifstream fin ("dict.txt");
    string words[30000],word,gap,used="",temp=" ";
    char input;
    for(int c=0; ;c++){
        fin >> words[c];
        c2++;
        if (fin.eof()) break;
    }
    word=words[rand()%c2];
    for(int c=0;c<word.length();c++){
        gap+="_ ";
    }
    cout << "Hangman Game" << endl;
    cin >> tr;
    while(mistake<tr){
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
        if(mistake== 0 ){
            cout << " /-----" << endl;
            cout << " |     " << endl;
            cout << " |     " << endl;
            cout << " |     " << endl;
            cout << "_______" << endl;
        }
        if(mistake== 1 ){
            cout << " /-----" << endl;
            cout << " |   O " << endl;
            cout << " |     " << endl;
            cout << " |     " << endl;
            cout << "_______" << endl;
        }
        if(mistake== 2 ){
            cout << " /-----" << endl;
            cout << " |   O " << endl;
            cout << " |   | " << endl;
            cout << " |     " << endl;
            cout << "_______" << endl;
        }
        if(mistake== 3 ){
            cout << " /-----" << endl;
            cout << " |   O " << endl;
            cout << " |  /|\\" << endl;
            cout << " |     " << endl;
            cout << "_______" << endl;
        }
        if(mistake== 4 ){
            cout << " /-----" << endl;
            cout << " |   O " << endl;
            cout << " |  /|\\" << endl;
            cout << " |  /  " << endl;
            cout << "_______" << endl;
        }
        if(mistake== 4 ){
            cout << " /-----" << endl;
            cout << " |   O " << endl;
            cout << " |  /|\\" << endl;
            cout << " |  / \\" << endl;
            cout << "_______" << endl;
        }
        if(c1==word.length()){
            cout << gap << endl;
            cout << "You win!" << endl;
            break;
        }
        wrong=0;
    }
    if(mistake==tr){
        cout << gap << endl;
        cout << "You lost." << endl << "Answer:" << word << endl;
    }
    }
}
