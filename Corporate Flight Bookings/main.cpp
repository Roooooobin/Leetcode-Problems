#include <bits/stdc++.h>
using namespace std;

vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
    vector<int> seats(n+1, 0);
    for(int i=0; i<bookings.size(); i++){
        seats[bookings[i][0]-1] += bookings[i][2];
        seats[bookings[i][1]] -= bookings[i][2];
    }
    vector<int> ans(n, 0);
    ans[0] = seats[0];
    for(int i=1; i<n; i++){
        ans[i] = ans[i-1] + seats[i];
    }
    return ans;
}

int main() {
//    vector<vector<int>> bookings = {{1, 2, 10}, {2, 3, 20}, {2, 5, 25}};
    vector<vector<int>> bookings = {{1, 4, 20}};
    vector<int> ans = corpFlightBookings(bookings, 5);
    for(auto x: ans){
        cout << x << ' ';
    }
    return 0;
}
