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

```
Source Code (.duck)
        ↓
      Lexer
        ↓
      Tokens
        ↓
      Parser
        ↓
       AST
        ↓
       IR
        ↓
       VM
        ↓
    Execution
```

## Getting Started

### Build:
g++ -std=c++17 *.cpp -o ducklingua

### Run:
./ducklingua

## Tests
### Build in debug mode:
g++ -std=c++17 -DDEBUG *.cpp -o ducklingua

### Run in debug mode:
./ducklingua

## Example code.duck

```duck
fun fib n;
    if n <= 1;
        return n
    return fib(n - 1) + fib(n - 2)

printn("Enter a number:")
dec fibb = inputInt()

print("Your fibonacci number is ")
printn(fib(fibb))
```

## Still missing

- Arrays
- Objects
- Garbage collection
- Error recovery
- Closures
- Constant folding
- Improved error messages