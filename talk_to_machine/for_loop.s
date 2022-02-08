# For loop
# sum = 0
# for i in range(11):
#	sum += i
#
# $s0 = sum
# $s1 = i
#
addi $s0, $0, $0
addi $s1, $s0, 0
addi $t0, $0, 10
for:
	beq $s1, $t0, done
	add $s0, $s0, $0
	addi $s1, $0, 1
	j for
done:

