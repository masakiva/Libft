# Libft

Libft stands for "42 (forty-two) library", it is the first project I made in 42 school.
This library is written in C and contains implementations of common data structures and algorithms.
Here is an overview of the different parts:
- `part_1`: copies of functions of the standard C library, mostly for string manipulation.
- `part_2`: functions not included in the standard C library, here mostly about string manipulation, using `malloc()` and `write()`.
- `bonus`: functions for chained list management.
- `custom`: other functions I added by myself (not required by the subject) because I found them useful for my other projects.

### How to use

To get started with using the library, you need to first clone the repository:

```bash
git clone https://github.com/masakiva/libft.git
```

You can then build the library by running the following commands:

```bash
cd libft
make
```

This will generate a `libft.a` file, which you can link to your projects.

Also, `make bonus` will include the bonus part in the library, and `make custom` will include the bonus *and* the custom parts.

Once you get the `libft.a` file, you can link it to your program like this, for example:
```bash
clang -L. [your_program_files.c] -lft
```

You can find the prototypes of the functions in the header file `libft.h`.
