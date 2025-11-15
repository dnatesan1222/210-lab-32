// COMSC-210 | Lab 33 | Diksha Tara Natesan
// IDE used: Vim/Terminal

#include "Car.h"
#include <deque>
#include <iostream>
#include <array>
using namespace std;

void displayQueue(array<deque<Car>, 4> &tQ);

//displayQueue() take a deque and access all of its elements to neatly print the queue
//arguments: deque<Car> &tQ so the funstion knows what deque it is displaying
void displayQueue(deque<Car> &tQ);

int main(){
	srand(time(0));
	array<deque<Car>, 4> plaza;
	for (int i = 0; i < 4; i++){
		Car c1;
		Car c2;
		plaza[i].push_back(c1);
		plaza[i].push_back(c2);
	}
	//Milestone 2 tests
	cout << "Initial queues:" << endl;
	displayQueue(plaza);
	cout << "Tests:\nFirst car in lane 1 queue: ";
	plaza[0].front().print();
	cout << "Last car in lane 4 queue: ";
        plaza[3].back().print();
	cout << "Removing Lane 3's first car:" << endl;
	Car temp = plaza[2].front();
	plaza[2].pop_front();
	displayQueue(plaza[2]);
	cout << "Adding Lane 3's first car back:" << endl;
	plaza[2].push_front(temp);
	displayQueue(plaza[2]);
/*
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
*/	return 1;
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
}
void displayQueue(array<deque<Car>, 4> &tQ){
        //this will not output "Queue:" or "Initial queue:" that will happen before the function is called
        if (tQ.size() == 0){
                cout << "\tEmpty" << endl;
                return;
        }
        for (int i = 0; i < 4; i++){
		cout << "Lane " << (i+1) << " Queue:\n";
		displayQueue(tQ[i]);
        }
        cout << endl;
}

