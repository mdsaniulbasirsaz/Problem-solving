#include <iostream>
#include <fstream>
using namespace std;

void do_something_with(char ch) {}

int main () {
  ifstream file;
  file.exceptions ( ifstream::badbit );
  try {
    file.open ("A.txt");
    char ch;
    while (file.get(ch)) do_something_with(ch);
  }
  catch (const ifstream::failure& e) {
    cout << "Exception opening/reading file";
  }

  file.close();

  return 0;
}
