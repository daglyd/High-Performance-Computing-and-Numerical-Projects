all: compile run 

compile: compile_1b compile_1c 

run: run_1b

compile_1b:
	gcc src/exer1b.c -I include -o bin/exer1b.exe 
run_1b:
	./bin/exer1b.exe 

1c: compile_1c run_1c 
compile_1c:
	gcc src/exer1c.c -I include -o bin/exer1c.exe 
run_1c:
	./bin/exer1c.exe 
