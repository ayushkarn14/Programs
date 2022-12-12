#include <iostream>
using namepsace std;
vector<vector<int>> solve(vector<vector<int>> image, int sr, int sc, int color){
    int old = image[sr][sc];
    if(old == color)
        return image;
    if(sr>0 && image[sr-1][sc]==old){
        image[sr-1][sc]=color;
        solve(image, sr-1,sc,color);
    }
    if(sc>0 && image[sr][sc-1]==old){
        image[sr][sc-1]=color;
        solve(image, sr,sc-1,color);
    }
    if(sr<image[0].size-1 && image[sr+1][sc]==old){
        image[sr+1][sc]=color;
        solve(image, sr+1,sc,color);
    }
    if(sc<image[0].size-1 && image[sr][sc+1]==old){
        image[sr][sc+1]=color;
        solve(image, sr,sc+1,color);
    }
    return image;
}