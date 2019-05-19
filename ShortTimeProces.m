clear all;
close all;
load('C:\Users\nikod\Documents\MATLAB\analisis-de-electrocardiogramas-y-deteccion-de-enfermedades\Biblioteca de ECG\ecg_lento.mat')
x=ecg;
figure('Color','White');
Fs = 100;            % Sampling frequency                    
T = 1/Fs;             % Sampling period       
l = length(x);        % Length of signal
t=(0:l-1)'/Fs;
subplot(212),plot(t,x);
wl=8;
wd=wl/4;
nw=floor((l-wl)/wd);                                                                                                                                                                                         
f = Fs*(0:(wl/2))/wl;
for i=1:nw %i en tiempo
    aux=x((i-1)*wd+(1:wl)).*hamming(wl);
    P2 = abs(fft(aux)/wl);
    y = P2(1:wl/2+1);
    y(2:end-1) = 2*y(2:end-1);
    V(:,i)=y;
end
i=1:nw;
tt=((length(x)/nw)/Fs)*i;
subplot(211);
mesh(tt,f,V);
view(2)
axis tight
title(['WL= ',num2str(wl)])
