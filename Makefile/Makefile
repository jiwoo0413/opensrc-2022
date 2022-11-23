CC = gcc # 컴파일러 선택
CFLAGS = -c -o3 -Wall # 컴파일러 옵션
LDFLAGS = # 링커 옵션
all: hello myprog
hello: hello.o
	$(CC) $< -o $@ # $<는 전제조건 (hello.o) $@는 대상의 이름 (hello)
hello.o: hello.c
	$(CC) $(CFLAGS) $< -o $@ # $<는? $@는?
myprog: myprog.o
	$(CC) $(LDFLAGS) $< -o $@ # $<는? $@는?
myprog.o: myprog.c
	$(CC) $(CFLAGS) $< -o $@ # $<는? $@는?
clean:
	rm -rf *.o hello myprog


