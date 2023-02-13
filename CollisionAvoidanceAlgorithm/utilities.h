/*
 =====================================================================================
 Name          : utilities.h
 Author        : Collision Avoidance Team
 Version       : Version 1.0
 Description   : Header file for utilities which we will use in the main algorithm
 =====================================================================================
 */

#ifndef UTILITIES_H
#define UTILITIES_H

#define pi 3.14159265358979323846


 /*
 * Description : Convert Given Angle from Degree to Radian to be suitable for "Math.h" Library APIS
 * Parameters  : "AngleInDegree" The Angle which is wanted to be convert from Deg to rad
 */
double DegToRad(double AngleInDegree);
/*
* Description : Convert Given diagonal Distance to Horizontal Distance using the Azimuth Angle
* Parameters  : "Angle" The azimuth angle 
*               "DiagonalDistance " the Diagonal distance which is needed to convert to horizontal Distance
*/
double GetHorizontalDistance(double DiagonalDistance, double Angle);



#endif