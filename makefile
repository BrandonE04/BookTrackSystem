bookTrackingSystem: bookTrackingSystem.o book.h
	g++ -o bookTrackingSystem bookTrackingSystem.cpp

clean:
	rm *.o
