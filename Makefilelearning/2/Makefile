include_path := ~/ \
                /

libs :=

include_path := ${foreach item,${include_path},-L${item}}

I_flag :=${include_path:%=-I%}

debug:
	@echo ${include_path}
	@echo ${I_flag}