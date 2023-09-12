CFLAGS = -Wall -g 

run: compile link
	./sample

compile: sample.cpp
	g++ $(CFLAGS) -c sample.cpp	

link: sample.o
	g++ $(CFLAGS) -o sample sample.o

push:
	git add .
	git commit -m "completed a few problems"
	git push

copy:
	cp template.cpp sample.cpp

clean:
	rm *.o sample	
