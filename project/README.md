# Argument Passing System

## Introduction

Argument Passing is a Linux-based C project that demonstrates how information can be passed to a program directly through the command line during execution.

The project uses the `argc` and `argv` parameters of the C `main()` function to receive, validate, and process command-line arguments. The system supports different arithmetic operations and provides appropriate error messages for invalid or missing inputs.

This project helps in understanding how the Linux shell communicates with a C program during process execution.

## Objectives

- To understand command-line argument passing in Linux.
- To implement `argc` and `argv` in C.
- To accept input directly from the Ubuntu terminal.
- To validate command-line arguments.
- To perform operations based on the provided arguments.
- To handle invalid and missing inputs.
- To understand basic Linux process execution and command-line interaction.

## Technologies Used

| Technology | Purpose |
|---|---|
| Ubuntu Linux | Operating environment |
| C | Programming language |
| GCC | C compiler |
| Linux Terminal | Program execution and testing |
| Make | Build automation |
| Git | Version control |
| GitHub | Project repository |

## System Architecture

```text
User
  |
  v
Ubuntu Terminal
  |
  v
Command-Line Arguments
  |
  v
argc and argv
  |
  v
Input Validation
  |
  v
Operation Selection
  |
  v
Data Processing
  |
  v
Result / Error Message
