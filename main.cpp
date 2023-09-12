#include <string>
#include <bitset>
#include <iostream>
using namespace std;

string username;
string password;
string passverification;
string binaryinput;
int main() {
  cout << "username:";
  cin >> username;
  cout << "create a password:";
  cin >> password;
  cout << username << ", enter password";
  cin >> passverification;
  if (passverification != password) {
    cout << "system error(incorrect password) system will shut down";
    return 0;
  }
  else {
    cout << "password correct, working system";
  }
  
  while (true) {
    cout << ">";
    cin >> binaryinput;
  for (size_t i = 0; i < binaryinput.size(); ++i) {

cout << bitset<8>(binaryinput.c_str()[i]) << endl;
    }
  }
}
