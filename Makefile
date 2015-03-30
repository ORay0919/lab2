main: main.o Bmi.o
	g++ -o BMI main.o Bmi.o

Bmi.o:Bmi.cpp Bmi.h
	g++ -c Bmi.cpp

main.o:main.cpp Bmi.h
	g++ -c main.cpp

clean:
	rm -f Bmi.o main.o

