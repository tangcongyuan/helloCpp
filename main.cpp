#include <iostream>
#include <systemc>
#include <cassert>
#include "Initiator.h"

using namespace std;

int funWithRef(int &num);
int funWithPointer(int *pointer);

int main(int argc, char** argv) {
	// cout << "Hello from Eric." << endl;

	assert(1 != 0);
	Initiator *init = new Initiator;
	cout << "init->toCharArray(): " << init->toCharArray() << endl;

	Initiator init2;
	cout << "init2.toCharArray(): " << init2.toCharArray() << endl;

	for(int i = 0; i < argc; i++) {
		cout << i << " : " << *(argv + i) << endl;
	}

	// uint8_t array[100];
	// cout << "Size of array[0] is " << sizeof(array[0]) << endl;
	// cout << "array[99]: " << *(array + 99) << endl;
	//
	// uint64_t i = 0xbeef;
	// cout << "i: " << i << endl;

	int num = 6;
	int *pointer = &num;
	cout << "funWithRef(&num): " << funWithRef(num) << endl;
	cout << "funWithPointer(*pointer): " << funWithPointer(pointer) << endl;
	cout << "After craziness num: " << num << endl;
	cout << "After craziness *pointer: " << *pointer << endl;

	return 0;
}

int sc_main(int argc, char* argv[]) {
	cout << "Inside sc_main()" << endl;
	return 0;
}

int funWithRef(int &num) {
	num += 10;
	return num;
}

int funWithPointer(int *pointer) {
	int num = 0;
	pointer = &num;
	return *pointer;
}
