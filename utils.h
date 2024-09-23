/*
Author: Alec Helgeson
Date: 9/29/2022

Purpose: Header file for various functions related
to Hack 5.0 of CSCE155E.
*/

//Function that converts degrees to radians
double degreesToRadians(double degree);

//Function that calculates the air distance between two points on earths surface.
double getAirDistance(double originLatitude, double originLongitude, double destinationLatitude, double destinationLongitude);

//Function that calculates amount of time dialation relative to the speed of light.
double lorentzTimeDilation(double t, double percentC);