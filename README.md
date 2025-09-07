# My C++ Project

[![C++ Build and Test](https://github.com/yourusername/your-repo-name/actions/workflows/ci.yml/badge.svg)](https://github.com/yourusername/your-repo-name/actions/workflows/ci.yml)

A professional C++ project with automated CI/CD using GitHub Actions.

## Features

- Calculator with basic and advanced mathematical operations
- Utility functions for string manipulation, math operations, and file handling
- Comprehensive unit tests
- Automated CI/CD with GitHub Actions

## Building

```bash
mkdir build
cd build
cmake ..
make
```

## Running

```bash
./MyCppProject
```

## Testing

```bash
cd build
ctest --output-on-failure
```

## Project Structure

- `src/` - Source code files
- `include/` - Header files
- `tests/` - Unit tests
- `.github/workflows/` - GitHub Actions CI/CD configuration

## Requirements

- CMake 3.10+
- C++17 compatible compiler
- Make or Ninja build system
```

## Setup Instructions

1. Create a new repository on GitHub
2. Clone it to your local machine
3. Create all the files above with their respective content
4. Commit and push to GitHub:

```bash
git add .
git commit -m "Initial project setup with CI/CD"
git push origin main


…or create a new repository on the command line
echo "# cicdpipelinedemo" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/copilot25user13/cicdpipelinedemo.git
git push -u origin main
…or push an existing repository from the command line
git remote add origin https://github.com/copilot25user13/cicdpipelinedemo.git
git branch -M main
git push -u origin main





Complete Project Structure:

Professional C++ code with Calculator and Utils classes
Comprehensive unit tests
GitHub Actions CI/CD workflow
All configuration files (.gitignore, CMakeLists.txt, README.md)

Features:

Calculator class: Basic math operations (add, subtract, multiply, divide) and advanced operations (power, sqrt)
Utils namespace: String manipulation, math utilities, file operations
Unit Tests: Complete test coverage with error handling tests
GitHub Actions: Automated build and test on every push/PR

Professional Setup:

Proper C++17 standards
Error handling with exceptions
Memory-safe code
Comprehensive documentation

Quick Setup:

Create new GitHub repo
Clone locally
Copy all the code from the artifact above into respective files
Commit and push:
bashgit add .
git commit -m "Initial project setup"
git push origin main

Watch it build automatically in the Actions tab!

The project will compile, run tests, and create build artifacts. You can expand this foundation by adding more features, different compilers, or deployment steps as needed.


cd build
cmake ..
cmake --build .

go inside build: to test the main output
.\Debug\MyCppProject.exe

go inside build: to test the test output
test cases to run

1. .\Debug\test_calculator.exe
2. .\Debug\test_utils.exe

all test cases at once
3. ctest -C Debug