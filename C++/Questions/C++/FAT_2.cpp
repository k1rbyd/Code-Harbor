#include <iostream>
#include <string>

using namespace std;

class Train {
public:
  int trainNumber;
  string trainName;
  string sourceStation;
  string destinationStation;
  int seatCapacity;
  int bookedSeats;

  void InputDetails() {
    cout << "Enter train number: ";
    cin >> trainNumber;

    cout << "Enter train name: ";
    cin >> trainName;

    cout << "Enter source station: ";
    cin >> sourceStation;

    cout << "Enter destination station: ";
    cin >> destinationStation;

    cout << "Enter seat capacity: ";
    cin >> seatCapacity;
  }

  void DisplayDetails() {
    cout << "Train Number: " << trainNumber << endl;
    cout << "Train Name: " << trainName << endl;
    cout << "Source Station: " << sourceStation << endl;
    cout << "Destination Station: " << destinationStation << endl;
    cout << "Seat Capacity: " << seatCapacity << endl;
    cout << "Booked Seats: " << bookedSeats << endl;
  }

  void BookSeat() {
    if (bookedSeats < seatCapacity) {
      bookedSeats++;
    } else {
      cout << "Sorry, the train is full." << endl;
    }
  }

  void CancelSeat() {
    if (bookedSeats > 0) {
      bookedSeats--;
    } else {
      cout << "Sorry, there are no seats to cancel." << endl;
    }
  }
};

class TrainSystem {
public:
  Train* trains;
  int totalTrains;

  TrainSystem() {
    trains = new Train[10];
    totalTrains = 0;
  }

  void AddTrain() {
    trains[totalTrains].InputDetails();
    totalTrains++;
  }

  void DisplayAllTrains() {
    for (int i = 0; i < totalTrains; i++) {
      trains[i].DisplayDetails();
    }
  }

  void BookSeat(int trainNumber) {
    for (int i = 0; i < totalTrains; i++) {
      if (trains[i].trainNumber == trainNumber) {
        trains[i].BookSeat();
      }
    }
  }

  void CancelSeat(int trainNumber) {
    for (int i = 0; i < totalTrains; i++) {
      if (trains[i].trainNumber == trainNumber) {
        trains[i].CancelSeat();
      }
    }
  }
};

int main() {
  TrainSystem trainSystem;

  trainSystem.AddTrain();
  trainSystem.AddTrain();
  trainSystem.AddTrain();

  trainSystem.DisplayAllTrains();

  trainSystem.BookSeat(1);

  trainSystem.CancelSeat(2);

  trainSystem.DisplayAllTrains();

  return 0;
}
