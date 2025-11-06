#include <iostream>
using namespace std;

int main() {

  // The magic starts here
  
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;

  int answer1;
  int answer2;
  int answer3;
  int answer4;
  string house;
  int max = 0;

  cout << "The Sorting Hat Quiz!\n";

  cout << "Q1) When I'm dead, I want people to remember me as: \n\n";
  cout << "1) The Good \n";
  cout << "2) The Great \n";
  cout << "3) The Wise \n";
  cout << "4) The Bold \n";
  cin >> answer1;

  if (answer1 == 1){
    hufflepuff++;
  } else if (answer1 == 2){
    slytherin++;
  } else if (answer1 == 3){
    ravenclaw++;
  } else if (answer1 == 4){
    gryffindor++;
  } else {
    cout << "invalid input \n ";
  }

  cout << "Q2) Dusk or Dawn? \n";
  cout << "1) Dawn \n 2) Dusk \n";
  cin >> answer2;

  if (answer2 == 1){
    gryffindor++;
    ravenclaw++;
  } else if (answer2 == 2){
    hufflepuff++;
    slytherin++;
  } else {
    cout << "Invalid input \n";
  }

  cout << "Q3) What kind or instrument most pleases your ear? \n";
  cout << "1) The violin \n 2) The Trumpet \n 3) The piano \n 4) The drum \n";
  cin >> answer3;

  if (answer3 == 1){
    slytherin++;
  } else if (answer3 == 2){
    hufflepuff++;
  } else if (answer3 == 3){
    ravenclaw++;
  } else if (answer3 == 4){
    gryffindor++;
  } else {
    cout << "Ivalid input \n";
  }

  cout << "Q4) What road tempts you most? \n";
  cout << "1) The wide, sunny grassy lane \n 2) The narrow, dark, lantern-lit alley \n 3) The twisting, leaf-strewn path through woods \n 4) The cobbled street lined (ancient buildings) \n";
  cin >> answer4;

  if (answer4 == 1){
    hufflepuff++;
  } else if (answer4 == 2){
    slytherin++;
  } else if (answer4 == 3){
    gryffindor++;
  } else if (answer4 == 4){
    ravenclaw++;
  } else {
    cout << "Invalid output";
  }

  if (gryffindor > max) {
  max = gryffindor;
  house = "Gryffindor";
}

if (hufflepuff > max) {
  max = hufflepuff;
  house = "Hufflepuff";
}

if (ravenclaw > max) {
  max = ravenclaw;
  house = "Ravenclaw";
}

if (slytherin > max) {
  max = slytherin;
  house = "Slytherin";
}

cout << house << "!\n";

}
