#include <iostream>
#include <random>

using std::cout;
using std::endl;
using std::cin;



int main() {
 
  
  int smallest_number,largest_number,guess{};
  int count{1},random_number{0};
  
 
 
  cout<<"Welcome to the GUESSING GAME!\nI will generate a number and you will guess it!"<<endl;
  cout<<"Please provide the smallest number:"<< endl;
  cin >>smallest_number;
  cout<<"Please provide the largest number:"<< endl;
  cin >>largest_number;
  std::random_device random_device;
  std::mt19937 random_engine{random_device()};
  std::uniform_int_distribution distribution{smallest_number,largest_number};
  random_number = distribution(random_engine);
  
  //cout<<random_number<<endl;
  
  cout<<"I've generated a number. Try to guess it!"<<endl;
  cout<<"Please provide the next guess: ";
  cin>>guess;
  
  while (guess != random_number) {
      cout<<"Please provide the next guess:\t";
      cin>>guess;
      if (guess > random_number) {
        cout<<"Your number is too big. Try again!";
        }
      else  {
        cout<<"Your number is too small. Try again!";
        }
        
     count+=1;
     cout<<endl;
  }
  
  
  
 
 cout<<"You've done it! You guessed the number "<<random_number<<" in "<<count<<" guesses!"<<endl;
 
  return 0;
}