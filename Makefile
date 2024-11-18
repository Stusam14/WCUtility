myWC: wcutility.o wcutilitydriver.o
	g++ wcutility.o wcutilitydriver.o -o myWC

wcutility.o: wcutility.cpp
	g++ -c wcutility.cpp

wcutilitydriver.o: wcutilitydriver.cpp
	g++ -c wcutilitydriver.cpp

clean:
	rm *.o myWC
