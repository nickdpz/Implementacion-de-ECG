clear all;
close all;
load('C:\Users\nikod\Documents\MATLAB\analisis-de-electrocardiogramas-y-deteccion-de-enfermedades\Biblioteca de ECG\ecg_normal_1.mat')
%load('C:\Users\nikod\Documents\MATLAB\analisis-de-electrocardiogramas-y-deteccion-de-enfermedades\Biblioteca de ECG\ecg_rapido');
x=ecg;
k=floor((ecg-min(ecg))/(max(ecg)-min(ecg))*255+0.5);%Lo deja de 0 a 1 y luego lo pasa de 0 a 255
%plot(k)
j=k(12+(0:86));
figure();
plot(j);
%%
aux=0;
d=['{',''];
for i=1:87
    aux=d;
    d=[aux,',',num2str(j(i))];
end

disp(d);