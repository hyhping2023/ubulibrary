cpp_1:=$(shell find . -name "*.cpp")
cpp_objs := ${subst .cpp,.o,${cpp_1}}
cpp_objs2 := ${patsubst ./%.cpp,/home/%.o,${cpp_1}}

2/main.o : main.cpp
	g++ -c $^ -o $@

debug:
	@echo $(cpp_1)
	@echo ${cpp_objs}
	@echo ${cpp_objs2}

.PHONY : debug
