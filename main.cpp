// COMSC-210 | Lab 33 | Diksha Tara Natesan
// IDE used: Vim/Terminal

#include "Car.h"
#include <deque>
#include <iostream>
using namespace std;

//displayQueue() take a deque and access all of its elements to neatly print the queue
//arguments: deque<Car> &tQ so the funstion knows what deque it is displaying
void displayQueue(deque<Car> &tQ);

int main(){
	srand(time(0));
	deque<Car> tollQueue;
	Car c1;
	Car c2;
	tollQueue.push_back(c1);
	tollQueue.push_back(c2);
	cout << "Initial queue:" << endl;
	displayQueue(tollQueue);

	int prob;
	int time = 1;
	//start loop here for simulation
	while (tollQueue.size() != 0){
		cout << "Time: " << time << " Operation: ";
		prob = rand() % 100 + 1;  	//returns random number 1-100 for probability functions
		if (prob < 56){			//55% probability
			cout << "Car paid: ";
			(tollQueue.front()).print();
			tollQueue.pop_front();
		}else{				//45% probability
                        Car temp;
			tollQueue.push_back(temp);
                        cout << "Joined lane: ";
			temp.print();
		}
		cout << "Queue: " << endl;
		displayQueue(tollQueue);
		time += 1;
	}
	cout << endl;
	return 1;
}

void displayQueue(deque<Car> &tQ){
	//this will not output "Queue:" or "Initial queue:" that will happen before the function is called
	if (tQ.size() == 0){
		cout << "\tEmpty" << endl;
		return;
	}
	for (int i = 0; i < tQ.size(); i++){
		Car temp = tQ[i]; // Access the specific elements to orint them
		cout << '\t';
		temp.print();
 	}
	cout << endl;
}

