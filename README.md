Hello, World!
=============

This project is a very simple "Hello, World!", that makes use of
[TinyCC](http://bellard.org/tcc/).

Compile `src/main.cc` and run it. It will compile `program.c` and run it
to show "Hello, world" !

How to Compile
--------------

Using the Gnu C++ compiler to build the main program:

    cd src/
    g++ main.cc -o hello-world
    cd ..

How to Run
----------

First, copy `program.c` to where the main program will be searching for it:

    mkdir /usr/share/hello-world
    cp src/program.c /usr/share/hello-world/

Then, run the main program:

    ./src/hello-world

*Warning: the Tiny C Compiler must be installed!*
