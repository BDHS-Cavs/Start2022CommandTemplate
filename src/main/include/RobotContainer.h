// RobotBuilder Version: 4.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

// ROBOTBUILDER TYPE: RobotContainer.

#pragma once

#include <frc/smartdashboard/SendableChooser.h>
#include <frc2/command/Command.h>
#include <frc/Joystick.h>
#include <frc/XboxController.h>

#include "commands/AutonomousCommand.h"
#include "subsystems/Drive.h"
#include "commands/Move.h"

class RobotContainer {

public:

    frc2::Command* GetAutonomousCommand();
    static RobotContainer* GetInstance();

    // The robot's subsystems
    Drive m_drive;

    // Get the control values
    frc::Joystick *getJoystick();
    frc::XboxController *getController();

private:

    RobotContainer();

    // Joysticks
    frc::Joystick m_joystick{0};
    frc::XboxController m_controller{1};

    frc::SendableChooser<frc2::Command*> m_chooser;
    AutonomousCommand m_autonomousCommand;
    static RobotContainer* m_robotContainer;

    void ConfigureButtonBindings();
};