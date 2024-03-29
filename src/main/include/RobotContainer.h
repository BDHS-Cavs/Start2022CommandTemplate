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

// frc includes
#include <frc/Joystick.h>
#include <frc/smartdashboard/SendableChooser.h>
#include <frc/XboxController.h>

#include <frc2/command/Command.h>
#include <frc2/command/button/JoystickButton.h>

// our includes
#include "commands/ArmLowerCommand.h"
#include "commands/ArmRaiseCommand.h"
#include "commands/AutonomousCommand.h"
#include "commands/IntakeCommand.h"
#include "commands/ShootCommand.h"

#include "subsystems/Arm.h"
#include "subsystems/Drive.h"
#include "subsystems/Limelight.h"
#include "subsystems/Shooter.h"

class RobotContainer {

public:

    frc2::Command* GetAutonomousCommand();
    static RobotContainer* GetInstance();

    // The robot's subsystems
    Arm       m_arm;
    Drive     m_drive;
    Limelight m_limelight;
    Shooter   m_shooter;

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
