#include <iostream>
using namespace std;

int main(){
  int choice1; 
  int choice2;
  int choice3;

  cout << "And the story begins. A long time ago there was a girl who wanted to eat: \n Please pick one: \n 1) Cookies \n 2) Bagels";
  cin >> choice1;

while (choice1 < 1 || choice1 > 2) {
    cout << "Invalid choice. Please pick 1 or 2: ";
    cin >> choice1;
}
    if (choice1 == 1){
  cout << "She begins to make her way to a cabin! \n";
  } else if (choice1 == 2){
    cout << "She heads to the deli \n";
  }

cout << "On her way she suddenly stumbles upon a little kitten! It is a: \n Please pick one: \n 1) Grey kitten \n 2) White kitten \n";
cin >> choice2;

while (choice2 < 1 || choice2 > 2){
  cout << "Not a choice, please try again.";
  cin >> choice2;
}
  if (choice2 == 1){
    cout << "Grey kitten \n";
  } else {
    cout << "white kitten \n";
  }

cout << "She takes the kitten and makes her way home and names it \n Please pick one: \n 1) Fred \n 2) Carly";
cin >> choice3;

while (choice3 < 1 || choice3 > 2){
  cout << "Invalid answer. Please try again";
  cin >> choice3;
} 
if (choice3 == 1){
  cout << "What a handsome man! \n";
} else {
  cout << "What a beautiful lady! \n";
}

cout << "Now it is time for our little adventures to go to sleep "; 
}