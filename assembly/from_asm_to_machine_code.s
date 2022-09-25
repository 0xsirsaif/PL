# convert assembly code to machine code
# convert add $s0, $s1, $s2
# R-type instruction
# rd = $s0 = 16
# rs = $s1 = 17
# rt = $s2 = 18
# opcode = 0
# funct = 32 for add operation
# shamt = 0
# 0 17 18 16 0 32
# binary = 000000 10001 10010 10000 100000
# hexa = 0x0232820
add $s0, $s1, $s2

