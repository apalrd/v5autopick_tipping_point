#include "main.h"
#include "stdio.h"
#include "pal/auto.h"

/* Auto function examples */
void auto_skills_1(auto_color_t color,auto_pos_t pos)
{
	printf("I am Auto Skills 1, color is %d, pos is %d",color,pos);
}
void auto_skills_2(auto_color_t color,auto_pos_t pos)
{
	printf("I am Auto Skills 2, color is %d, pos is %d",color,pos);
}
void auto_skills_3(auto_color_t color,auto_pos_t pos)
{
	printf("I am Auto Skills 3, color is %d, pos is %d",color,pos);
}
void auto_skills_4(auto_color_t color,auto_pos_t pos)
{
	printf("I am Auto Skills 4, color is %d, pos is %d",color,pos);
}
void auto_match_p1_1(auto_color_t color,auto_pos_t pos)
{
	printf("I am Auto Match P1 1, color is %d, pos is %d",color,pos);
}
void auto_match_p1_2(auto_color_t color,auto_pos_t pos)
{
	printf("I am Auto Match P1 2, color is %d, pos is %d",color,pos);
}
void auto_match_p2_1(auto_color_t color,auto_pos_t pos)
{
	printf("I am Auto Match P2 1, color is %d, pos is %d",color,pos);
}
void auto_match_p2_2(auto_color_t color,auto_pos_t pos)
{
	printf("I am Auto Match P2 2, color is %d, pos is %d",color,pos);
}
void auto_match_p2_3(auto_color_t color,auto_pos_t pos)
{
	printf("I am Auto Match P2 3, color is %d, pos is %d",color,pos);
}


/* List of autonomous routines */
const auto_routine_t auto_list[] =
{
	/* Robot skills options */
	{ auto_skills_1, AUTO_POS_SKILLS, "Skills Center Goal"},
	{ auto_skills_2, AUTO_POS_SKILLS, "Skills Side Goal"},
	{ auto_skills_3, AUTO_POS_SKILLS, "Skills Something Else"},
	{ auto_skills_4, AUTO_POS_SKILLS, "Skills Fun"},
	/* Match autos */
	{ auto_match_p1_1, AUTO_POS_1, "Match P1 Color"},
	{ auto_match_p1_2, AUTO_POS_1, "Match P1 Neutral"},
	{ auto_match_p2_1, AUTO_POS_2, "Match P2 Color"},
	{ auto_match_p2_2, AUTO_POS_2, "Match P2 Neutral"},
	{ auto_match_p2_3, AUTO_POS_2, "Match P2 Center"},
};


/**
 * Runs initialization code. This occurs as soon as the program is started.
 *
 * All other competition modes are blocked by initialize; it is recommended
 * to keep execution time for this mode under a few seconds.
 */
void initialize() 
{
	/* Call Auto Picker to initialize it */
	auto_picker(auto_list, sizeof(auto_list)/sizeof(auto_routine_t));
}

/**
 * Runs while the robot is in the disabled state of Field Management System or
 * the VEX Competition Switch, following either autonomous or opcontrol. When
 * the robot is enabled, this task will exit.
 */
void disabled()
{

}

/**
 * Runs after initialize(), and before autonomous when connected to the Field
 * Management System or the VEX Competition Switch. This is intended for
 * competition-specific initialization routines, such as an autonomous selector
 * on the LCD.
 *
 * This task will exit when the robot is enabled and autonomous or opcontrol
 * starts.
 */
void competition_initialize()
{

}

/**
 * Runs the user autonomous code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the autonomous
 * mode. Alternatively, this function may be called in initialize or opcontrol
 * for non-competition testing purposes.
 *
 * If the robot is disabled or communications is lost, the autonomous task
 * will be stopped. Re-enabling the robot will restart the task, not re-start it
 * from where it left off.
 */
void autonomous() 
{
	/* Run slected autonomous program */
	auto_run();
}

/**
 * Runs the operator control code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the operator
 * control mode.
 *
 * If no competition control is connected, this function will run immediately
 * following initialize().
 *
 * If the robot is disabled or communications is lost, the
 * operator control task will be stopped. Re-enabling the robot will restart the
 * task, not resume it from where it left off.
 */
void opcontrol() 
{


}
