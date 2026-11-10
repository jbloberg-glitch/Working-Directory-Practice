#include <format>
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
  cout << "What file should I open? Type a name, including path if you want."
       << endl;
  cout << "Filename: ";
  string fname;
  cin >> fname;

  ifstream inputFile;
  inputFile.open(fname);

  if (!inputFile) {
    cout << format("Could not find the file \"{}\"", fname);
    return 1;
  }

  string firstLine;
  getline(inputFile, firstLine);
  cout << "The first line is:" << endl << firstLine << endl;
}

