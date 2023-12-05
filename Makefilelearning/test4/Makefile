
cpp_srcs := ${shell find src -name "*.cpp"}
cpp_objs :=${patsubst src/%.cpp,objs/%.o,${cpp_srcs}}
so_objs := ${filter-out objs/main.o,${cpp_objs}}

include_path :=/home/hyh/code/c++/test4/include
i_flag :=${include_path:%=-I%}

lib_path :=/home/hyh/code/c++/test4/lib

linking_libs := ddd
l_options := ${linking_libs:%=-l%}
L_options := ${lib_path:%=-L%}
r_options :=${lib_path:%=-Wl,-rpath=%}
linking_flags :=${l_options} ${L_options} ${r_options}

compile_options:= -g -O3 ${i_flag}

objs/%.o : src/%.cpp
	@mkdir -p ${dir $@}
	@g++ -c $^ -o $@ ${compile_options}

compile :${cpp_objs}

lib/libddd.so : ${so_objs}
	@mkdir -p ${dir $@}
	@g++ -shared $^ -o $@

dynamic : lib/libddd.so

workspace/exec : objs/main.o lib/libddd.so ${cpp_objs}
	@mkdir -p ${dir $@}
	@g++ $< -o $@ ${linking_flags}

run : workspace/exec
	@./$^

clean:
	@rm -rf objs/ workspace/

deep_clean :
	@rm -rf objs/ workspace/ lib/

debug:
	@echo ${dir /home/hyh/code/c++/test4/include}