define run_program
	g++ --std=c++17 $(1).cc -o $(1)
	./$(1)
	rm $(1)
endef

understand_types:
	$(call run_program,"understand_types")

understand_const:
	$(call run_program,"understand_const")

pointer:
	$(call run_program,"pointer")

reference:
	$(call run_program,"reference")

understand_extern:
	$(call run_program,"understand_extern")