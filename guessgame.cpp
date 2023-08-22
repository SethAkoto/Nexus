#include <iostream>

using namespace std;

int main()
{
    int guess;

    cout << " Guess a number: " << endl;
    cin  >> guess;

    if(guess > 0 && guess <15){
        cout << " Number is a failure,try again " << endl;
    }

    else if(guess >15 && guess <31){
        cout << " Your guess is correct." << endl;
    }

    else{
        cout << " Your guess is invalid , try again " << endl;
    }
    return 0;
}
