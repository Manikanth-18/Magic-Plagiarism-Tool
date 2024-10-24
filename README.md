# Magic-Plagiarism-Tool

# Magic Plagiarism Tool

## Overview
The **Magic Plagiarism Tool** is a C++ program that allows dynamic text comparison and manipulation. It performs operations like calculating matching percentages, finding unique words, and identifying the smallest/largest words between two sets of strings, `hello.txt` and `bye.txt`.

## Features
- Matching percentage between two sets of strings
- Word count in both sets
- Most frequent word in a text
- Smallest and largest words
- Unique words in each set
- Magic figure: words of a specific length

## How to Run
1. Compile the program:
    ```bash
    g++ -o magic_tool magic_plagiarism_tool.cpp
    ```
2. Run the executable:
    ```bash
    ./magic_tool
    ```
3. Follow the on-screen instructions to input text. 
    - Enter strings one by one. Type `DONE` to stop entering strings.
    - Choose from the available menu options to perform different operations.

## Menu Options
1. **Matching Percentage**: Calculates the percentage of matching words between the two sets.
2. **Word Count**: Displays the number of words in each text.
3. **Most Frequent Word**: Shows the most frequent word in `hello.txt`.
4. **Smallest Word**: Finds the smallest word in both sets.
5. **Largest Word**: Finds the largest word in both sets.
6. **Difference (BYE.TXT - HELLO.TXT)**: Displays words in `bye.txt` but not in `hello.txt`.
7. **Difference (HELLO.TXT - BYE.TXT)**: Displays words in `hello.txt` but not in `bye.txt`.
8. **Magic Figure**: Counts words of a specific length in both sets.
9. **Exit**: Exits the program.

## Input
You can try with any string input.

