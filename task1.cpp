/*Create a program that generates a random number and asks the
user to guess it. Provide feedback on whether the guess is too
high or too low until the user guesses the correct number.*/


#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int iNo=0,guess=0,attempt=0;
    srand(time(0));
    iNo=rand()%100;
    cout<<iNo<<endl;
    cout<<"*** Guess Number Game ***\n"<<endl;
    do
    {
        cout<<"Enter the guess between 1 to 100 : ";
        cin>>guess;
        attempt++;

        if(guess > iNo)
        {
            cout<<"Too High!"<<endl;
        }
        else if(guess < iNo)
        {
            cout<<"Too Low!"<<endl;
        }
        else
        cout<<"\n Correct ! you take "<<attempt<<" attempts !"<<endl;
        
    } while (guess!=iNo);

    return 0;
    
}