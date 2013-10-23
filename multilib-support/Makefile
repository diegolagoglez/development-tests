
CC := g++
FLAGS := -O0 -g3

all: lib1 lib2 main1 main2

lib1:
	$(CC) $(FLAGS) -shared -fPIC -Wl,-soname=libversiontest.so.1 -o libversiontest.so.1 lib1.cpp
# 	
lib2:
	$(CC) $(FLAGS) -Wl,-soname=libversiontest.so.2 -o libversiontest.so.2  -fPIC -shared lib2.cpp
		
main1:
	$(CC) $(FLAGS) -o main1 main.cpp -L. libversiontest.so.1
	
main2:
	$(CC) $(FLAGS) -o main2 main.cpp -L. libversiontest.so.2
	
.PHONY: run clean

run1:
	LD_LIBRARY_PATH=$LD_LIBRARY_PATH:. ./main1
	
run2:
	LD_LIBRARY_PATH=$LD_LIBRARY_PATH:. ./main2
	
clean:
	rm *.o main1 main2 *.so
