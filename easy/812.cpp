
//812. Largest Triangle Area second method
// Given an array of points on the X-Y plane points where points[i] = [xi, yi]
// return the area of the largest triangle that 
// can be formed by any three different points
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

    double largestTriangleArea(vector<vector<int>>&p) {
        double res = 0;
        int n = p.size();
        for(int i=0; i<n-2; i++)
            for(int j=i+1; j<n-1; j++)
                for(int k=j+1; k<n; k++)
                {
                    double area = abs( (p[j][0]-p[i][0]) * (p[k][1]-p[i][1]) - (p[j][1] - p[i][1]) * (p[k][0] - p[i][0]) ) * 0.5;
                    res = max(res, area);
                }
        return res;
    }


int main(){
    vector<vector<int>> points = {{0,0},{0,1},{1,0},{1,2}};
    cout << largestTriangleArea(points);
    return 0;
}