//STONE PAPER AND SCISSORS GAME
#include <iostream>
 
// Const variables 
const char STONE = '1';
const char PAPER = '2';
const char SCISSORS = '3';
 
using namespace std;
 
char getComputerOption() {
    srand(time(0));  //for gerneating random numbers
    int num = rand() % 3 + 1;
    
    if(num==1) return '1';
    if(num==2) return '2';
    if(num==3) return '3';
}
 
char getUserOption() {
    char choice;
    cout << "STONE ,PAPER AND SCISSORS GAME!" << endl;
    cout << "Choose one from the following options"  << endl;
    cout << "(1) for stone " << endl << "(2) for paper" << endl << "(3) for scissors " << endl;
    cin >> choice;
    
    while (choice!='1' && choice!='2' && choice!='3' )
    {
        cout << "Please enter one of the following options only. " << endl;
        cout << "(1) for stone " << endl << "(2) for paper" << endl << "(3) for scissors " << endl;
        cin >> choice;
    }
 
    return choice;
}
 
void showSelectedOption(char option) 
{
    if (option == '1') cout << "stone" << endl;
    if (option == '2') cout << "Paper" << endl;
    if (option == '3') cout << "Scissors" << endl;
}
 
void chooseWinner(char urChoice, char CompChoice) {
    if (urChoice == STONE && CompChoice == PAPER) {
        cout << " Oops!... Computer Wins!."<< endl;
    }
    else if (urChoice == PAPER && CompChoice == SCISSORS) {
        cout << "Oops!... Computer Wins!."<< endl;
        
    }
    else if (urChoice == SCISSORS && CompChoice == STONE) {
        cout << "Oops...Computer Wins!."<< endl;
        
    }
    else if (urChoice == STONE && CompChoice == SCISSORS) {
        cout << "You Win! :)"<< endl;
        
    }
    else if (urChoice == PAPER && CompChoice == STONE) {
        cout << "You Win! :)"<< endl;
        
    }
    else if (urChoice == SCISSORS && CompChoice == PAPER) {
        cout << "You Win! :) "<< endl;
    }
    else{
        cout << "Tie. Play again :)" << endl;
    }
}
 
int main() {
    char urChoice; //user;s choice
    char CompChoice;//computer's choice
    
    urChoice = getUserOption();
    cout << "Your choice is: "<< endl;
    showSelectedOption(urChoice);
    
    cout << "Computer's choice is: "<< endl;
    CompChoice = getComputerOption();
    showSelectedOption(CompChoice);
    
    chooseWinner(urChoice, CompChoice);
 
    return 0;
}
