.PHONY: clean All

All:
	@echo "----------Building project:[ dino - Debug ]----------"
	@cd "dino" && "$(MAKE)" -f  "dino.mk"
clean:
	@echo "----------Cleaning project:[ dino - Debug ]----------"
	@cd "dino" && "$(MAKE)" -f  "dino.mk" clean
