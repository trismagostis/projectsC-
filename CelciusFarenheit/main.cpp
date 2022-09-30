#include <iostream>
#include "source.h"
using namespace std;
int main () {
    double tempFarenheit,tempCelcius;
    cout<<"podaj temperature w Farenheit  ";
    cin >> tempFarenheit;
    cout<<covertCelcius(tempFarenheit);
}