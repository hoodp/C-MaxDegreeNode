set terminal png
set output "distribution.png"
set xlabel "Maximum Degree" 
set ylabel "Frequency" 
set title "Frequency of Maximum Degree"
plot "results" with linespoints