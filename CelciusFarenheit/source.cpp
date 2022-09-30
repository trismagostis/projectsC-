#include <iostream>
#include "source.h"
using namespace std;
double covertCelcius(double tempFarenheit){
  double tempCelcius;
  tempCelcius= (tempFarenheit-32)*5/9;
  return  tempCelcius;
};