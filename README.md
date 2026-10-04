# Design patterns in C++

Each pattern lives in its own directory with public headers, implementations,
and a runnable example kept separate.

```text
.
├── Makefile
├── README.md
└── builder/
    ├── .gitignore
    ├── Makefile
    ├── include/
    │   ├── Burger.h
    │   └── BurgerBuilder.h
    ├── src/
    │   ├── Burger.cpp
    │   └── BurgerBuilder.cpp
    └── examples/
        └── main.cpp
```

## Build and run

Requires Make and a C++17 compiler.

```sh
make          # Build all patterns
make run      # Build and run all examples
make clean    # Remove object and dependency files
make fclean   # Also remove executables
```

To work on a single pattern, use `make -C builder` or `make -C builder run`.
Generated objects and dependencies live in `builder/build/`; the executable
is `builder/burger`. Both are ignored by Git.

## Adding a pattern

Create a directory following the same `include/`, `src/`, and `examples/`
layout, give it a Makefile with the same targets and a `.gitignore` for its
build outputs, and add its directory name to `PATTERNS` in the root Makefile.
