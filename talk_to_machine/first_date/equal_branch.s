# conditional branching is_equal
addi $s0, $0, 1 # $s0 = 1
addi $s1, $s0, 0 # $s1 = 1
beq $s1, $s0, target # True
add $s2, $s0, $s1  # not executed

target:
	sub $s2, $s0, $s1 # $s2 = 0
