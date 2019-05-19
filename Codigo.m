clear all;
close all;
%load('C:\Users\nikod\Documents\MATLAB\analisis-de-electrocardiogramas-y-deteccion-de-enfermedades\Biblioteca de ECG\ecg_normal_ideal.mat')
%load('C:\Users\nikod\Documents\MATLAB\analisis-de-electrocardiogramas-y-deteccion-de-enfermedades\Biblioteca de ECG\ecg_normal_1.mat');
%load('C:\Users\nikod\Documents\MATLAB\analisis-de-electrocardiogramas-y-deteccion-de-enfermedades\Biblioteca de ECG\ecg_rapido.mat');
load('C:\Users\nikod\Documents\MATLAB\analisis-de-electrocardiogramas-y-deteccion-de-enfermedades\Biblioteca de ECG\ecg_lento.mat')
x=ecg;
k=(x-min(x))/(max(x)-min(x));
Fs = 100;            % Sampling frequency                    
T = 1/Fs;             % Sampling period       
L = length(x);        % Length of signal
t = (0:L-1)*T;        % Time vector
f = Fs*(0:(L/2))/L;
P2 = abs(fft(x)/L);
P1 = P2(1:L/2+1);
P1(2:end-1) = 2*P1(2:end-1);
y=P1;
figure('Color','White');
subplot(211);
plot(t,x);
grid on;
subplot(212);
plot(f,y);
grid on;
