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

#include <iostream>
#include <string.h>

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
void Shooter::AutoExpel(){

    // set up time for the shooter to shoot
    units::second_t period = 1_s;
    m_timer.Start();

    frc::SmartDashboard::PutNumber("Autonomous Timer", double(m_timer.Get()));

    if (m_timer.HasElapsed(period))
    {
        this->ShooterStop();
        wpi::outs() << " Autonomous Shoot -> Stop The Shoot!\n";
    }
    else
    {
        this->Expel();
        wpi::outs() << " Autonomous Shoot ->The Ball!\n";
    }
}

void Shooter::Intake(){
    // Intake balls
    m_shooterMotor.Set(1.0); //TODO: Will need to be tuned
}

void Shooter::Expel(){
    // shoot balls
    m_shooterMotor.Set(-1.0); //TODO: Will need to be tuned
}

void Shooter::ShooterStop(){
    // stop the shooter
    m_shooterMotor.Set(0.0); //TODO: Will need to be tuned
    m_timer.Stop();
}
