#makefile

# 컴파일러
CC = g++

# 수정: -Wall (대문자), -O2 (숫자 0이 아닌 알파벳 O)
CFLAGS = -Wall -O2 -g
LDLIBS = -lgpiod -lsqlite3

# 수정: wildcard 뒤에 한 칸 띄우기
SRCS = $(wildcard *.cpp)

# 확장자를 떼어내서 실행 파일 이름 목록 생성
TARGETS = $(SRCS:.cpp=)

# 기본 빌드 규칙
all: $(TARGETS)

# 일반화된 규칙
# $@ : 타겟 이름
# $< : 첫 번째 의존성 파일
%: %.cpp
	$(CC) $(CFLAGS) -o $@ $< $(LDLIBS)

# 파일 삭제
clean:
	rm -f $(TARGETS)