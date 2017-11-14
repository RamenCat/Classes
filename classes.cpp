#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>
#include "music.h"
using namespace std;

int main() {
  vector<media*> stuff;
  music* m = new music();
  stuff.push_back(m);
  cout << "Type =" << stuff[0]->gettype() << endl;
  char input[80];
  char mediachoice[10];
  bool running = true;
  while(running == true){
    cout << "What would you like to do?" << endl;
    cin.getline(input,80);
    if (strcmp (input, "ADD") == 0){
      cout << "What kind of media do you want to add?" << endl;
      cin.getline(mediachoice,80);
      if (strcmp (mediachoice, "VIDEO GAME") == 0){
      }
      if (strcmp (mediachoice, "MUSIC") == 0){
	
      }
      if (strcmp (mediachoice, "MOVIE") == 0){
      }
    }
    else if (strcmp (input, "SEARCH") == 0){
    }
    else if (strcmp (input, "DELETE") == 0){
    }
    else if (strcmp (input, "QUIT") == 0){
      running = false;
    }
    else {
      cout << "That is not a valid input!" << endl;
    }
  }
}
