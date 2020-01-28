//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include<iostream>
#include<cmath>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;

int main()
{
    int N = 0;
    float x = 0,y =0,sd =0,mean =0;
    string textline;

    ifstream source("score.txt");
    while(getline(source,textline))
    {
        x = x + atof(textline.c_str());
        y = y + (atof(textline.c_str())*atof(textline.c_str()));
        N++;
    }
    mean = x/N;
    sd = sqrt((y/N)-(mean*mean));
    cout << "Number of data = " << N << "\n" ;
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << sd << "\n";

}