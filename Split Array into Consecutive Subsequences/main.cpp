#include <bits/stdc++.h>
using namespace std;

/*
 From https://leetcode.com/problems/split-array-into-consecutive-subsequences/discuss/106493/C%2B%2B-O(n)-solution-two-pass
 1.We use a hashmap called tails to record extra information, where tails[i] means the number of consecutive
   subsequences we've found so far, who are longer than 3 , and tailed by number i,
 2.When we meet number i, try to put it to the tail of one of found subsequences tailed by i-1.
   No need to worry that we might have a better choice to consider i as a brand new head for another subsequence,
   because we can always append the new subsequence to a previous one tailed by i-1.
 3.If we can't, it will cost one i+1 and one i+2 later to generate a new sequence. We just pay that right now
   by decrease cnt[i+1] and cnt[i+2]. Some one may worry that we make use of the numbers we haven't scanned so far.
   But actually we've already kept track of the numbers remained by cnt. Just imaging we grab the numbers needed
   from the very end of the string, and mark them as "used". If there is no such number available to pay,
   cnt will tell us by checking cnt[i+1] cnt[i+2] is positive or not
 */
bool isPossible(vector<int>& nums) {
    unordered_map<int, int> cnt, tails;
    for(int &x: nums){
        cnt[x]++;
    }
    for(int &x: nums){
        if(!cnt[x]) continue;
        cnt[x]--;
        if(tails[x-1] > 0){
            tails[x-1]--;
            tails[x]++;
        }
        else if(cnt[x+1] && cnt[x+2]){
            cnt[x+1]--;
            cnt[x+2]--;
            tails[x+2]++;
        }
        else return false;
    }
    return true;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
