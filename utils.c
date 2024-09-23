/*
Author: Alec Helgeson
Date: 9/29/2022

Purpose: To demonstrate and enable modularity of prior hack programs.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "utils.h"

double degreesToRadians(double degree){
    double radian = (degree * M_PI) / 180;
    return radian;
}


double getAirDistance(double orgLat, double orgLong, double desLat, double desLong){
    if((orgLat > 90) || (orgLat < -90) || (orgLong > 180) || (orgLong < -180) || (desLat > 90) || (desLat < -90) || (desLong > 180) || (desLong < -180)){
            printf("Invalid Input");
            exit(1);
    }
    else{
        double distance, delta, earthRadius = 6371;

        delta = degreesToRadians(desLong) - degreesToRadians(orgLong);
        distance = acos(  sin(degreesToRadians(orgLat)) * sin(degreesToRadians(desLat))  +  cos(degreesToRadians(orgLat)) * cos(degreesToRadians(desLat)) * cos(delta)  ) * earthRadius;

        return distance;
    }
}



double lorentzTimeDilation(double t, double percentC){
    if((percentC > 1) || (percentC < 0)){
        printf("Invalid Input: Percent [0,1]");
        exit(1);
    }
    else{
        double dilation = (t / sqrt(1 - (pow(percentC, 2))));
        return dilation;
    }
}