#include <bits/stdc++.h>
using namespace std;

int main() {
    cin >> noskipws;
    istream_iterator<char> it(cin);
    istream_iterator<char> end;
    
    string s(it, end);
    
    // Drop the last "\n";
    if (s[s.size() - 1] == '\n') s = s.substr(0, s.size() - 1);
    
	char group = s[0];
	int ctr = 0;
	for (auto c : s) {
	    if (c != group) {
	        cout << group << ctr;
	        ctr = 0;
	        group = c;
	    }
        ctr++;
	}
	
	// Print out the last char group;
    cout << group << ctr << endl;
	
	return 0;
}
