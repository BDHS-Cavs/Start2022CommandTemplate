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

#include "RobotContainer.h"
#include <frc2/command/ParallelRaceGroup.h>
#include <frc2/command/RunCommand.h>
#include <frc/smartdashboard/SmartDashboard.h>



RobotContainer* RobotContainer::m_robotContainer = NULL;

RobotContainer::RobotContainer() : m_autonomousCommand() {
    frc::SmartDashboard::PutData(&m_drive);


    // SmartDashboard Buttons
    frc::SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());
	
    ConfigureButtonBindings();

    // Set up default drive command
    m_drive.SetDefaultCommand(frc2::RunCommand(
        [this]
        {
            m_drive.Motivate(
                m_joystick.GetY(),
                m_joystick.GetX());
        },
         {&m_drive}));

    m_chooser.SetDefaultOption("Autonomous Command", new AutonomousCommand());
    frc::SmartDashboard::PutData("Auto Mode", &m_chooser);
}

RobotContainer* RobotContainer::GetInstance() {
    if (m_robotContainer == NULL) {
        m_robotContainer = new RobotContainer();
    }
    return(m_robotContainer);
}

void RobotContainer::ConfigureButtonBindings() {
m_controllerButton6.WhenHeld(IntakeCommand(&m_shooter), true);
m_controllerButton7.WhenHeld(ShootCommand(&m_shooter), true);
m_controllerButton1.WhenHeld(ArmRaise(&m_arm), true);
m_controllerButton3.WhenHeld(ArmLower(&m_arm), true);
}

frc::Joystick* RobotContainer::getJoystick() {
   return &m_joystick;
}
frc::XboxController* RobotContainer::getController() {
   return &m_controller;
}

frc2::Command* RobotContainer::GetAutonomousCommand() {
  // The selected command will be run in autonomous
  return m_chooser.GetSelected();
}
