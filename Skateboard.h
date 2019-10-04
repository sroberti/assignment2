//
// Created by Samuel Roberti on 10/4/19
//

#ifndef DRIVINGSIMULATOR_SKATEBOARD_H
#define DRIVINGSIMULATOR_SKATEBOARD_H
#include "Vehicle.h"

class Skateboard : public Vehicle {
private:
  const double min_mileage = 0.1;
  const double max_mileage = 0.5;
  const double mileage;

  double generateRandomizedMileage();

public:
  explicit Skateboard(string brand, string model);

  virtual ~Skateboard();
  virtual double mileageEstimate(double time);
  virtual string toString();
};

#endif
