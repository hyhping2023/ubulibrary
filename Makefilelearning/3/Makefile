cpp_1 := ${shell find ../1 -name *.cpp}
cpp_objs := ${patsubst ../%.cpp,./%.o,${cpp_1}}

../objs/*.o : ../1/*.cpp 
	@mkdir -p ${dir $@}
	@g++ -c $^ -o $@

compile : ../objs/*.o

debug:
	@echo ${cpp_1}
	@echo ${cpp_objs}

.PHONY :debug