//Authors: 
#include <iostream>
#include <string>
int main()
{
std::string noun;
std::string item;
  double decimal;
  int number;
  int number2;
std::cout<<"Please enter name"<<std::endl;
std::cin>>noun;
std::cout<<"Please enter decimal"<<std::endl;
std::cin>>decimal;
std::cout<<"Please enter whole number"<<std::endl;
std::cin>>number;
std::cout<<"Please enter an item"<<std::endl;
std::cin>>item;
std::cout<<"Please enter another whole number"<<std::endl;
std::cin>>number2;
std::cout<<"Once upon a time, there was a human named " <<noun<< "."<<std::endl;
std::cout<<"The human had to go to the store in " <<decimal<< " minutes and bought " <<number<<" "<<item<<"."<<std::endl;
std::cout<<"Then, "<<noun<< "came home in "<<number2<< " minutes."<<std::endl; 
  return 0;
}
