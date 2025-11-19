#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

// Traffic Light states
enum LightState { RED, GREEN };

// Lane class to store cars in each direction
class Lane {
public:
    string name;
    int cars;

    Lane(string n, int c) {
        name = n;
        cars = c;
    }

    // Cars passing during green light
    void passCars(int count) {
        if (cars >= count) cars -= count;
        else cars = 0;
    }
};

// Traffic controller class
class TrafficController {
public:
    Lane north, south, east, west;
    LightState nsLight, ewLight;

    TrafficController() :
        north("North", 12),
        south("South", 5),
        east("East", 3),
        west("West", 7)
    {
        nsLight = GREEN;
        ewLight = RED;
    }

    void showStatus() {
        cout << "\nTraffic Status:\n";
        cout << "North Lane : " << north.cars << " cars\n";
        cout << "South Lane : " << south.cars << " cars\n";
        cout << "East Lane  : " << east.cars << " cars\n";
        cout << "West Lane  : " << west.cars << " cars\n\n";
    }

    void showSignal() {
        cout << "Current Signal:\n";
        cout << "NORTH–SOUTH : " << (nsLight == GREEN ? "GREEN" : "RED") << "\n";
        cout << "EAST–WEST   : " << (ewLight == GREEN ? "GREEN" : "RED") << "\n\n";
    }

    void simulateGreenNS() {
        cout << "Cars Passing from North–South...\n";
        north.passCars(5);
        south.passCars(3);
    }

    void simulateGreenEW() {
        cout << "Cars Passing from East–West...\n";
        east.passCars(2);
        west.passCars(4);
    }

    void update() {
        int nsTotal = north.cars + south.cars;
        int ewTotal = east.cars + west.cars;

        if (nsTotal > ewTotal) {
            nsLight = GREEN;
            ewLight = RED;
        } else {
            nsLight = RED;
            ewLight = GREEN;
        }
    }

    void runSimulation() {
        for (int cycle = 1; cycle <= 3; cycle++) {
            cout << "\n---------------- CYCLE " << cycle << " ----------------\n";
            showStatus();
            showSignal();

            if (nsLight == GREEN) {
                simulateGreenNS();
            } else {
                simulateGreenEW();
            }

            cout << "\nUpdated Status:\n";
            showStatus();

            update();
            this_thread::sleep_for(chrono::seconds(1));
        }
    }
};

int main() {
    cout << "----- SMART TRAFFIC LIGHT SIMULATION -----\n";
    TrafficController t;
    t.runSimulation();
    cout << "\nSimulation Completed.\n";
    return 0;
}
