%% EXPORT SIM DATA TO CSV
data = [time, power];
headers = {"Time", "Panel +X", "Panel +Y", "Panel -Y", "Panel -Z"};
filename = 'PreSeparation_6U_Power.csv';

% Write headers using writecell
writecell(headers, filename);
% Write data using writematrix
writematrix(data, filename, 'WriteMode', 'append');

disp(['CSV file created: ', filename]);

