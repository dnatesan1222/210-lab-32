// COMSC-210 | Lab 33 | Diksha Tara Natesan
// IDE used: Vim/Terminal

#include "Car.h"
#include <deque>
#include <iostream>
#include <array>
using namespace std;

//displayQueue() takes an array of four deques and outputs the deque elements as lanes by calling the other displayQueue function
//arguments: <deque<Car>, 4> &tQ so the function knows what deques it is displaying
void displayQueue(array<deque<Car>, 4> &tQ);

//displayQueue() takes an deque and access all of its elements to neatly print the queue
//arguments: deque<Car> &tQ so the function knows what deque it is displaying
void displayQueue(deque<Car> &tQ);

int main(){
	srand(time(0));
	array<deque<Car>, 4> plaza;
	/*cout << "Empty lanes:\n";	//part of milestone 3 testing
	  displayQueue(plaza);*/
	for (int i = 0; i < 4; i++){
		Car c1;
		Car c2;
		plaza[i].push_back(c1);
		plaza[i].push_back(c2);
		/*//Milestone 3 tests
		  cout << "Lane " << (i+1) << " populated\n";
		  displayQueue(plaza);*/
	}

	cout << "Initial queues:" << endl;
	displayQueue(plaza);

	/*//Milestone 2 tests
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
	  displayQueue(plaza[2]);*/

	int prob;
	//start loop here for simulation
	for (int i = 1; i < 21; i++){
		cout << "Time: " << i << endl;
		for (int j = 0; j < 4; j++){
			cout << "Lane " << (j+1);
			prob = rand() % 100 + 1;  	//returns random number 1-100 for probability functions
			if (prob < 51){			//50% probability
				if (plaza[j].size() != 0){
					cout << " Paid: ";
					(plaza[j].front()).print();
					plaza[j].pop_front();
				}
				cout << " Lane is empty. No car joined or paid." << endl;
			}else{				//50% probability
				Car temp;
				plaza[j].push_back(temp);
				cout << " Joined: ";
				temp.print();
			}
		}
		displayQueue(plaza);
	}
	cout << endl;
	return 0;
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

