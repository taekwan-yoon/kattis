/*
Link: https://open.kattis.com/problems/ptice
*/
#include <iostream>
#include <string>

using namespace std;
int main() {

    int count;
    string sequence;

    int adrian_point = 0, bruno_point = 0, goran_point = 0;

    cin >> count;
    cin >> sequence;

    char adrian[3] = {'A', 'B', 'C'};
    char bruno[4] = {'B', 'A', 'B', 'C'};
    char goran[6] = {'C', 'C', 'A', 'A', 'B', 'B'};

    for (int i=0; i < count; i++){
        if (sequence[i] == adrian[i % 3]){
            adrian_point += 1;
        }
        if (sequence[i] == bruno[i % 4]){
            bruno_point += 1;
        }
        if (sequence[i] == goran[i % 6]){
            goran_point += 1;
        }
    }

    int max_point = 0;

    int points[3] = {adrian_point, bruno_point, goran_point};

    for (int i=0; i<3; i++){
        if (points[i] > max_point){
            max_point = points[i]; 
        }
    }

    cout << max_point << '\n';

    for (int i=0; i<3; i++){
        if ((points[i] == max_point) && i == 0){
            cout << "Adrian" << '\n';
        } 
        if ((points[i] == max_point) && i == 1){
            cout << "Bruno" << '\n';
        }
        if ((points[i] == max_point) && i == 2){
            cout << "Goran" << '\n';
        }
    }

    return 0;
}