# pig_latin
A C++ command line translator for pig latin.

Ostensibly public proof that I can code in C++.

*In my junior year of high school I took an introductory level C++ class. The final project was to create a program that could take in phrases and output them as pig latin. The assignment ended up being extra credit, and despite spending several extra class periods trying to finish it I was unable to wrap my brain around strtok and complete the project. The pig latin translator appeared to have gotten the better of me.*

*Fast forward 8 years, 1 college degree, and 2 years in industry later and I have conceived of a solution. Read it and weep.*

*strtok is the tool of the devil.*

Game plan for further updates and exercises (tracking via Github issues where relevant):
1. Create a strtok version of the same process
2. Create a new strtok translator class much like the current implementation
3. Create a potentially abstract parent (TBD) class that both derive from
4. Take command line input and determine which version of the translator to instantiate accordingly

Other stuff to try:
* Basic makefile to brush up since I haven't made one from scratch in years
* Unit testing just for the sake of thoroughness?
* Other command line arguments, ex. -h
* Run through and add potentially unnecessary C++11 embellishments just to play with them