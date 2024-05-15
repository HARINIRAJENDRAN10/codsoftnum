#include <iostream>
#include<ctime>
using namespace std;
int main() {
    int guessnum,m;
    srand(time(0));
    int chances=10;
    int rnum=rand()%100+1;
    cout<<"WELCOME YOU TO NUMBER GUESSING GAME"<<endl;
    cout<<"GUESS A NUMBER BETWEEN 1TO 100"<<endl;
    cout<<"YOU ARE GIVEN WITH 10 CHANCES"<<endl;
    do
    {
        cout<<"Enter guessing number:";
        cin>>guessnum;
        chances--;
        if(guessnum>rnum)
        {
            cout<<"YOUR GUESS IS HIGH...TRY AGAIN!!"<<endl;
            
        }
        else if(guessnum<rnum)
        {
            cout<<"YOUR GUESS IS LOW... TRY AGAIN!!"<<endl;
        }
        else if(guessnum==rnum)
        {
            cout<<"CONGRATS!! YOU GUESSED THE NUMBER CORRECTLY"<<endl;
        }
        else
        {
            cout<<"SORRY YOU FAILED"<<endl;
        }
        cout<<"If you want to continue game press 1"<<endl;
        cin>>m; 
    }while(m==1);
    return 0;
}