#include <bits/stdc++.h>
using namespace std;

int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
    int clockwise = 0, counterclockwise = 0;
    if(start > destination) return distanceBetweenBusStops(distance, destination, start);
    for(int i=start; i<destination; i++){
        clockwise += distance[i];
    }
    for(int i=distance.size()-1; i>=destination; i--){
        counterclockwise += distance[i];
    }
    for(int i=0; i<start; i++){
        counterclockwise += distance[i];
    }
    return min(clockwise, counterclockwise);
}

int main() {
    vector<int> d = {1, 2, 3, 1, 1, 1};
    cout << distanceBetweenBusStops(d, 1, 3) << endl;
    return 0;
}
