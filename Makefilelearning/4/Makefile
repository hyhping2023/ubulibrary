libs :=${shell find /usr/lib -name "lib*"}
libs1 := ${notdir ${libs}}
libs2 := ${filter %.so,${libs1}}
libs3 =${filter %.a,${libs1}}
libs33 =${basename ${libs3}}
libs333=${subst lib,,${libs33}}

debug:
	@echo ${libs333}

.PHONY : debug