# Ducklingua - Programming language

Ducklingua is a lightweight interpreted programming language built from scratch in C++.
It features a full pipeline from lexing → parsing → IR generation → virtual machine execution.

## Features

- Custom Lexer with indentation-based syntax
- Recursive descent Parser (AST-based)
- Register-based Intermediate Representation (IR)
- Stack-based Virtual Machine

Support for:
- Variables and expressions
- Conditionals (if, else)
- Loops (while, for)
- Functions (user-defined + native)
- Basic types: int, bool, string

Built-in standard library:
- print, printn
- input, inputInt
- toInt, toBool, toString

## Architecture

Source Code (.duck)<br>
↓<br>
Lexer<br>
↓<br>
Tokens<br>
↓<br>
Parser<br>
↓<br>
AST<br>
↓<br>
IR<br>
↓<br>
VM<br>
↓<br>
Execution<br>

## Usage

### Build:
g++ -std=c++17 *.cpp -o ducklingua

### Build in debug mode:
g++ -std=c++17 -DDEBUG *.cpp ducklingua

### Run:
./ducklingua

## Example code.duck

fun fib n;<br>
&nbsp;&nbsp;&nbsp;&nbsp;if n <= 1;<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;return n<br>
&nbsp;&nbsp;&nbsp;&nbsp;return fib(n - 1) + fib(n - 2)<br>

printn("Enter a number:")<br>
dec fibb = inputInt()

print("Your fibbonacci number is ")<br>
printn(fib(fibb))

## Still missing

- Arrays
- Objects
- Garbage collection
- Error recovery
- Closures
- Constant folding
- Improved error messages