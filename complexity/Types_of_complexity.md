 # Types of complexity

 There are three types of complexity
 Big Oh(O)
 Big Omega(Ω)
 Big Theta(θ)

 ## Big Oh(O)
 Big O notation specifically describes worst case  scenario.  
It represents the upper bound running time complexity of an algorithm.
Mathematically -
Let f and g be functions of n - where n is natural no denoting size or steps of the algorithm then -
f(n) = O(g(n))
IFF
f(n) less than or = c.g(n)


where n greater than = n0, c greater than 0, n0 greater than = 1
 In simpler terms, Big O notation is used to express the upper bound, or worst-case scenario, of how an algorithm's runtime or resource consumption scales with the size of the input data. It helps developers understand how efficient an algorithm is and how it will perform as the problem size becomes larger

 ## Big Omega notation -
Big Omega notation specifically describes best case scenario.
It represents the lower bound running time complexity of an algorithm.
Basically it tells you what is the fastest time/behavior in which the algorithm can run.
f(n) = Ω(g(n))
IFF
f(n) greater than or = c.g(n)


where n greater than = n0, c greater than 0, n0 greater than = 1
 Big Omega notation describes the fastest possible growth rate of an algorithm's runtime with respect to the input size, under certain conditions. It helps to understand the minimum amount of time an algorithm would take for any input of a given size.

 ## Big Theta (θ) notation -
Big Omega notation specifically describes average case scenario.
It represents the most realistic time complexity of an algorithm.
f(n) = θ(g(n))
IFF
c1.g(n) less than or = f(n) less than or = c2.g(n)
where n greater than = n0, c1,c2 greater than 0, n greater than = n0, n0 greater = 1


 Big Theta notation defines a range within which the algorithm's runtime or resource consumption lies as the input size increases. It signifies that an algorithm's performance grows at the same rate (up to a constant factor) in both the best-case and worst-case scenarios.
