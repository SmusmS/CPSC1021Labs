all: hospitalCharges.out

run: hospitalCharges.out
	./hospitalCharges.out

hospitalCharges.out:	hospitalCharges.cpp	validateUserInput.cpp	calcTotalCharges.cpp
	g++ -Wall hospitalCharges.cpp validateUserInput.cpp calcTotalCharges.cpp -o hospitalCharges.out

clean:
	rm -f hospitalCharges.out