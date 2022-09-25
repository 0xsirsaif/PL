# translate the following instruction to mips assembly
# f = (g + h) + (i - j)
# $s0 = g, $s1 = h
# $s2 = i, $s3 = j
# $s4 = f

add $t0, $s0, $s1
sub $t1, $s2, $s3
add $s4, $t0, $t1
