#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double xCenter;
    double yCenter;
    double radius, M_PI;
    Solution(double rad, double x_center, double y_center) {
        radius = rad;
        xCenter = x_center;
        yCenter = y_center;
    }
    
    double random(){
        return 1.0 * rand() / RAND_MAX;
    }
   
    vector<double> randPoint() {        
        double length = sqrt(random()) * radius;
        double angle = random() * 2 * M_PI;
        double xRand = xCenter + length * cos(angle), yRand = yCenter + length * sin(angle);
        return {xRand, yRand};
    }
};


int main(){

}