# chronos.h
Because "time" is bad and intuition is worst: Header_only timer/chrono for benchmark/optimization purpose

# Intro
Often I find myself confronted with questions relating to code optimization.  
What I've ultimately learned about those question is that my, or anybody, intuition about how the compile and the CPU would behave  
regarding a given line of code is **irremediably BAD** ⛔.  
So my final answer *[that will come after some generals advises as: (complexity, data structure) >> micro optimization)]*  
is that nothing is certain nor true before **measuring** ⚖️.  
  
That being said, many people (at 42 school) don't know how to easily measure their time performance,  
and will often end up doing the `time ./a.out` poop 💩.

⭐ The purpose of this repo is to address that issue the simple way ⭐.

# Usage

1. Clone the repo and add `chronos.h` to yours library.  
  exemple:  
  `git clone https://github.com/LesChats/chronos.h.git chronos && cp chronos/chronos.h includes/ && rm -rf chronos`
  ![alt text](https://github.com/LesChats/chronos.h/blob/master/exemple_image/clone.png)
2. Include `chronos.h` and add the `t_chronos` structure where you need to measure.  
  ![alt text](https://github.com/LesChats/chronos.h/blob/master/exemple_image/init.png)
3. Surround the 🔥 part of your code whit the `start_chronos` and `end_chronos` functions  
    hen display the elapsed time wherever you please using `get_diff`  
   exemple 1:  
   ![alt text](https://github.com/LesChats/chronos.h/blob/master/exemple_image/usage1.png)  
   exemple 2:  
   ![alt text](https://github.com/LesChats/chronos.h/blob/master/exemple_image/usage2.png)
4. Finaly execute your program and take note of the result in your terminal
   ![alt text](https://github.com/LesChats/chronos.h/blob/master/exemple_image/result.png)
# Advices
- Result elapsed time will differ at each launch of the executable because of the computer “noise”  
so it is recommended to launch and take note of the result several times. 
  
- The most meaningful result is the minimum elapsed time you find.  
  
- Do not take account of very small differences, they mostly noise.  
