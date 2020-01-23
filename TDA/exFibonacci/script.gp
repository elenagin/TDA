set samples 200, 200
set multiplot layout 1, 2
set title "Clock Fibonacci Recursive" font ",20"
plot "recursive.txt"
set title "Clock Fibonacci Iteration" font ",20"
plot "iteration.txt"
unset multiplot
