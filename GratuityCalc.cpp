#include <iostream>
#include<iomanip>
using namespace std;
 
int main() {
 
 float gtip= 0.22;
 float btip = 0.07;
 float mtip= 0.15;
 float tot;
 
 cout << "Gratuity Calculator" << endl;
 cout << "Please input the amount of the bill, and press enter." << endl;
 cin >> tot;
 cout << "___________________________________________"<< endl;
 cout << "|                                         |"<< endl;
 cout << "| Gratuity                                |" << endl;
 float gtot = (tot*gtip) + tot;
 cout << "|"<<setw(25) << "Good Tip Total: $" << fixed << setprecision(2) << setw(10) << gtot << "      |"<<endl;
 float mtot= (tot*mtip) + tot;
 cout << "|"<< setw(25) << "Standard Tip Total: $" << fixed << setprecision(2) << setw(10) << mtot << "      |"<< endl;
 float btot = (tot*btip) + tot;
 cout << "|"<< setw(25) << "Bad Tip Total: $" << fixed << setprecision(2) << setw(10) << btot << "      |"<< endl;
 cout<< "|                                         |"<< endl;
 cout << "|_________________________________________|"<< endl;
 return 0;
}
