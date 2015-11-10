# SkystonePractice

This is a practice assignment for programmers in Project Skystone. It is intended to get programmers used to using C++ and git/GitHub. 

## Background
Work with the other programmers in the group to destroy the Pillar of Doom!

## Requirements 
In the <code>main()</code> function there is a <code>PillarOfDoom</code> object, initialized with 1000hp. Also in <code>main()</code> there is a group of <code>programmers</code> (<code>std::vector<Programmer*></code>). To complete this assignment you must:

1) Write a class called <code>{YOURNAME}Programmer</code> that inherits from <code>Programmer</code>. For the remainder of this section <code>{YOURNAME}</code> will refer to your first name. <code>{YOURNAME}</code> for me will be <code>Kevin</code> so <code>{YOURNAME}Programmer</code> will be called <code>KevinProgrammer</code>.

  - Write a proper include guard in your header 
  - Define your constructor to initialize the protected member variable <code>name_</code> to a string with <code>{YOURNAME}</code>. You may need to call <code>Programmer</code>'s constructor inside of yours. 
  - Define your destructor
  - Define the function <code>damagePillar</code> with the following specification (no hard-coding please):
    - Aaron: Accumulate the character values in name_. The values of vowels are worth 3x, else letters are worth 1x. The accumulation/10 (integer divide by 10) is the damage you do. 
    - Christian: Sum the character values in name_. Take the 8 least significant bits of the sum, flip them, and use the resulting number (from those 8 bits) as the amount of damage you do to the pillar.
    - Harvey: Create a local variable <code>x</code>. For each <code>i</code>th character in <code>name_</code>, if <code>i</code> is even, add the character's value to <code>x</code>. If <code>i</code> is odd, subtract the character's value from <code>x</code>. The absolute value of <code>x</code> is the damage you do to the pillar. 
    - Paxton: Sum the character values in name_ and mod(%) the sum by 200. (Get damaged capped l0l). The remaining value is the damage you do to the pillar. Define 200 as a static const member. 
  - <code>virtual</code> methods of <code>Programmer</code> should be stated as <code>virtual</code> in your header. 
  
2) Edit main.cpp
  - DO NOT PUSH TO GIT IF ANOTHER PROGRAMMER HAS MESSED WITH <code>MAIN.CPP</code>, IT CAN CREATE MERGE CONFLICTS. FIND A WAY TO COORDINATE THIS. 
  - In the space specified, <code>include</code> your inherited class from part 1
  - In the space specified, Add a <code>new</code>'d instance of your class to the the <code>programmers</code> vector. Use <code>vector.push_back()</code>
  - In the space specified, <code>delete</code> your <code>new</code>'d object.
  - DO NOT CHANGE ANY OTHER CODE OUTSIDE OF WHAT IS SPECIFIED. 
  
3) Commit your changes to git and push your changed to GitHub without conflicts.
  - Your push should add <code>{YOURNAME}Programmer.h</code> and <code>{YOURNAME}Programmer.cpp</code>
  - Your push should also change <code>main.cpp</code>.
  - Good luck
