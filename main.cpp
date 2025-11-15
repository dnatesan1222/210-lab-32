// COMSC-210 | Lab 32 | Diksha Tara Natesan
// IDE used: Vim/Terminal

#include "Car.h"
#include <deque>
#include <iostream>
using namespace std;

//displayQueue() take a deque and access all of its elements to neatly print the queue
//arguments: deque<Car> &tQ so the funstion knows what deque it is displaying
void displayQueue(deque<Car> &tQ);

int main(){
	deque<Car> tollQueue;
	Car c1;
	Car c2;
	tollQueue.push_back(c1);
	tollQueue.push_back(c2);
	cout << "Initial queue:" << endl;
	displayQueue(tollQueue);
	//start loop here for simulation
	while (tollQueue.size() != 0){
	int prob = rand() % 100 + 1;  	//returns random number 1-100 for probability functions
	}
	


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

