
lib_src := ${filter-out src/main.cpp,${shell find src -name "*.cpp"}}
lib_objs := ${patsubst src/%.cpp,objs/%.o,${lib_src}}

include_path := ./include

library_path := ./lib

linking_libs :=xxx

i_flag := ${include_path:%=-I%}
l_options := ${linking_libs:%=-l%}
L_options :=${library_path:%=-L%}
linking_flags := ${l_options} ${L_options}

compile_options := -g -O3 -std=c++11 ${i_flag} 

.PHONY :run clean

#============lib静态编译=========
objs/%.o : src/%.cpp
	@mkdir -p ${dir $@}
	@g++ -c $^ -o $@ ${compile_options}

lib/libxxx.a : ${lib_objs}
	@mkdir -p ${dir $@}
	@ar -r $@ $^

static_lib :lib/libxxx.a

#============lib链接============
objs/main.o : src/main.cpp
	@mkdir -p ${dir $@}
	@g++ -c $^ -o $@ ${compile_options}

workspace/exec : objs/main.o lib/libxxx.a
	@mkdir -p ${dir $@}
	@g++ $^ -o $@ ${linking_flags}

run : workspace/exec
	@./$^

debug :
	@echo ${lib_objs}

clean :
	@rm -rf objs/ workspace/

deepclean :
	@rm -rf objs/ lib/ workspace/