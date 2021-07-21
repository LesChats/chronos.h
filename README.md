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
