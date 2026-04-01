bookTrackingSystem: bookTrackingSystem.o book.h library.h
	g++ -o bookTrackingSystem bookTrackingSystem.cpp

clean:
	rm *.o
