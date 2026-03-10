#makefile

#컴파일러
CC = g++

#옵셤
CFLAGS = -Wall -O2 -g

SRCS = $(wildcard *.cpp)

# 확장자를 떼어내서 실행 파일 이름 목록 생성
TARGET = $(SRCS:.cpp=)

# 'make'만 쳤을 때 모든 실행 파일을 만들도록 설정
all:$(TARGET)

# 일반화된 규칙
# $@ : 타겟 이름
# $< : 첫 번째 의존성 파일

%: %.cpp
	$(CC) $(CFLAGS) -o $@ $<

#파일 삭제
clean:
	rm -f $(TARGET)