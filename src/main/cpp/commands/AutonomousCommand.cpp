// RobotBuilder Version: 4.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

// ROBOTBUILDER TYPE: Command.

#include "commands/AutonomousCommand.h"
#include <iostream> //for cout

AutonomousCommand::AutonomousCommand(Drive* m_drive, Limelight* m_limelight)
:m_drive(m_drive),
m_limelight(m_limelight){

    // Use AddRequirements() here to declare subsystem dependencies
    // eg. AddRequirements(m_Subsystem);
    SetName("AutonomousCommand");
    AddRequirements(m_drive);
    AddRequirements(m_limelight);
}

// Called just before this Command runs the first time
void AutonomousCommand::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void AutonomousCommand::Execute() {
    cout << "Now in Autonomous Mode!";
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousCommand::IsFinished() {
    return false;
}

// Called once after isFinished returns true
void AutonomousCommand::End(bool interrupted) {

}

bool AutonomousCommand::RunsWhenDisabled() const {
    return false;
}
