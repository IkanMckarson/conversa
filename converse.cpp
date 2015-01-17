/* algorithm to talk back */
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
  
  string input = "";
  
  //prompt the user with a greeting message 
  cout<<" Hello , how are you doing ? ";
  
  //get the users feedback 
  getline(cin, input);
  
 // make the decision 
  if ( input == "awesome" || input == "feeling great" ) /* -> this kind of decision doesnt take care of the whitespaces */
    cout << "great , did you just have morning coffee \n ";
   cin.clear();
  
  
    getline(cin, input);
  if ( input == "yeah" || input == "yes")
    cout << "Me too, had already had some , it was pretty great ,, the coffee beans had been ground so well "<<endl;
  else 
    cout << " Can we make some ?  some hamburger is needed too ? "  <<endl;
  cin.clear();
}
/* what the program should do 
 * determine time of day --------- time function 
 * generate a greeting message accordingly -------- algorithm */