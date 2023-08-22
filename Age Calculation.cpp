#include <iostream>
using namespace std;
int main(){

int i;

cout << "Enter your age: " << endl;
cin  >> i;

if (i>15){
    i++;
    cout << " Your new age: " << i ;
}
    else {
        cout << " Your age : " << i << endl;
    }


return 0;
}

