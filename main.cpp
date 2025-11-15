// COMSC-210 | Lab 32 | Diksha Tara Natesan
// IDE used: Vim/Terminal

#include "Car.h"
#include <deque>
#include <iostream>
#include <string>
using namespace std;

void displayQueue(deque<Car> &tQ);

int main(){
	deque<Car> tollQueue;
	Car c1;
	Car c2;
	tollQueue.push_back(c1);
	tollQueue.push_back(c2);
	cout << "Initial queue:" << endl;
	displayQueue(tollQueue);

}

void displayQueue(deque<Car> &tQ){
	//this will not output "Queue:" or "Initial queue:" that will happen before the function is called
	for (int i = 0; i < tQ.size(); i++){
		Car temp = tQ[i]; // Access the specific elements to orint them
		cout << '\t';
		temp.print();
 	}
	cout << endl;
}

