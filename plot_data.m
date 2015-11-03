clear;clc;close all;

load lab2;

figure(1);
hold on;

t = linspace(0,24,24001);


l25 = large_muscle(3000:27000,:);
l50 = large_muscle(29000:53000,:);
l75 = large_muscle(53000:77000,:);
l100 = large_muscle(78000:102000,:);

m25 = med_muscle(3000:27000,:);
m50 = med_muscle(29000:53000,:);
m75 = med_muscle(53000:77000,:);
m100 = med_muscle(78000:102000,:);

s25 = small_muscle(3000:27000,:);
s50 = small_muscle(29000:53000,:);
s75 = small_muscle(53000:77000,:);
s100 = small_muscle(78000:102000,:);

%% Large muscle plots
subplot(3,4,1);
plot(t, l25(:,2));
xlabel('Time (s)');
ylabel('Force (N)');
title('Large Muscle @ 25% Duty Cycle');
ylim([-10,100]);

subplot(3,4,2);
plot(t, l50(:,2));
xlabel('Time (s)');
ylabel('Force (N)');
title('Large Muscle @ 50% Duty Cycle');
ylim([-10,100]);

subplot(3,4,3);
plot(t, l75(:,2));
xlabel('Time (s)');
ylabel('Force (N)');
title('Large Muscle @ 75% Duty Cycle');
ylim([-10,100]);

subplot(3,4,4);
plot(t, l100(:,2));
xlabel('Time (s)');
ylabel('Force (N)');
title('Large Muscle @ 100% Duty Cycle');
ylim([-10,100]);

%% Medium muscle plots
subplot(3,4,5);
plot(t, m25(:,2));
xlabel('Time (s)');
ylabel('Force (N)');
title('Medium Muscle @ 25% Duty Cycle');
ylim([-10,100]);

subplot(3,4,6);
plot(t, m50(:,2));
xlabel('Time (s)');
ylabel('Force (N)');
title('Medium Muscle @ 50% Duty Cycle');
ylim([-10,100]);

subplot(3,4,7);
plot(t, m75(:,2));
xlabel('Time (s)');
ylabel('Force (N)');
title('Medium Muscle @ 75% Duty Cycle');
ylim([-10,100]);

subplot(3,4,8);
plot(t, m100(:,2));
xlabel('Time (s)');
ylabel('Force (N)');
title('Medium Muscle @ 100% Duty Cycle');
ylim([-10,100]);

%% Small muscle plots
subplot(3,4,9);
plot(t, s25(:,2));
xlabel('Time (s)');
ylabel('Force (N)');
title('Small Muscle @ 25% Duty Cycle');
ylim([-10,100]);

subplot(3,4,10);
plot(t, s50(:,2));
xlabel('Time (s)');
ylabel('Force (N)');
title('Small Muscle @ 50% Duty Cycle');
ylim([-10,100]);

subplot(3,4,11);
plot(t, s75(:,2));
xlabel('Time (s)');
ylabel('Force (N)');
title('Small Muscle @ 75% Duty Cycle');
ylim([-10,100]);

subplot(3,4,12);
plot(t, s100(:,2));
xlabel('Time (s)');
ylabel('Force (N)');
title('Small Muscle @ 100% Duty Cycle');
ylim([-10,100]);


hold off;
figure(2);
hold on;


ll25 = large_muscle_luis(3000:27000,:);
ll50 = large_muscle_luis(29000:53000,:);
ll75 = large_muscle_luis(53000:77000,:);
ll100 = large_muscle_luis(78000:102000,:);

lm25 = med_muscle_luis(3000:27000,:);
lm50 = med_muscle_luis(29000:53000,:);
lm75 = med_muscle_luis(53000:77000,:);
lm100 = med_muscle_luis(78000:102000,:);

ls25 = small_muscle_luis(3000:27000,:);
ls50 = small_muscle_luis(29000:53000,:);
ls75 = small_muscle_luis(53000:77000,:);
ls100 = small_muscle_luis(78000:102000,:);

%% Large muscle plots - LUIS MUSCLE
subplot(3,4,1);
plot(t, ll25(:,2),'r');
xlabel('Time (s)');
ylabel('Force (N)');
title('Large Muscle @ 25% Duty Cycle');
ylim([-10,100]);
grid on;

subplot(3,4,2);
plot(t, ll50(:,2),'r');
xlabel('Time (s)');
ylabel('Force (N)');
title('Large Muscle @ 50% Duty Cycle');
ylim([-10,100]);
grid on;

subplot(3,4,3);
plot(t, ll75(:,2),'r');
xlabel('Time (s)');
ylabel('Force (N)');
title('Large Muscle @ 75% Duty Cycle');
ylim([-10,100]);
grid on;

subplot(3,4,4);
plot(t, ll100(:,2),'r');
xlabel('Time (s)');
ylabel('Force (N)');
title('Large Muscle @ 100% Duty Cycle');
ylim([-10,100]);
grid on;

%% Medium muscle plots - LUIS MUSCLE
subplot(3,4,5);
plot(t, lm25(:,2),'r');
xlabel('Time (s)');
ylabel('Force (N)');
title('Medium Muscle @ 25% Duty Cycle');
ylim([-10,100]);
grid on;

subplot(3,4,6);
plot(t, lm50(:,2),'r');
xlabel('Time (s)');
ylabel('Force (N)');
title('Medium Muscle @ 50% Duty Cycle');
ylim([-10,100]);
grid on;

subplot(3,4,7);
plot(t, lm75(:,2),'r');
xlabel('Time (s)');
ylabel('Force (N)');
title('Medium Muscle @ 75% Duty Cycle');
ylim([-10,100]);
grid on;

subplot(3,4,8);
plot(t, lm100(:,2),'r');
xlabel('Time (s)');
ylabel('Force (N)');
title('Medium Muscle @ 100% Duty Cycle');
ylim([-10,100]);
grid on;

%% Small muscle plots - LUIS MUSCLE
subplot(3,4,9);
plot(t, ls25(:,2),'r');
xlabel('Time (s)');
ylabel('Force (N)');
title('Small Muscle @ 25% Duty Cycle');
ylim([-10,100]);
grid on;

subplot(3,4,10);
plot(t, ls50(:,2),'r');
xlabel('Time (s)');
ylabel('Force (N)');
title('Small Muscle @ 50% Duty Cycle');
ylim([-10,100]);
grid on;

subplot(3,4,11);
plot(t, ls75(:,2),'r');
xlabel('Time (s)');
ylabel('Force (N)');
title('Small Muscle @ 75% Duty Cycle');
ylim([-10,100]);
grid on;

subplot(3,4,12);
plot(t, ls100(:,2),'r');
xlabel('Time (s)');
ylabel('Force (N)');
title('Small Muscle @ 100% Duty Cycle');
ylim([-10,100]);
grid on;
