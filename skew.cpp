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

float calculateMedian(float data[], int arraySize)
{
    insertionSort(data, arraySize);
    if ( arraySize % 2== 0 ) //ODD
    {
        double high, low;
        low = data[arraySize/2];
        high = data[(arraySize/2)+1];
        return ((high+low)/2);
    }
    else //EVEN
    {
        return (data[arraySize/2]);
    }
}

// Determine if a data set is skewed
float skew (float data[], int arraySize)
{
    float mean = calculateMean(data, arraySize);
    //cout << "Mean = " << mean;

    float deviation = calculateDeviation(data, arraySize, mean);
    float median = calculateMedian(data, arraySize);
    float numerator = 3*(mean - median);
    float denomirator = deviation;
    return (numerator/denomirator);
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
    float skewValue = skew(data, arraySize);
    //cout << "SKEW VALUE= " << skewValue << endl;
    if (skewValue > 1 || skewValue <-1)
    {
        cout << "Badly skewed";
    }
    else
    {
        cout << "Not badly skewed";
    }
    return 0;
}
