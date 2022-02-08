# Read from and Write into word-addressable memory

# Read data from word 2 and load it into register $s0
# Write into word 4 from $s0 register

lw $s0, 2($0)
sw $s0, 4($0)

