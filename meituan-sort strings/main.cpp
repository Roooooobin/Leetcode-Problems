#include <bits/stdc++.h>
using namespace std;

vector<string> a;

bool cmp(string a, string b){
    if(a == "") return true;
    if(b.find(a) == 0 && a != b) return true;
    if(a.find(b) == 0 && a != b) return false;
    return a > b;
}

void qsort(int l, int r){
    if(l >= r) return;
    int i = l, j = r;
    string x = a[i];
    while(i != j){
        while(i < j && !cmp(x, a[j])){
            j--;
        }
        swap(a[i], a[j]);

        while(i < j && cmp(x, a[i])){
            i++;
        }
        swap(a[i], a[j]);
    }
    qsort(l, i-1);
    qsort(i+1, r);
}

int main(){
    string s;
    cin >> s;
    int len = s.size();
    int index = 0;
    string str;
    a.clear();
    while(index <= len){
        if(s[index] == ',' || index == len){
            a.push_back(str);
            str.clear();
            index++;
        }
        else{
            str += s[index];
            index++;
        }
    }
    qsort(0, a.size()-1);
    for(int i=a.size()-1; i>0; --i){
        cout << a[i] << ",";
    }
    cout << a[0] << endl;
    return 0;
}