# Problem Statement

## Virus Outbreak (100 Marks)

In the Martian land faraway, a new virus has evolved and is attacking the individuals at a fast pace. The scientists have figured out the virus composition, V. The big task is to identify the people who are infected. The sample of N people is taken to check if they are POSITIVE or NEGATIVE. A report is generated which provides the current blood composition B of the person. 


## POSITIVE or NEGATIVE ?

If the blood composition of the person is a subsequence of the virus composition V, then the person is identified as POSITIVE otherwise NEGATIVE.


## Example:

Virus Composition, V = coronavirus<br>
Blood Composition of the person , B = ravus<br>
The person in question is POSITIVE as B is the subsequence of the V. 
<br>
<br>
The scientists are busy with their research for medicine and request you to build a program which can quickly figure out if the person is POSITIVE or NEGATIVE. They will provide you with the virus composition V and all the people’s current blood composition. Can you help them?


**Note: The virus and blood compositions are lowercase alphabet strings.**

## Input Format<br>
The first line of the input consists of the virus composition, V <br>
The second line of he input consists of the number of people, N<br>
Next N lines each consist of the blood composition of the ith person, Bi

## Constraints <br>
1<= N <=10 <br>
1<= |B|<= |V|<= 10^5<br><br>



## Output Format<br>
For each person, print POSITIVE or NEGATIVE in a separate line <br>


## Sample TestCase 1
**Input :** <br>
coronavirus<br>
3<br>
abcde<br>
crnas<br>
onarous<br>
<hr>

**Output :** <br>
NEGATIVE<br>
POSITIVE<br>
NEGATIVE<br>

<hr>
Time Limit(X): &emsp;
0.50 sec(s) for each input. <br>
Memory Limit:&emsp;
512 MB<br>
Source Limit:&emsp;
100 KB<br>
Allowed Languages:&emsp;
C, C++, C++11, C++14, C#, Java, Java 8, Kotlin, PHP, PHP 7, Python, Python 3, Perl, Ruby, Node Js, Scala, Clojure, Haskell, Lua, Erlang, Swift, VBnet, Js, Objc, Pascal, Go, F#, D, Groovy, Tcl, Ocaml, Smalltalk, Cobol, Racket, Bash, GNU Octave, Rust, Common LISP, R, Julia, Fortran, Ada, Prolog, Icon, Elixir, CoffeeScript, Brainfuck, Pypy, Lolcode, Nim, Picolisp, Pike, pypy3
