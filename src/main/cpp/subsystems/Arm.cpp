// RobotBuilder Version: 4.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

#include "subsystems/Arm.h"

#include <frc/smartdashboard/SmartDashboard.h>

Arm::Arm(){
    SetName("Arm");
    SetSubsystem("Arm");

    AddChild("ArmMotorLeft", &m_armMotorLeft);
    AddChild("ArmMotorRight", &m_armMotorRight);
    
	m_armMotorLeft.SetInverted(false);
    m_armMotorRight.SetInverted(false);
}

void Arm::Periodic() {
    // Put code here to be run every loop
}

void Arm::SimulationPeriodic() {
}

// Put methods for controlling this subsystem here and call from commands
void Arm::ArmRaise(){
    // Raise Arm
    m_armMotorLeft.Set(0.5);  //TODO: Will need to be tuned
    m_armMotorRight.Set(0.5); //TODO: Will need to be tuned
}

void Arm::ArmLower(){
    // Lower Arm
    m_armMotorLeft.Set(-0.5);  //TODO: Will need to be tuned
	m_armMotorRight.Set(-0.5); //TODO: Will need to be tuned
}

void Arm::ArmStop(){
    // stop the arm
    m_armMotorLeft.Set(0.0);
	m_armMotorRight.Set(0.0);
}
