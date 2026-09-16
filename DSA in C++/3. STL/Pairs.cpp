#include <bits/stdc++.h>
using namespace std;

void ExplainPairs() {
    pair<int, int> p = {3, 8};
    cout << p.first << " " << p.second << "\n";
}

void multiplepairs () {
pair<int, pair<int,int>> p = {1, {5,9}};
cout << p.first << " " << p.second.second << " " << p.second.first <<endl;
}


void pairArr () {
pair <int,int> arr [] = {{1,2},{2,9},{8,6}};
cout << arr[2].first;
}


int main() {
    ExplainPairs();
    multiplepairs();
    pairArr();
    return 0;
}

