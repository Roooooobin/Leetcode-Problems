#include <bits/stdc++.h>
using namespace std;

double angleClock(int hour, int minutes) {
    double angle_minute = minutes * 6.0;
    double angle_hour = hour * 30 + minutes / 2.0;
    double angle_diff = abs(angle_hour - angle_minute);
    return min(angle_diff, 360.0 - angle_diff);
}

int main() {
    cout << angleClock(3, 15) << endl;
    return 0;
}
