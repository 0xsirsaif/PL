# while loop 
# pow = 1
# x = 1
# while pow != 128:
#	pow *= 2
#	x += 1
#

# $s0 = pow
# $s1 = x

addi $s0, $0, 1
addi $s1, $0, 0
addi $t0, $0, 128

while:
	beq $s0, $t0, done
	sll $s0, $s0, 1
	addi $s1, $s1, 1
	j while
done:

