// RobotBuilder Version: 4.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

#include "subsystems/Shooter.h"

#include <frc/smartdashboard/SmartDashboard.h>
#include <wpi/raw_ostream.h> // for wpi outs()


Shooter::Shooter(){
    SetName("Shooter");
    SetSubsystem("Shooter");

    AddChild("ShooterMotor", &m_shooterMotor);

    m_shooterMotor.SetInverted(false);
}

void Shooter::Periodic() {
    // Put code here to be run every loop
}

void Shooter::SimulationPeriodic() {
}

// Put methods for controlling this subsystem here and call from commands

void Shooter::Expel(){
    // Shoot balls
    m_shooterMotor.Set(-1.0); 
}

void Shooter::Intake(){
    // Intake balls
    m_shooterMotor.Set(1.0); 
} // TODO

void Shooter::ShooterStop(){
    // Stop the shooter
    m_shooterMotor.Set(0.0); 
}