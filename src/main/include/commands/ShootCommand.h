// RobotBuilder Version: 4.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

#pragma once

#include <frc2/command/CommandHelper.h>
#include <frc2/command/CommandBase.h>

#include "subsystems/Shooter.h"

class ShootCommand: public frc2::CommandHelper<frc2::CommandBase, ShootCommand> {

public:
    explicit ShootCommand(Shooter* m_shooter);

    void Initialize() override;
    void Execute() override;
    bool IsFinished() override;
    void End(bool interrupted) override;
    bool RunsWhenDisabled() const override;

private:
    Shooter* m_shooter;
};
