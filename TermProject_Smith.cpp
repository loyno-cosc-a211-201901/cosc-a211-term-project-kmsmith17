//Program Name: Mad Libs for College Students
//Purpose: This program will allow the user to choose a mad lib to fill out and enter his own input
//Author: Katy Smith
//Date Last Modified: 4/30/19

#include <iostream>
using namespace std;

int main(){

  int storyChoice; //To store the user's choice of story

  while (storyChoice != 5){
    // Menu for the user to select a story
    cout << "Mad Lib Story Menu" << endl;
    cout << "------------------------" << endl;
    cout << "1. Cutting Class" << endl;
    cout << "2. Haunted Dorm" << endl;
    cout << "3. Night at the Boot" << endl;
    cout << "4. Traveling Home" << endl;
    cout << "5. Quit Program" << endl;
    cout << "------------------------" << endl;
    cout << "Enter the number of desired story (1-4): ";
    cin >> storyChoice;

  if (storyChoice == 1){
    //Variables to store the user inputs
    string name1;
    string noun1;
    int number1;
    string verb1;
    string adjective1;
    string verb2;

    //To collect user inputs
    cout << "Enter a girl's name: ";
    cin >> name1;
    cout << "Enter a noun: ";
    cin >> noun1;
    cout << "Enter a number: ";
    cin >> number1;
    cout << "Enter an verb ending in -ing: ";
    cin >> verb1;
    cout << "Enter an adjective: ";
    cin >> adjective1;
    cout << "Enter a verb in past tense: ";
    cin >> verb2;

    //To insert user inputs into the story
    cout << "One day on her way to Programming class " << name1 << " realized that she had forgotten her " <<
    noun1 << " at home and had to go back to get it, even though she was already " << number1 << " minutes late to class. After " <<
    verb1 << " home she decided she was too " << adjective1 << " to go to class, so she " << verb2 << " instead." << endl;

    cout << "\n";

  }
  else if (storyChoice == 2){
    //Variables to store the user inputs
    string name2;
    int number2;
    string dormName1;
    string food1;
    string noun2;
    string verb3;
    string emotion1;
    string city1;

    //To collect user inputs
    cout << "Enter a boy's name: ";
    cin >> name2;
    cout << "Enter a number: ";
    cin >> number2;
    cout << "Enter the name of a Loyola dorm: ";
    cin >> dormName1;
    cout << "Enter a food: ";
    cin >> food1;
    cout << "Enter a noun: ";
    cin >> noun2;
    cout << "Enter a verb ending in -ing: ";
    cin >> verb3;
    cout << "Enter an emotion: ";
    cin >> emotion1;
    cout << "Enter a city: ";
    cin >> city1;

    //To insert user inputs into the story
    cout << "Today is " << name2 << "'s first day attending Loyola University and he just finished moving into room number " <<
    number2 << " in " << dormName1 << " Hall. After eating " << food1 << " in the OR, he went back to room " << number2 <<
    " and found that his " << noun2 << " had been knocked over. He did some " << verb3 << " and found out that his room is haunted. He become so " <<
    emotion1 << " that he dropped out and moved back home to " << city1 << "." << endl;

    cout << "\n";

  }
  else if (storyChoice == 3){
    //Variables to store the user inputs
    string day1;
    string drink1;
    string name3;
    string noun3;
    string emotion2;
    string verb4;
    int number3;
    string location1;

    //To collect user inputs
    cout << "Enter a day of the week: ";
    cin >> day1;
    cout << "Enter a beverage: ";
    cin >> drink1;
    cout << "Enter a boy's name: ";
    cin >> name3;
    cout << "Enter a noun: ";
    cin >> noun3;
    cout << "Enter an emotion: ";
    cin >> emotion2;
    cout << "Enter a verb ending in -ing: ";
    cin >> verb4;
    cout << "Enter a number: ";
    cin >> number3;
    cout << "Enter a place in NOLA: ";
    cin >> location1;

    //To insert user inputs into the story
    cout << "One " << day1 << " Sarah and her friends wanted to go to the Boot for a nice cold " << drink1 <<
    ". However, Sarah’s friend, " << name3 << ", forgot his " << noun3 << " at home and couldn’t get in. " <<
    name3 << " got so " << emotion2 << " that he started " << verb4 << " with the bouncer.  After " << number3 <<
    " minutes they stopped and Sarah and her friends had to go to " << location1 << " to get their " << drink1 << "." << endl;

    cout << "\n" << endl;
  }
  else if (storyChoice == 4){
    //Variables to store the user inputs
    string month1;
    string verb5;
    string holiday1;
    int number4;
    string clothingItem1;
    string verb6;
    string noun4;

    //To collect user inputs
    cout << "Enter a month: ";
    cin >> month1;
    cout << "Enter a verb ending in -ing: ";
    cin >> verb5;
    cout << "Enter a holiday: ";
    cin >> holiday1;
    cout << "Enter a number: ";
    cin >> number4;
    cout << "Enter an item of clothing: ";
    cin >> clothingItem1;
    cout << "Enter a verb: ";
    cin >> verb6;
    cout << "Enter a noun: ";
    cin >> noun4;

    //To insert user inputs into the story
    cout << "On " << month1 << " 15th, Sarah was " << verb5 << " to go home for " << holiday1 << ". She got to the airport " << number4 <<
    " minutes before her flight boarded. She got to security and took her " << clothingItem1 << " off. The TSA workers decided to " << verb6 <<
    " her bag and found an illegal " << noun4 << " inside. They had to confiscate the " << noun4 << " and kick her out of the airport and she missed her flight home." << endl;

    cout << "\n" << endl;
  }
  else if (storyChoice == 5){
  }
  else {
    cout << "Please enter a valid menu choice" << endl;

    cout << "\n" << endl;
  }
  }

return 0;
}
