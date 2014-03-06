#include <iostream>
#include <fstream>
#include <cmath>
#include "arrayUtils.h"

using namespace std;

float calculateMean(float data[], int arraySize)
{
    float sum = 0.0;
    for(int i = 0; i < arraySize; i++)
    {
        sum += data[i];
    }
    return (sum/arraySize);
}

// Determine if a data set is skewed
void skew (float data[], int arraySize)
{
    float mean = calculateMean(data, arraySize);
    cout << "Mean = " << mean;
}

int main()
{
    float data [10000];
    int arraySize = 0;
    ifstream myfile;
    myfile.open ("test0.in");
    float temp;
    while(myfile >> temp)
    {
        addToEnd(data, arraySize, temp);
    }

    for(int i = 0; i < arraySize; i++)
    {
        cout << data[i] << endl;
    }
    skew(data, arraySize);
    return 0;
}
