#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
  int membershipLevel = -1;
  string membershipLevelRaw;
  bool notQuit = false;
  bool isValidInput = false;

  // int num = 0;
  // int year;
  // double gold = 0.01;
  // double silver = 0.02;
  // double bronze = 0.04;
  // double base = 1200;

  //Outer loop
  while (!notQuit) {
    //Banner
    isValidInput = false;
    
    cout << "        WELCOME TO RONDA'S STRIKEFORCE GYM        " << endl;
    cout << "x------------------------------------------------x" << endl;
    cout << "            Membership Fee Calculator" << endl;
    cout << "1. Gold" << endl;
    cout << "2. Silver" << endl;
    cout << "3. Bronze" << endl;
    cout << "4. Quit" << endl;
    cout << endl;

    // get raw input
    cout << "Please enter your membership level (1-3 Enter 4 to Quit)  >  ";
    cin >> membershipLevelRaw;
    cout << endl;

  // Validate membership level
    membershipLevel = stoi(membershipLevelRaw);
    if ( membershipLevel > 0 && membershipLevel < 5) {
      isValidInput = true;
    } else {
      isValidInput = false;
    }
  
    
    if (!isValidInput) {
	cout << "your membership level was invalid" << endl;
	cout << endl;
      }

  if ( membershipLevel > 0 && membershipLevel < 5)
  {
    isValidInput = true;
    membershipLevel = stoi(membershipLevelRaw);
    // compute or quit
    
    if (membershipLevel == 4)
    {
      notQuit = true;
      return 0;
    } else {
      if (isValidInput) {
	cout << "membershipLevel calc" << endl;
	cout << endl;
	//	isValidInput= false;
      }
    }
  }
  }
  
}


  
//   else
//   {
//     cout << "Invalid menu item...Please enter a valid item (1-4) > ";
//     cin >> membershipLevelRaw;
//     membershipLevel = stoi(membershipLevelRaw);
//   }
//   while (membershipLevel < 5 && membershipLevel >= 1)
//     {
//       cout << "Invalid menu item...Please enter a valid item (1-4) > ";
//       cin >> membershipLevel;
//     }
 
// }

  
