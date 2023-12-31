# System-programming

This repository houses C system programming implementations. Each Implementations
of different programming concepts. The files are organized in the include test and src folders.

## Overview

This repository serves as a C system programming implementations source 
implementations. Each implementation is accompanied by a set of files that 
make it easy to build, run, debug, and clean the project.

## Getting Started

* If you'd like to use one of the source files in this repository, follow these simple steps:

```shell

$ git clone https://github.com/YamtalDev/System-programming.git
$ cd "/test/"project_name"
$ make && make run

```

## The structure of the folder is:

```shell

├── System-programming/
│   ├── bin/
│   │   ├── executables/
│   │   ├── objects/
│   │   ├── shared_libs/
│   │   └── static_libs/
│   |
|   ├── include/
│   │   └── Header files
|   |
│   ├── src/
│   │   └── src files
|   |
│   ├── test/
│   │   ├── makefile
│   │   └──test file

```

### Inside the implementation folder `/test/"project_name"`, you'll find the following files:

- project_name_test.c: A test file for testing the implementation.
- Makefile: A Makefile to automate compilation, running, debugging, and cleaning.

### Inside the Include folder you'll find:

- project_name.h: The header file containing the necessary declarations.

### Inside the src folder you'll find:

- project_name.c: The C source file with the implementation.

## Usage

To compile, run, debug, or clean the project, you can use the provided Makefile 
with the following commands:

```shell
# Simple compilation
$ make
# Running the project
$ make run
# Debugging the project
$ make debug
# Deleting all the obj, exe, shared/static libs files
$ make clean 
# Checking valgrind on the project
$ make vlg 
# Release compilation with optimization -O3
$ make release

```
These simple commands streamline the development process and make it easy to work 
with each project in this repository.

## Contact

For any questions about the project:

### Name: Tal Aharon
### Email: tal.aharon.work@gmail.com