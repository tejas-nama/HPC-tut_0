# HPC-tut_0
# ⚡ Performance Profiling and Optimization Lab

![C](https://img.shields.io/badge/Language-C-blue.svg)
![Compiler](https://img.shields.io/badge/Compiler-GCC-orange.svg)
![OS](https://img.shields.io/badge/OS-Linux-yellow.svg)
![Tools](https://img.shields.io/badge/Tools-GPROF%20%7C%20PERF-lightgrey.svg)

## 📌 Project Overview
This repository contains a performance engineering analysis of sorting algorithms applied to a simulated weather dataset of **18,250 daily temperature records** (approx. 50 years of data). 

The primary objective is to investigate application performance, identify bottlenecks, and measure the impact of GCC compiler optimization levels (`-O0`, `-O2`, `-O3`) on hardware-level execution using Linux performance analysis tools.

---

## 🏗️ Repository Structure
```text
Lab01/
│── mysort.c          # Core application (Bubble Sort & Quick Sort)
│── README.md         # Project documentation
│── report.pdf        # Detailed analysis and answers to lab questions
│── myreport.txt      # gprof output (Baseline -O0)
│── report_O2.txt     # gprof output (Optimization -O2)
│── report_O3.txt     # gprof output (Optimization -O3)
└── screenshots/      # Terminal captures of time and perf executions
