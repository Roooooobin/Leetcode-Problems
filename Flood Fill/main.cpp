#include <bits/stdc++.h>
using namespace std;

// leetcode-733 by Robin
void dfs(vector<vector<int>>& image, int i, int j, int curColor, int newColor){
    if(i < 0 || i >= image.size() || j < 0 || j >= image[0].size() || image[i][j] != curColor) return;
    int color = image[i][j];
    image[i][j] = newColor;
    dfs(image, i+1, j, color, newColor);
    dfs(image, i-1, j, color, newColor);
    dfs(image, i, j+1, color, newColor);
    dfs(image, i, j-1, color, newColor);
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
    // important
    if(image[sr][sc] != newColor)   dfs(image, sr, sc, image[sr][sc], newColor);
    return image;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
