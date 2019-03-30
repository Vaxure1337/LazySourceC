.PHONY: clean All

All:
	@echo "----------Building project:[ LazySourceC - Release ]----------"
	@cd "LazySourceC" && "$(MAKE)" -f  "LazySourceC.mk"
clean:
	@echo "----------Cleaning project:[ LazySourceC - Release ]----------"
	@cd "LazySourceC" && "$(MAKE)" -f  "LazySourceC.mk" clean
