# HPC Tutorial-0
## 📌 Project Overview
This repository contains a performance engineering analysis of sorting algorithms applied to a simulated weather dataset of **18,250 daily temperature records** (approx. 50 years of data). 

The primary objective is to investigate application performance, identify bottlenecks, and measure the impact of GCC compiler optimization levels (`-O0`, `-O2`, `-O3`) on hardware-level execution using Linux performance analysis tools.

---

## 🏗️ Repository Structure
```text
Lab01/
│── mysort.c                  # Core application (Bubble Sort & Quick Sort)
│── README.md                 # Project documentation
│── performance analysis.png  # Overview of performance results
│── myreport.txt              # gprof output (Baseline -O0)
│── report_O2.txt             # gprof output (Optimization -O2)
│── myreport_03               # gprof output (Optimization -O3)
│── Compliation level-1.png   # Terminal capture for Baseline compilation
│── Compliation level-2.png   # Terminal capture for Level 2 optimization
└── Compliation level-3.png   # Terminal capture for Level 3 optimization
