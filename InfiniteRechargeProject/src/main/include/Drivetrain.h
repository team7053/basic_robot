#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H
#include <frc/Spark.h>
#include <frc/drive/DifferentialDrive.h>

class Drivetrain
{
public:
    Drivetrain(int ml, int mr);
    void setDrive(double spd, double turn);

private:
    frc::Spark lm, rm;
    frc::DifferentialDrive drive;
};

#endif