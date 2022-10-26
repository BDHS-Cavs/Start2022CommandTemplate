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

#include "commands/ShooterMoveCommand.h"

ShooterMoveCommand::ShooterMoveCommand(Arm* m_arm)
:m_arm(m_arm){

    // Use AddRequirements() here to declare subsystem dependencies
    // eg. AddRequirements(m_Subsystem);
    SetName("ShooterMoveCommand");
    AddRequirements(m_arm);
}

// Called just before this Command runs the first time
void ShooterMoveCommand::Initialize() {
}

// Called repeatedly when this Command is scheduled to run
void ShooterMoveCommand::Execute() {
}

// Make this return true when this Command no longer needs to run execute()
bool ShooterMoveCommand::IsFinished() {
    return false;
}

// Called once after isFinished returns true
void ShooterMoveCommand::End(bool interrupted) {
    m_arm->ArmStop();
}

bool ShooterMoveCommand::RunsWhenDisabled() const {
    return false;
}