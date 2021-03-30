all:
	g++ ./src/testa_romano.cpp ./src/romano.cpp -o testaRomanoExe

run:
	./testaRomanoExe

clean:
	rm -rf ./testaRomanoExe
