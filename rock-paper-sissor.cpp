#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
  
  srand (time(NULL));
  
int computer = rand() % 3 + 1;
int user = 0;

cout << "====================\n";
cout << "rock paper scissors!\n";
cout << "====================\n";

cout << "1) ✊\n";
cout << "2) ✋\n";
cout << "3) ✌️\n";

cout << "shoot! \n";
cin >> user;

if (user == 1){
  if (computer == 1){
    cout << "Its a tie";
  } else if (computer == 2){
    cout << "Computer wins";
  } else {
    cout << "You win!";
  }

} else if (user == 2){
    if (computer == 1){
    cout << "You win";
  } else if (computer == 2){
    cout << "Its a tie";
  } else {
    cout << "Computer wins";
  }
  
} else if (user == 3){
    if (computer == 1){
    cout << "Computer wins";
  } else if (computer == 2){
    cout << "You win";
  } else {
    cout << "Its a tie";
  }
} else {
  cout << "Please try again";
}
}
