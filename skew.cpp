#include <iostream>
#include <fstream>
#include <cmath>
#include "arrayUtils.h"

using namespace std;

// Determine if a data set is skewed
void skew (float data[])
{

}

int main()
{
    float data [10000];
    int arraySize = 0;
    ifstream myfile;
    myfile.open ("test0.in");
    float temp;
    while(myfile)
    {
        myfile >> temp;
        addToEnd(data, arraySize, temp);
    }

    for(int i = 0; i < arraySize; i++)
    {
        cout << data[i] << endl;
    }
    skew(data);
    return 0;
}
