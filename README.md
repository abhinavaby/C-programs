#1 📐 Geometry Area Finder

A simple, interactive C program to calculate the area of common geometric shapes. This tool is perfect for beginners learning about functions and conditional logic in C.

## ✨ Features
- **Circle Area:** Calculates area using $\pi r^2$.
- **Square Area:** Calculates area using $side^2$.
- **Rectangle Area:** Calculates area using $length \times breadth$.
- **Input Validation:** Basic check for menu selection.

## 🚀 Getting Started

### Prerequisites
You need a C compiler installed on your system (such as `gcc`, `clang`, or `msvc`).

### Installation & Running
1. **Clone the repository:**
   ```bash
   git clone github.com




<h1>--------------------------------------------------------------------------------------------------------------------</h1>
#2 Celsius to Fahrenheit Converter

A simple C program that takes a temperature input in Celsius and converts it to Fahrenheit using a modular function.

## 🚀 Features
* **Modular Design:** Uses a separate function `temp()` for calculation.
* **Precision:** Uses `float` data types to handle decimal values.
* **User-Friendly:** Simple command-line interface for input and output.

## 🛠️ How to Run
1.  **Requirement:** Ensure you have a C compiler like [GCC](gcc.gnu.org) installed.
2.  **Compile:**
    ```bash
    gcc main.c -o converter
    ```
3.  **Execute:**
    ```bash
    ./converter
    ```

## 📝 Fixed Logic
In C, dividing two integers like `9/5` results in `1`. To get the correct factor of `1.8`, we use:
```c
float f = (c * (9.0 / 5.0)) + 32;
