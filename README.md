# 42 Cursus - Project: Libft
<img src="https://game.42sp.org.br/static/assets/achievements/libfte.png" alt="Libft">
The purpose of this project is to code a C library regrouping usual functions that I will be allowed to use in all my other projects at 42 São Paulo.

### Instructions to use

The library is written in C language and thus needs the **`gcc` compiler** and some standard **C libraries** to run.

**1. Compiling the library**

To compile the library, run:

```shell
$ cd path/to/libft && make
```

**2. Using it in your code**

To use the library functions in your code, simply include its header:

```C
#include "libft.h"
```

and, when compiling your code, add the required flags:

```shell
-lft -L path/to/libft.a -I path/to/libft.h
```

It is a simple way to include original functions and understand how they work in practice. :)