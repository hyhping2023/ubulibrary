
cpp_srcs := ${shell find src -name "*.cpp"}
cpp_objs :=${patsubst src/%.cpp,objs/%.o,${cpp_srcs}}
del = objs/ workspace/

include_paths := /home/hyh/code/c++/test2/include

#i_flag :=${include_paths:%=-I%}
i_flag := ${foreach item,${include_paths},-I${item}}

compile_options := -g -O3 ${i_flag}

.PHONY : 

objs/%.o : src/%.cpp
	@mkdir -p ${dir $@}
	@g++ -c $^ -o $@ ${compile_options}

objects : ${cpp_objs}

workspace/exec : ${cpp_objs}
	@mkdir -p ${dir $@}
	@g++ $^ -o $@ 

run : workspace/exec
	@./$^

clean : 
	@rm -rf ${del}

debug :
	@echo ${cpp_srcs}
	@echo ${cpp_objs}
	@echo ${i_flag}