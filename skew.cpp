#include <iostream>
#include <fstream>
#include <cmath>
#include "arrayUtils.h"

using namespace std;

float calculateDeviation(float data[], int arraySize, float mean)
{
    float sum = 0.0;
    for(int i = 0; i < arraySize; i++)
    {
        sum += pow(data[i], 2);
    }
    float numerator = sum - (arraySize*(pow(mean,2)));
    float denominator = arraySize -1;
    float s = sqrt(numerator/denominator);
    return s;
}

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
    //cout << "Mean = " << mean;

    float deviation = calculateDeviation(data, arraySize, mean);
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
