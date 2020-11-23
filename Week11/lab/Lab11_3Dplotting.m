%% 3D Plotting
% quickly - in preparation for contour(), surf(), and mesh()

close all

z = 0:0.1:10*pi;
x1 = sin(z);
y1 = cos(z);

x2 = sin(2*z);
y2 = cos(2*z);

figure
plot3(x1,y1,z)
hold on
plot3(x2,y2,z)
grid on
title('3D Plot')
xlabel('x values')
ylabel('y values')
zlabel('z values') % new axis - same labeling strategy
legend('(z)', '(2z')
