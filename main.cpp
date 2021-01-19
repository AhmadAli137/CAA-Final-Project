#include <iostream>
#include "ELEC2110CAA.h"
using namespace std;

int main() {

  int choice;
  cout<<"Welcome to the Matrix Calculator!"<<endl;
  cout<<"======================================"<<endl;
  cout<<"1.) Addition\n2.) Subtraction\n3.) Multiplication\n4.) Solution\n5.) Inversion"<<endl;
  cout<<"Type a number to choose operation: ";
  cin>>choice;
  cout<<"======================================"<<endl<<endl;

  
  
  if (choice == 1){
    Addition(choice);
  }
  else if (choice ==2){
    Subtraction(choice);
  }
  else if (choice ==3){
    Multiplication(choice);
  }
  else if (choice ==4){
    Solution(choice);
  }
  else if (choice ==5){
    Inverse(choice);
  }
  else{
    cout<<"Error: You have entered the wrong number or an invalid input"<<endl;
  }

}






