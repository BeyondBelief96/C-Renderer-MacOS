build:
	arch -x86_64 gcc -Wall -Wcomment -std=c99 ./src/*.c -I include -L lib -l SDL2 -o renderer

run:
	./renderer 

clean:
	rm renderer

	