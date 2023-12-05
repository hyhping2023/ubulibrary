cpp_srcs := ${subst src/,,${shell find src -name "*.cpp"}}
cpp_i := ${patsubst %.cpp,src/%.i,${cpp_srcs}}
cpp_s := ${patsubst %.cpp,src/%.s,${cpp_srcs}}
cpp_objs :=${patsubst %.cpp,objs/%.o,${cpp_srcs}}
del := .i .s
del :=${del:%=./src/*%}
file := objs/ workspace/
del+=${file}

.PHONY : preprocess assemble objects RUN

src/%.i : src/%.cpp
	@g++ -E $^ -o $@

src/%.s : src/%.cpp
	@g++ -S $^ -o $@

objs/%.o :src/%.cpp
	@mkdir -p ${dir ${cpp_objs}}
	@g++ -c $^ -o $@

preprocess : ${cpp_i}

assemble : ${cpp_s}

objects : ${cpp_objs}

workspace/exec : ${cpp_objs}
	@mkdir -p ${dir $@}
	@g++ $^ -o $@

RUN : workspace/exec
	@./$^

debug :
	@echo ${cpp_objs}

clean :
	@rm -rf ${del}
