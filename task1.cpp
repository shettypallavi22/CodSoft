#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int random;
    int guess=0;
   const int allowedMoves=10;
    int attempts=0;
    srand(time(0));
    random=(rand() % 150)+1;
    
    cout<<" Welcome to the Number guessing game"<<endl;
    cout<<"Guess a number between 1-150"<<endl;
     while (attempts<allowedMoves)
    {
        cout<<"\nEnter the guessed number:";
        cin>>guess;
        attempts++;
        if(guess==random)
        {
            cout<<"\n The correct number is:"<<random<<endl;
            cout<<"\nYay!You guessed the correct number in "<<attempts<<"\tattempts"<<endl;
            char playagain;
            cout<<"Do you want to continue(y/n):";
            cin>>playagain;
            if(playagain=='y'|| playagain=='Y')
            {
                random=rand() % 150+1;
                attempts=0;

            }
            else{
            
                break;
                 }
        }
            else if(guess<random){
                cout<<"Too low"<<endl;

            }
            else{
                cout<<"Too high"<<endl;
            }
        cout<<"Attempts remaining:"<<allowedMoves-attempts<<endl;
        }
        if(attempts==allowedMoves)
        {
            cout<<"Sorry! You have run out of attempts.The correct number was "<<random<<"."<<endl;
        }
        return 0;
        }
        
       