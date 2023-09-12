/*
-------------------------------------------------------
Problem: Secure Doors
-------------------------------------------------------
Description
You need to write a simple software auditor for tracking employees entering and exiting your building using their access cards (each card uniquely identifies the employee holding the card). Your software needs to look at the access log and determine if there are any anomalies. There are two types of anomalies your software should detect:

a user entering the building when, according to the log, they are already supposed to be in the building

a user exiting the building when, according to the log, they are not supposed to be in the building

When your software sees someone enter a building (even if it’s an anomaly), that person is assumed to be inside the building from that point on, until he exits. Similarly, if your software sees someone exit the building (even if it’s an anomaly), that person is assumed to not be in the building from that point on, until he enters again. At the beginning of the log, everyone is assumed to be outside the building.
-------------------------------------------------------
Input
Input starts with a number 1 <= n <= 1000 indicating the length of the log. This is followed by n lines, each line describing either an entry or exit by an employee. Each description is of the form ‘entry name’ or ‘exit name’, where name is a string of up to 20 uppercase and/or lowercase characters (a-z).
-------------------------------------------------------
Output
For each person’s entry or exit, print the name of the person, followed by entered or exited. If the action is anomalous, print (ANOMALY) afterward.
-------------------------------------------------------
*/
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
int main() {

    int num;
    string action, name;
    vector<string> actions;
    vector<string> names;
    unordered_map<string, int> list;

    cin >> num;
    
    for (int i=0; i<num; i++){
        cin >> action >> name;
        actions.push_back(action);
        names.push_back(name);
    }

    for (string item : names) {
        list[item] = 0;
    }

    for (int i=0; i<num; i++) {
        action = actions[i];
        name = names[i];

        if (action == "entry" && list[name] == 0) {
            cout << name << ' ' << "entered" << '\n';
            list[name] = 1;
        } else if (action == "entry" && list[name] == 1) {
            cout << name << ' ' << "entered" << ' ' << "(ANOMALY)" << '\n';
        } else if (action == "exit" && list[name] == 1) {
            cout << name << ' ' << "exited" << '\n';
            list[name] = 0;
        } else if (action == "exit" && list[name] == 0) {
            cout << name << ' ' << "exited" << ' ' << "(ANOMALY)" << '\n';
        }
    }


    return 0;
}