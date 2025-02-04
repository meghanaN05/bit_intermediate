#include <bits/stdc++.h>

using namespace std;

int main() {
    unordered_map<string, string> opposite_directions = {
        {"N", "S"},
        {"S", "N"},
        {"E", "W"},
        {"W", "E"},
        {"NE", "SW"},
        {"SW", "NE"},
        {"NW", "SE"},
        {"SE", "NW"}
    };

   
    string D;
    cin >> D;


    cout << opposite_directions[D] << endl;

    return 0;
}
