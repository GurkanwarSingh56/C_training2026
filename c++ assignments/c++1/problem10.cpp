/* Write a program to read time in hh:mm:ss and display answer I n only seconds. For Example if user
enters
2:15:30 then it should display 8130 seconds.
Input:
Enter Hours: 2
Enter minutes: 15
Seconds: 30
Output: 8130 seconds */
#include <iostream>
using namespace std;

class TimeConverter {
private:
    int hours;
    int minutes;
    int seconds;

public:
    void inputTime() {
        cout << "Enter Hours:minutes:Seconds ";
        char colon1, colon2;
        cin >> hours>>colon1>> minutes>>colon2>> seconds;
    }
    int convertToSeconds() {
        return (hours * 3600) + (minutes * 60) + seconds;
    }
};
int main() {
    TimeConverter t;
    t.inputTime();
    cout << "Output: " << t.convertToSeconds() << " seconds" << endl;
    return 0;
}
