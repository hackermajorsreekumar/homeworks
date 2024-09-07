#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <map>
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;
using std::array;
using std::map;


int main() {
  string name{},adjective_one,adjective_two,season;
  
  vector<std::string> adjectives{};
  array ending{"eats UB for breakfast","finds errors quicker than the compiler","is not afraid of C++ error messages"};
  map <std::string,std::string> role {{"spring","STL guru"},{"summer","C++ expert"},{"autumn","coding beast"},{"winter","software design hero"}};
  cout<<"Welcome to the fortune teller program!\n"<<endl;
  cout<<"Please enter your name \n"<< endl;
  cin >>name;
  cout<<"Please enter the time of year when you were born: \n(pick from 'spring', 'summer', 'autumn', 'winter')\n"<<endl;
  cin>>season;
  cout<<"please enter an adjective\n";
  cin>>adjective_one;
  adjectives.emplace_back(adjective_one);
  cout<<"Please enter another adjective:\n"<<endl;
  cin>>adjective_two;
  adjectives.emplace_back(adjective_two);
  
  cout<<"Here is your description:\n"<<endl;
  cout << name <<", the "<< adjectives[name.size() % adjectives.size()]<<" "<< role.at(season) <<" that " << ending[adjective_two.size() % ending.size()] <<endl;
  return 0;
}