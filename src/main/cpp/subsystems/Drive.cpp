// RobotBuilder Version: 4.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

#include "subsystems/Drive.h"
#include <frc/smartdashboard/SmartDashboard.h>

Drive::Drive(){
    SetName("Drive");
    SetSubsystem("Drive");

    AddChild("DifferentialDrive", &m_differentialDrive);
    m_differentialDrive.SetSafetyEnabled(true);
    m_differentialDrive.SetExpiration(0.1_s);
    m_differentialDrive.SetMaxOutput(1.0);

    AddChild("m_controllerRight", &m_controllerRight);

    AddChild("m_rightFront", &m_rightFront);
    m_rightFront.SetInverted(true);

    AddChild("m_rightRear", &m_rightRear);
    m_rightRear.SetInverted(true);

    AddChild("m_controllerLeft", &m_controllerLeft);

    AddChild("m_leftFront", &m_leftFront);
    m_leftFront.SetInverted(false);

    AddChild("m_leftRear", &m_leftRear);
    m_leftRear.SetInverted(false);

    AddChild("m_drive_gyro", &m_drive_gyro);
}

void Drive::Periodic() {
    // Put code here to be run every loop
}

void Drive::SimulationPeriodic() {
    // This method will be called once per scheduler run when in simulation
}

// Functions called by robot commands
void Drive::Motivate(double leftSpeed, double rightSpeed) {

    m_differentialDrive.ArcadeDrive(leftSpeed,rightSpeed, true);
}

void Drive::AutoMotivate() {

    double currentAngle = m_drive_gyro.GetAngle();

    double autoLeftSpeed  = 0.0;
    double autoRightSpeed = 0.1;
    double targetAngle    = 180.0; //TODO - find a way to calculate targetAngle

   //calculate target angle
   //targetAngle = (currentAngle - 180.0); //thar be dragons here!

    if (this->CompareAngles(currentAngle, targetAngle, 0.01))
    {
        {
            // do nothing
        }
    }
    else
    {
        m_differentialDrive.ArcadeDrive(autoLeftSpeed, autoRightSpeed, true);
    };
}

bool Drive::CompareAngles(double x, double y, double epsilon = 0.01){
    if (fabs(x - y) < epsilon){
        return true;
    }
    else
    {
        return false;
    };
}

void Drive::Stop(){
    // cease your actions!!
    m_differentialDrive.ArcadeDrive(0.0, 0.0, true);
}