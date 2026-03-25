# 📊 Student Marksheet & Department System (C++)

## 📌 Description

This is a console-based C++ program that generates a complete student marksheet.
It takes student details, calculates percentage, and suggests departments based on performance and selected major.

---

## 🎯 Features

* 👤 Input student details (Name, Roll No, Major)
* 📚 Different subjects based on major:

  * Pre-Engineering
  * Pre-Medical
  * Commerce
* 🧮 Calculate total marks and percentage
* 🎓 Suggest departments based on percentage
* 🖨️ Print full formatted marksheet
* ⚠️ Input validation for marks

---

## 🧠 How It Works

1. User enters personal information
2. Selects major (E / M / C)
3. Inputs marks of subjects
4. Program calculates:

   * Total marks
   * Percentage
5. Based on result → departments are suggested
6. User can print full marksheet

---

## 🎓 Department Selection Logic

* High percentage → more department options
* Medium percentage → limited options
* Low percentage → not eligible

---

## ▶️ How to Run

### 🔹 Using g++

```bash id="run2"
g++ marksheet.cpp -o marksheet
./marksheet
```

### 🔹 Using IDE

* Open in Dev C++ / CodeBlocks / VS Code
* Compile and run

---

## 🛠️ Technologies Used

* C++
* Standard Library (`iostream`, `iomanip`, `cstdlib`)

---

## 💡 Concepts Used

* Arrays
* Conditional statements (if/else, switch)
* Loops
* Functions
* Input validation
* Formatting output (`iomanip`)

---

## 📂 Project Structure

* `marksheet.cpp` → Main source code

---

## 🚀 Future Improvements

* Add grading system (A, B, C)
* Save marksheet to file
* Improve UI design
* Remove `goto` (use loops instead)

---

## 👨‍💻 Author

Faraz Hussain

---

⭐ *Learning step by step towards becoming a Software Engineer*
