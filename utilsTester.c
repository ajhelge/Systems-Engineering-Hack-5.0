/*
Author: Alec Helgeson
Date: 9/29/2022

Purpose: To test the functions within 'utils.c' and 'utils.h' of hack 5.0.
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "utils.h"

#define DELTA 0.0001

int isClose(double a, double b);

int main(void){

    double input = 0, expectedOutput = 0, output = 0;

    double t = 0, percentC = 0;

    double orgLat = 0, orgLong = 0, desLat = 0, desLong = 0;

    input = 180;
    expectedOutput = (180 * M_PI) / 180;
    printf("\nTesting degreesToRadians: ");
    output = degreesToRadians(input);
    if(expectedOutput == output){
        printf("Passed | output: %lf\n", output);
    }
    else{
        printf("Failed | output: %lf\n", output);
    }
//  ========================================================================================
    input = -180;
    expectedOutput = (-180 * M_PI) / 180;
    printf("\nTesting degreesToRadians: ");
    output = degreesToRadians(input);
    if(expectedOutput == output){
        printf("Passed | output: %lf\n", output);
    }
    else{
        printf("Failed | output: %lf\n", output);
    }
//  =========================================================================================
    input = 500;
    expectedOutput = (500 * M_PI) / 180;
    printf("\nTesting degreesToRadians: ");
    output = degreesToRadians(input);
    if(expectedOutput == output){
        printf("Passed | output: %lf\n", output);
    }
    else{
        printf("Failed | output: %lf\n", output);
    }
//  =========================================================================================
    orgLat = 25;
    orgLong = 50;
    desLat = 30;
    desLong = 55;
    expectedOutput = 742.965196;
    printf("\nTesting getAirDistance: ");
    output = getAirDistance(orgLat, orgLong, desLat, desLong);
    if(isClose(expectedOutput, output)){
        printf("Passed | output: %lf\n", output);
    }
    else{
        printf("Failed | output: %lf\n", output);
    }
//  =========================================================================================
    orgLat = 0;
    orgLong = 0;
    desLat = 0;
    desLong = 0;
    expectedOutput = 0;
    printf("\nTesting getAirDistance: ");
    output = getAirDistance(orgLat, orgLong, desLat, desLong);
    if(isClose(expectedOutput, output)){
        printf("Passed | output: %lf\n", output);
    }
    else{
        printf("Failed | output: %lf\n", output);
    }
//  =========================================================================================
    orgLat = -25;
    orgLong = -50;
    desLat = -30;
    desLong = -55;
    expectedOutput = 742.965196;
    printf("\nTesting getAirDistance: ");
    output = getAirDistance(orgLat, orgLong, desLat, desLong);
    if(isClose(expectedOutput, output)){
        printf("Passed | output: %lf\n", output);
    }
    else{
        printf("Failed | output: %lf\n", output);
    }
//  =========================================================================================
    t = 100;
    percentC = .5;
    expectedOutput = 115.470054;
    printf("\nTesting lorentzTimeDilation: ");
    output = lorentzTimeDilation(t, percentC);
    if(isClose(expectedOutput, output)){
        printf("Passed | output: %lf\n", output);
    }
    else{
        printf("Failed | output: %lf\n", output);
    }
//  =========================================================================================
    t = 50;
    percentC = .25;
    expectedOutput = 51.639778;
    printf("\nTesting lorentzTimeDilation: ");
    output = lorentzTimeDilation(t, percentC);
    if(isClose(expectedOutput, output)){
        printf("Passed | output: %lf\n", output);
    }
    else{
        printf("Failed | output: %lf\n", output);
    }
//  =========================================================================================
    t = 200;
    percentC = .99;
    expectedOutput = 1417.76241;
    printf("\nTesting lorentzTimeDilation: ");
    output = lorentzTimeDilation(t, percentC);
    if(isClose(expectedOutput, output)){
        printf("Passed | output: %lf\n", output);
    }
    else{
        printf("Failed | output: %lf\n", output);
    }

}


int isClose(double a, double b) {
  return (fabs(a-b) < DELTA);
}
