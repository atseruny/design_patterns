PATTERNS := builder

.PHONY: all run clean fclean re $(PATTERNS)

all: $(PATTERNS)

$(PATTERNS):
	$(MAKE) -C $@

run clean fclean:
	@set -e; for pattern in $(PATTERNS); do $(MAKE) -C $$pattern $@; done

re: fclean
	$(MAKE) all
