# Password Generator

This is a simple password generator program written in C. It generates random passwords based on user input for the number of characters and the desired combination of characters.

## Features

- Generates random passwords with the specified number of characters.
- Provides different combinations of characters to choose from:
  - Alphabets & numbers
  - Alphabets & symbols
  - Numbers & symbols
  - All (recommended)
- Displays the generated password, chosen combination, and author's name.

## Getting Started

### Prerequisites

To compile and run the program, you need to have a C compiler installed on your system, such as GCC or Clang.

### Compilation

To compile the code, open a terminal or command prompt and navigate to the directory where the code is saved. Then, use the following command:

```
gcc password.c -o password_generator
```

### Running the Program

After successful compilation, run the program using the following command:

```
./password
```

## Usage

1. Upon running the program, you will be prompted to enter the number of characters for the password. It is recommended to use 12 or more characters.

2. Next, you will be presented with the available combination options, numbered from 1 to 4.

3. Choose a combination by entering the corresponding number.

4. If a valid combination is chosen, the program will generate a random password based on the specified combination and the number of characters.

5. The generated password, chosen combination, and author's name will be displayed on the screen.

## Contributing

Contributions to the project are welcome. If you have any suggestions, improvements, or bug fixes, please open an issue or submit a pull request.

## License

This project is licensed under the [MIT License](LICENSE).

## Acknowledgements

The password generator code was created by "MinightDev".

---

Feel free to customize and enhance this README.md file according to your needs, providing more details or instructions as necessary.
