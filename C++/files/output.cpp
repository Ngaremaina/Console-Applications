#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  ofstream outFile;
  outFile.open("myfile.txt");
  string quit = "n";
  string line;
  while (quit != "y") {
    cout << "Enter a line of text: ";
    getline(cin, line);
    outFile << line << endl;
    cout << "Stop entering text (y/n)? ";
    getline(cin, quit);
  }
  outFile.close();
  return 0;
}
