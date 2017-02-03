# TM1638-WiringPi
TM1638 library for the OrangePi


git clone https://github.com/lanefu/WiringOtherPi.git

cd WiringOtherPisudo

./build

cd ..

git clone https://github.com/ua3nbw-cf/TM1638-WiringPi.git

cd TM1638-WiringPi

gcc -Wall -std=c99 -lwiringPi clock.c tm1638.c -o clock
