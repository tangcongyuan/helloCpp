#include <iostream>

using namespace std;

class Initiator {
public:
  Initiator() {
    cout << "Initiator()" << endl;
  }

  ~Initiator() {
    cout << "~Initiator()" << endl;
  }

  const char* toCharArray();
};
