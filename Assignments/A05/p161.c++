#include <iostream>
#include <vector>
#include <algorithm> //need this libary to include GDC function 

using namespace std;

int main() {
    while (true) {
        vector<int> cycleTimes; // This variible hold the amount of cycle times 
        int cycleTime;
        
        // Read cycle times until a line with 0 0 0 is encountered
        while (true) {
            cin >> cycleTime;
            if (cycleTime == 0) break; // Exit the loop if 0 is read over in the input file 
            cycleTimes.push_back(cycleTime);
        }
        
        // Check if the input ends
        if (cycleTimes.empty()) break;  // break if the file's end is reached 

        int currentTime = 0;
        int lcm = 1; // makes least common multiple as 1

        // Calculate the least common multiple (LCM) of all cycle times
        for (int i = 0; i < cycleTimes.size(); i++) {
            // Calculate LCM using the formula LCM(a, b) = (a * b) / GCD(a, b)
            int gcd = __algo_gcd(lcm, cycleTimes[i]); // Calculate the greatest common divisor (GCD)
            lcm = (lcm * cycleTimes[i]) / gcd; // Update the LCM using the GCD
        }

        // Calculate the time when all lights will simultaneously show green again
        while (true) {
            currentTime += lcm; // Advance the current time by the LCM

            // Check if all lights are green at this time
            bool allGreen = true;
            for (int i = 0; i < cycleTimes.size(); i++) {
                int cycle = currentTime % (cycleTimes[i] * 2); // Account for orange phase
                if (cycle >= cycleTimes[i]) {
                    allGreen = false; // At least one light is not green, so set the flag to false
                    break;
                }
            }

            if (allGreen) {
                // Convert time to hours, minutes, and seconds
                int hours = currentTime / 3600;
                int minutes = (currentTime % 3600) / 60;
                int seconds = currentTime % 60;

                // Output the formatted time
                cout << (hours < 10 ? "0" : "") << hours << ":"
                     << (minutes < 10 ? "0" : "") << minutes << ":"
                     << (seconds < 10 ? "0" : "") << seconds << endl;
                break; // Exit the loop when all lights are green
            }

            // If it takes more than 5 hours, exit with a message
            if (currentTime > 5 * 3600) {
                cout << "Signals fail to synchronise in 5 hours" << endl;
                break;
            }
        }
    }

    return 0;
}
