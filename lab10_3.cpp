#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;

int main(){
    int count = 0;
    float sum = 0.0;
    float sum_of_square = 0.0;
    string textline;
    ifstream source("score.txt");
    
    while (getline(source,textline))
    {
        float score = stof(textline);
        sum += score;
        sum_of_square += pow(score,2);
        count++;
    }


    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << sum /count << endl;
    cout << "Standard deviation = " << sqrt((sum_of_square / count) - pow(sum/count, 2));
}