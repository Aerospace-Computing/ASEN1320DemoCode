% A program to check whether a user input temperature falls within given min and max bounds.

% Author: Matsuo
% Data: Oct 16, 2020

clear     %clear the workspace   
clc       %clear the command prompt

currentTemp = input('Enter current temp: ');
maxTemp = 151;
minTemp = 100;
% isTarget = minTemp < currentTemp < maxTemp;
isTarget = currentTemp>minTemp && currentTemp<maxTemp;

fprintf('Current temperature is between max: %d and min: %d (1=true, 0=false): %d\n', ...
        maxTemp, minTemp, isTarget)