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

    AddChild("ArmMotor", &m_armMotor);
    
	m_armMotor.SetInverted(false);
}

void Arm::Periodic() {
    // Put code here to be run every loop
}

void Arm::SimulationPeriodic() {
}

// Put methods for controlling this subsystem here and call from commands
void Arm::ArmRaise(){

    // Raise Arm
    m_armMotor.Set(0.5); // TODO: Will need to be tuned
}

void Arm::ArmLower(){

    // Lower Arm
    m_armMotor.Set(-0.5);  // TODO: Will need to be tuned
}

void Arm::ArmStop(){
    // stop the arm
    m_armMotor.Set(0.0);
}
