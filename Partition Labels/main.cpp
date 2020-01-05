#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

vector<int> partitionLabels(string S) {
    int len = S.size();
    vector<vector<int>> index(27, vector<int>(2, len));
    for(int i=0; i<len; i++){
        if(index[S[i]-'a'][0] == len){
            index[S[i]-'a'][0] = i;
        }
    }
    for(int i=len-1; i>=0; i--){
        if(index[S[i]-'a'][1] == len){
            index[S[i]-'a'][1] = i;
        }
    }
    sort(index.begin(), index.end(), [](const vector<int>& a, const vector<int>& b){
                                            if(a[0] != b[0]) return a[0] < b[0];
                                            else return a[1] < b[1];
                                        });
//    for(int i=0; i<26; i++){
//        if(index[i][0] != len){
//            cout << char(i + 'a') << ' ' << index[i][0] << ' ' << index[i][1] << endl;
//        }
//    }
    vector<int> ans;
    int min_st = index[0][0], max_ed = index[0][1];
    for(int i=0; i<27; i++){
        if(max_ed >= index[i][0]){
            max_ed = max(max_ed, index[i][1]);
        }
        else{
            ans.push_back(max_ed - min_st + 1);
            min_st = index[i][0];
            max_ed = index[i][1];
        }
        //if(index[i][0] == len) break;
    }
    return ans;
}

int main()
{
    string S = "ababcbacadefegdehijhklijz";
    string S1 = "abcahuijih";
    string S2 = "ntswuqqbidunnixxpoxxuuupotaatwdainsotwvpxpsdvdbwvbtdiptwtxnnbtqbdvnbowqitudutpsxsbbsvtipibqpvpnivottsxvoqqaqdxiviidivndvdtbvadnxboiqivpusuxaaqnqaobutdbpiosuitdnopoboivopaapadvqwwnnwvxndpxbapixaspwxxxvppoptqxitsvaaawxwaxtbxuixsoxoqdtopqqivaitnpvutzchkygjjgjkcfzjzrkmyerhgkglcyffezmehjcllmlrjghhfkfylkgyhyjfmljkzglkklykrjgrmzjyeyzrrkymccefggczrjflykclfhrjjckjlmglrmgfzlkkhffkjrkyfhegyykrzgjzcgjhkzzmzyejycfrkkekmhzjgggrmchkeclljlyhjkchmhjlehhejjyccyegzrcrerfzczfelzrlfylzleefgefgmzzlggmejjjygehmrczmkrc";
    for(auto x: partitionLabels(S2)){
        cout << x << ' ';
    }
    return 0;
}
