/*
-------------------------------------------------------
Problem: Zyxab
-------------------------------------------------------
Description
You really like playing games with your friend. Having played all the games there are, you decide to make your own game. After toiling over the rules and layout you realize you left nothing for your friend to do. You placate your friend, after some squabbling, by letting them choose a name for the game. You had already grown fond of the name Zyxab, so you decide to stack the deck in your favour. You ask your friend for a list of names and tell him you will pick the best one, defining the best one to be the shortest word, with ties being broken by which name is larger alphabetically. You furthermore require the name to be at least five characters long and that it has no repeated letter.

Your friend has now produced his list and all that is left is to find the “best” name.
-------------------------------------------------------
Input
The first line of the input contains an integer 1 <= n <= 20. Then follow n lines, each containing a string. The string contains only lowercase letters and is at most 20 characters long.
-------------------------------------------------------
Output
The output should contain the best name if one exists, and “neibb!” otherwise.
-------------------------------------------------------
*/
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main() {

    int num; 
    cin >> num;

    string names[num];

    for (int i=0; i<num; i++){
        cin >> names[i];
    }

    vector<string> long_names;
    
    for (int i=0; i<num; i++){
        if (names[i].length() >= 5){
            long_names.push_back(names[i]);
        }
    }

    vector<string> long_no_repeat_names;
    set<char> alphabets;

    for (int i=0; i<long_names.size(); i++){
        alphabets.clear();
        for (int j=0; j<long_names[i].length(); j++){
            alphabets.insert(long_names[i][j]);
        }

        if (alphabets.size() == long_names[i].length()){
            long_no_repeat_names.push_back(long_names[i]);
        }
    }

    vector<int> alphabet_counts;
    int count;


    for (int i=0; i<long_no_repeat_names.size(); i++){
        alphabet_counts.push_back(long_no_repeat_names[i].length());
    }

    int alphabet_counts_arr[alphabet_counts.size()];
    
    for (int i=0; i<alphabet_counts.size(); i++){
        alphabet_counts_arr[i] = alphabet_counts.at(i);
    }

    sort(alphabet_counts_arr, alphabet_counts_arr+alphabet_counts.size());

    vector<string> final_list;
    set<string> final_set;

    for (int i=0; i<alphabet_counts.size(); i++){
        if (long_no_repeat_names[i].length() == alphabet_counts_arr[0]){
            final_list.push_back(long_no_repeat_names[i]);
        }
    }

    int smallest = 0;

    if (final_list.size() == 1){
        cout << final_list[0];
    } else if (final_list.empty() == true){
        cout << "neibb!";
    } else {

////////
        for (int i=0; i<final_list.size() - 1; i++){
            final_set.insert(final_list.at(i));
        }
        string setint = *final_set.rbegin();
        cout << setint;
///////////
    }

    return 0;
}