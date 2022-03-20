# Chapter 2 code

## Section 2.2.2: Understand `extern` keyword

We create a global variable and let functions defined in different files to change the global variable. Run code by

```
./understand_extern.sh
```

## Section 2.3: Reference and Pointer

The most difference between reference and pointer is "there is no way to make a reference refer to a different object". 

Run code for understanding reference:

```
./reference.sh
```

Run code for understanding pointer:

```
./pointer.sh
```

## Section 2.4: Const

The basic concept of `const` is easy, but it becomes mess when it accompanies with other things, like reference, pointer. Read code in "understand_const.cc" can give you a sense of using const. Run code by

```
./understand_const.sh
```

## Section 2.5: Type alias

This section not only cover type alias but also `auto` and `decltype`. However, I don't know how to create a meaningful program to explain these two concepts. So code in "understand_types.cc" only show how to use `using` and `typedef` to create type alias. Run code by 

```
make understand_types
```