% A program to check whether a temperature falls within a given set of min and max bounds.
% 

clear     %clear the workspace   
clc       %clear the command prompt

currentTemp = 50+100*rand; % To generate a random number in the interval (50, 151)
                           % 50 + (151 - 50) * rand
maxTemp = 151;
minTemp = 100;
% isTarget = minTemp < currentTemp < maxTemp;
isTarget = currentTemp>minTemp && currentTemp<maxTemp;

fprintf('Current temperature: %.2f is between max: %d and min: %d (1=ture, 0=false): %d \n'...
,currentTemp, maxTemp, minTemp, isTarget)




