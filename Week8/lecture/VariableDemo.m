
%disp( X ) displays the value of variable X without printing the variable name. 

disp("Hello, World!");

%How to create a new variable in MATLAB
% (1) Enter the variable name in the Command Window
% (2) followed by an equal sign (=), and
% (3) the value you want to assign to the variable.
% 
% * No need to declare variables before assigning values
% * Semicolon (;) indicates the end of statement. In MATLAB it also works to suppress and hide the MATLAB output for that statement. 

x = 1320;
x
disp(x);

%How to create a new Array in MATLAB
% (1) Enter the Array name in the Command Window
% (2) followed by an equal sign (=), and
% (3) the values you want to assign to the Array.
% * An array element can be accessed by A(1,1), A(1,2), etc.. 
% * In MATLAB, array indexing starts at 1 (one) not 0 (zero)

A = [1 2 3; 4 5 6];

disp(A);

for i = 1:2 
    for j = 1:3
        disp(A(i,j));
    end
end

%https://www.mathworks.com/help/matlab/matlab_env/create-and-edit-variables.html
