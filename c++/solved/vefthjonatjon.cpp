/*
-------------------------------------------------------
Problem: Vefþjónatjón
-------------------------------------------------------
Description
Bjarki has had his hands full setting up web servers for NWERC and is borrowing N computers from the IT department of The University of Reykjavík to do so. The problem, which Bjarki didn’t realize right away, is that some of the computers are missing parts and thus he can’t set up as many web servers as he intended.
A web server needs three pieces to work: a CPU, memory and a hard drive. If one or more of these are missing, the web server won’t work.

Bjarki had the idea that he could take parts from some of the servers and put them into others. For example if one webserver has a CPU and hard drive, but no memory, he could take the memory from a different web server to make this one work. Bjarki started to wonder how many web servers he could get going by doing this.

Could you help Bjarki figure out how many webservers he can set up if he gives you a list of web servers and what parts are missing from each?
-------------------------------------------------------
Input
The first line contains an integer n, the number of web servers Bjarki has.
The next n lines each contain a description of a web server, each line containing three letters which are either “J” or “N”.
The first letter in line i denotes whether there is a CPU in web server number i, second letter denotes whether there is memory present in web server i and finally the third denotes whether there is a hard drive in web server i. “J” denotes that the component is present while “N” denotes that it is not present.
-------------------------------------------------------
Output
Print the maximum number of web servers Bjarki can get going.
-------------------------------------------------------
*/
#include <iostream>
#include <algorithm>

using namespace std;
int main() {

    int num; 

    char x, y, z;

    cin >> num;
    
    int xc = 0; 
    int yc = 0; 
    int zc = 0;

    for (int i=0; i<num; i++){
        cin >> x >> y >> z;

        if (x == 'J') { 
            xc += 1;
        }
        if (y == 'J') {
            yc += 1;
        }
        if (z == 'J') {
            zc += 1;
        }
    }

    int counts[3];

    counts[0] = xc;
    counts[1] = yc;
    counts[2] = zc;

    sort(counts, counts+3);

    cout << counts[0];



    return 0;
}