// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "AutonomousCommand.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

AutonomousCommand::AutonomousCommand(): Command() {
        // Use requires() here to declare subsystem dependencies
    // eg. requires(chassis);
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::controlSS.get());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void AutonomousCommand::Initialize() {
	Robot::controlSS->posNum = 0;
	Robot::controlSS->defNum = 0;
	pos = Robot::controlSS->posNum;
	def = Robot::controlSS->defNum;
}

// Called repeatedly when this Command is scheduled to run
void AutonomousCommand::Execute() {
	if (pos != 0 && def != 0){//smartdashboard doesn't have an error
		if (pos == 1 || def == 1){//both of these indicate low bar and left
			//drive forward through low bar
			//code
			//start counting again after passing outerworks
			//code
			//count to a set value and then turn
			//code
			//shoot
			//code
		}else if (def == 2){//Portcullis
			//run code of traversing defense
			//code
			//after clearing defense turn based on position
			if (pos == 2){//left-middle

			}else if (pos == 3){//middle

			}else if (pos == 4){//right-middle

			}else if (pos == 5){//right

			}
		}else if (def == 3){//Cheval de Frise
			if (pos == 2){//left-middle

			}else if (pos == 3){//middle

			}else if (pos == 4){//right-middle

			}else if (pos == 5){//right

			}
		}else if (def == 4){//Moat
			if (pos == 2){//left-middle

			}else if (pos == 3){//middle

			}else if (pos == 4){//right-middle

			}else if (pos == 5){//right

			}
		}else if (def == 5){//Ramparts
			if (pos == 2){//left-middle

			}else if (pos == 3){//middle

			}else if (pos == 4){//right-middle

			}else if (pos == 5){//right

			}
		}else if (def == 6){//Drawbridge
			if (pos == 2){//left-middle

			}else if (pos == 3){//middle

			}else if (pos == 4){//right-middle

			}else if (pos == 5){//right

			}
		}else if (def == 7){//Sally Port
			if (pos == 2){//left-middle

			}else if (pos == 3){//middle

			}else if (pos == 4){//right-middle

			}else if (pos == 5){//right

			}
		}else if (def == 8){//Rock Wall
			if (pos == 2){//left-middle

			}else if (pos == 3){//middle

			}else if (pos == 4){//right-middle

			}else if (pos == 5){//right

			}
		}else if (def == 9){//Rough Terrain
			if (pos == 2){//left-middle

			}else if (pos == 3){//middle

			}else if (pos == 4){//right-middle

			}else if (pos == 5){//right

			}
		}
	}else if (pos == 0 || def == 0){//this code should only be hit if the smartdashboard has an error
		//just drive forward to defense
		//insert code here

	}
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousCommand::IsFinished() {
    return false;
}

// Called once after isFinished returns true
void AutonomousCommand::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousCommand::Interrupted() {

}
