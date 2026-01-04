<h1> 1. 📐 Geometry Area Finder</h1>

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



<img src="https://user-images.githubusercontent.com/74038190/212284100-561aa473-3905-4a80-b561-0d28506553ee.gif" width="700">





<h1>#2 Celsius to Fahrenheit Converter</h1>

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

<img src="https://user-images.githubusercontent.com/74038190/212284100-561aa473-3905-4a80-b561-0d28506553ee.gif" width="700">

<h1>#3 Student Marks Percentage Calculator</h1>

A simple and efficient C program to calculate the average percentage of a student based on marks obtained in three subjects: Science, Maths, and Sanskrit.

## 📋 Project Overview
This project demonstrates the use of:
* **Functions:** A dedicated `percentage()` function to handle logic.
* **Floating Point Precision:** Formatting output to 2 decimal places for accuracy.
* **User Input:** interactive data collection using `scanf`.

## 🧮 Calculation Logic
The program assumes each subject is out of 100 marks. The formula used is:
```text
Percentage = ((Science + Maths + Sanskrit) / 300) * 100
```
<img src="https://user-images.githubusercontent.com/74038190/212284100-561aa473-3905-4a80-b561-0d28506553ee.gif" width="700">


<h1>#4 Fibonacci Sequence Generator in C</h1>
A lightweight C program that calculates and prints the Fibonacci sequence up to a user-defined limit.<br>
🚀 How It Works <br>
The program uses a simple iterative approach with three integer variables (b, c, and d) to calculate the next number in the sequence by adding the two preceding ones.
<br>
<!-- Save this file as README.md on GitHub -->
<img src="https://user-images.githubusercontent.com/74038190/212284100-561aa473-3905-4a80-b561-0d28506553ee.gif" width="700">

<div >
  <h1>#5📍C Pointers </h1>
  <p>A simple exploration of memory addresses and pointer dereferencing in C.</p>
</div>

<hr />

### 📝 Description
This program demonstrates the relationship between variables, their memory addresses, and pointer variables. It showcases how to:
*   Assign an address to a pointer using the `&` operator.
*   Access the value at a memory address using the `*` operator (dereferencing).
*   Print memory addresses using the `%p` format specifier.
   <br>
<img src="https://user-images.githubusercontent.com/74038190/212284100-561aa473-3905-4a80-b561-0d28506553ee.gif" width="700">
<div>
  <h1>#6 📍C Pointer Demonstration</h1>
  <p><em>A fundamental exploration of memory addresses and dereferencing in C.</em></p>
</div>

<hr />

<h3>📑 Overview</h3>
<p>
  This repository contains a concise C program that demonstrates the relationship between a variable, its physical memory address, and a pointer. It highlights two different ways to access a value residing in memory.
</p>



<h3>🔬 Explanation</h3>
<ul>
  <li><strong>The Pointer (<code>*ptr</code>):</strong> We store the memory address of <code>age</code> inside <code>ptr</code>. By calling <code>*ptr</code>, we "dereference" it to see the value at that location.</li>
  <li><strong>The Address-Of Operator (<code>&</code>):</strong> This retrieves the specific hex code representing where the variable lives on the stack.</li>
  <li><strong>The Result:</strong> Both print statements yield <code>22</code>, proving that different paths can lead to the same memory data.</li>
</ul>

<h3>🚀 How to Run</h3>
<ol>
  <li>Clone the repo: <code>git clone github.com</code></li>
  <li>Compile: <code>gcc main.c -o pointer_demo</code></li>
  <li>Execute: <code>./pointer_demo</code></li>
</ol>




<br>
<img src="https://user-images.githubusercontent.com/74038190/212284100-561aa473-3905-4a80-b561-0d28506553ee.gif" width="700">
<div >
  <h1>#7 🧬 C Double Pointer Exploration</h1>
  <p><em>Demonstrating multi-level memory addressing in C.</em></p>
</div>

<hr />

<h3>📝 Overview</h3>
<p>
  This program demonstrates the concept of a <strong>pointer to a pointer</strong> (double pointer). It illustrates how memory can be accessed indirectly through multiple levels of referencing, a fundamental concept for managing dynamic arrays and complex data structures.
</p>

<h3>💻 Source Code</h3>
<pre>
<code>
#include &lt;stdio.h&gt;

int main() {
    int i = 5;            // The base value
    int *ptr = &i;        // Single pointer: Stores address of i
    int **pptr = &ptr;    // Double pointer: Stores address of ptr

    printf("value of i from pointer to pointer: %d\n", **pptr);
    
    return 0;
}
</code>
</pre>

<h3>🔬 Key Concepts</h3>
<ul>
  <li><strong><code>int i = 5;</code></strong>: A standard integer variable stored at a specific memory location.</li>
  <li><strong><code>int *ptr = &i;</code></strong>: A single pointer that "points" to the address of <code>i</code>.</li>
  <li><strong><code>int **pptr = &ptr;</code></strong>: A double pointer (pointer to a pointer) that "points" to the address of the pointer <code>ptr</code>.</li>
  <li><strong>Double Dereference (<code>**pptr</code>)</strong>: The first <code>*</code> retrieves the address stored in <code>ptr</code>, and the second <code>*</code> retrieves the actual integer value <code>5</code>.</li>
</ul>

<h3>🚀 Usage</h3>
<ol>
  <li>Clone this repository.</li>
  <li>Compile using a standard C compiler: <code>gcc main.c -o double_pointer</code></li>
  <li>Run the executable: <code>./double_pointer</code></li>
</ol>
<br>
<img src="https://user-images.githubusercontent.com/74038190/212284100-561aa473-3905-4a80-b561-0d28506553ee.gif" width="700">
<div ">
  <h1>#8 🔄 Integer Swap Program in C</h1>
 
  

</div>



<h3>📖 Project Description</h3>
<p>
  This project demonstrates how to swap two integer values using a custom function. Unlike a standard "Call by Value" approach, this program uses <strong>pointers</strong> to directly manipulate memory addresses, ensuring the changes persist after the function call.
</p>


</pre>

<h3>🔬 How It Works</h3>
<ul>
  <li><strong>Pass by Reference:</strong> We pass the <em>addresses</em> (<code>&a</code> and <code>&b</code>) to the <code>swap</code> function.</li>
  <li><strong>Dereferencing:</strong> Inside the function, we use the <code>*</code> operator to access and modify the actual values stored at those addresses.</li>
  <li><strong>Temporary Variable:</strong> A <code>temp</code> variable is used to hold one value so it isn't overwritten during the exchange.</li>
</ul>

<h3>🚀 How to Run (2026 Edition)</h3>
<ol>
  <li>Ensure you have a C compiler installed (like <a href="gcc.gnu.org">GCC</a>).</li>
  <li>Save the code as <code>swap.c</code>.</li>
  <li>Open your terminal and run:
    <pre><code>gcc swap.c -o swap_demo && ./swap_demo</code></pre>
  </li>
 <br>
 <img src="https://user-images.githubusercontent.com/74038190/212284100-561aa473-3905-4a80-b561-0d28506553ee.gif" width="700">
 <div >
  <h1>#9 🔢 C Pointer Arithmetic: Sum, Product & Average</h1>
  
 
</div>

<hr />

<h3>📝 Program Description</h3>
<p>
  This program calculates the <strong>Sum</strong>, <strong>Product</strong>, and <strong>Average</strong> of three user-provided integers. It emphasizes the use of <strong>pointers</strong> (<code>int*</code>) to pass variables to modular functions, allowing for direct memory access and cleaner logic separation.
</p>



<h3>🔬 Implementation Details</h3>
<ul>
  <li><strong>Modular Design:</strong> Calculations for sum and product are offloaded to dedicated functions for better readability.</li>
  <li><strong>Pass-by-Reference:</strong> By passing addresses (e.g., <code>&a</code>), the functions use <code>*a</code> to access the original data without creating redundant copies in memory.</li>
  <li><strong>Precision:</strong> The average is calculated using <code>3.0</code> to ensure floating-point precision, preventing integer truncation.</li>
</ul>

<h3>🚀 How to Execute</h3>
<ol>
  <li>Clone this repository or copy the code into a file named <code>arithmetic.c</code>.</li>
  <li>Compile using a standard C compiler:
    <pre><code>gcc arithmetic.c -o arithmetic</code></pre>
  </li>
  <li>Run the program:
    <pre><code>./arithmetic</code></pre>
  </li>
</ol>
<br>
<img src="https://user-images.githubusercontent.com/74038190/212284100-561aa473-3905-4a80-b561-0d28506553ee.gif" width="700">
<div >
  <h1>#10 🌓 Call by Value vs. Call by Reference</h1>
 

<hr />

<h3>📘 Concept Overview</h3>
<p>
  This program demonstrates how C handles function arguments. It provides a side-by-side comparison of two fundamental behaviors:
</p>

<ul>
  <li><strong>Call by Value:</strong> A copy of the variable is passed. The original variable remains untouched outside the function.</li>
  <li><strong>Call by Reference:</strong> The actual memory address is passed. Any changes made inside the function directly affect the original variable.</li>
</ul>


<h3>🔬 Output Analysis</h3>
<table border="1" width="100%">
  <tr>
    <th align="left">Method</th>
    <th align="left">Terminal Output</th>
    <th align="left">Effect on Original Variable</th>
  </tr>
  <tr>
    <td><strong>Call by Value</strong></td>
    <td><code>square: 25</code></td>
    <td><strong>No Change</strong> (Variable remains 5)</td>
  </tr>
  <tr>
    <td><strong>Call by Reference</strong></td>
    <td><code>_square: 25</code></td>
    <td><strong>Permanent Change</strong> (Variable becomes 25)</td>
  </tr>
</table>

<h3>🚀 Getting Started (2026)</h3>
<p>To run this demonstration in your local environment:</p>
<pre><code>
# Compile the program
gcc -o comparison main.c

# Run the executable
./comparison
</code></pre>

<hr />










