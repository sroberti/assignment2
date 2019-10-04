//
// Created by Samuel Roberti on 10/4/19
//

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {

private:
  const int numberOfEngines;
  double mileage;

  int generateRandomizedMileage();

public:

  Jet() = delete;
  explicit Jet(string manufacturer, string model,
               string fuelType, int engineCount=1);
  virtual ~Jet();
  virtual string toString();
  virtual double mileageEstimate();

};


#endif 
