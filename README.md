# Monty

## Overview
Monty 0.98 is a scripting language that is first compiled into Monty byte codes
(Just like Python).
It relies on a unique stack, with specific instructions to manipulate it.
The goal of this project is to create an interpreter for Monty ByteCodes files.

## Usage
### Rules
1. Files containing Monty byte codes usually have the **`.m`** extension.
Most of the industry uses this standard but it is not required by the
specification of the language.

2. There is not more than one instruction per line. There can be any number of
spaces before or after the opcode and its argument.

3. Monty byte code files can contain blank lines (empty or made of spaces only,
and any additional text after the opcode or its required argument is not
taken into account.

4. The monty program runs the bytecodes line by line and stop if either:
   * it executed properly every line of the file
   * it finds an error in the file
   * an error occured

### Commands
The following OPcode are supported:
`add`, `mul`, `div`, `sub`, `rotr`, `stack`, `queue`, `rotl`, `pstr`, `pchar`, `mod`, `push`, `pop`, `swap`, `pint`, `pall`, `nop`

## Testing
1. Grant execute permission to compile.sh through:
```bash
chmod u+x compile.sh
```
2. Run `./compile.sh` from the command line to generate the dynamic library `libmonty.so`
3. Finally run the following commands:
```bash
cd test 
gcc *.c -L . -o test
./test
```

## Authors
* [Leo Emaxie](https://github.com/leoemaxie)
