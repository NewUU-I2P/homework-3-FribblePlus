#include <iostream>
#include "problems/problem_1.cpp"
#include "problems/problem_2.cpp"
#include "problems/problem_3.cpp"
#include "problems/problem_4.cpp"
#include "problems/problem_5.cpp"

using namespace std;

int main() {
    cout << "Problem 1\n";
    float consumed_water;
    cin>>consumed_water;
    problemSolution1(consumed_water);
    cout << "Problem 2\n";
    float i, j, k;
    cin>>i>>j>>k;
    problemSolution2(i, j, k);
    cout << "Problem 3\n";
    float height;
    char S;
    cin>>S>>height;
    problemSolution3(height, S);
    cout << "Problem 4\n";
    string mac;
    cin>>mac;
    problemSolution4(mac);
    cout << "Problem 5\n";
    float x, y;
    char operation;
    cin>>x>>y>>operation;
    problemSolution5(x, y, operation);
    return 0;
}