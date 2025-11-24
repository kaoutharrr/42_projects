# CPP00 Project

## Introduction
The **CPP00** project is designed to introduce beginners to the foundational concepts of C++ programming, specifically focusing on **Object-Oriented Programming (OOP)** and **encapsulation**. This project is part of the 42 curriculum and aims to help students understand the basic principles of C++.

## Objectives
- Understand the principles of Object-Oriented Programming.
- Learn about encapsulation and its significance in software design.
- Implement simple classes and objects in C++.

## Key Concepts

### Object-Oriented Programming (OOP)
OOP is a programming paradigm based on the concept of "objects," which can encapsulate data and behavior. The main goals of OOP are to promote code reusability, scalability, and improved maintainability through the following principles:

### 1. Encapsulation
- Encapsulation is the bundling of data (attributes) and methods (functions) that operate on that data within a single unit, known as a class.
- It restricts direct access to some components of an object, protecting the internal state of the object and preventing unintended interference and misuse.

### 2. Classes and Objects
- A class is a blueprint for creating objects. It defines the data and methods that the objects created from the class will have.
- An object is an instance of a class. When a class is instantiated, the object contains its own data and can use the methods defined by the class
- By using access modifiers (private, public, and protected), you can control the visibility of class members. For example:
  ```cpp
  class MyClass {
  private:
      int secretNumber;  // Private member

  public:
      void setNumber(int num) {
          secretNumber = num;  // Public method to set the private member
      }

      int getNumber() {
          return secretNumber;  // Public method to access the private member
      }
  };
  ```
###  Conclusion
The CPP00 project is an essential introduction to C++ programming, focusing on encapsulation and the basics of Object-Oriented Programming. By completing this project, you will gain a solid understanding of how to design and implement classes and objects effectively, forming a strong foundation for future programming challenges.
