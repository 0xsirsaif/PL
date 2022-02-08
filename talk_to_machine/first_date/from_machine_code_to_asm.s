# convert 0x2237FFF1 machine code to assembly code

# first: convert to binary 
# 0010 0010 0011 0111 1111 1111 1111 0001

# second, get opcode
# opcode is the first 6-bit: 001000 -> 8 -> addi
# So it's a I-Type instruction

# Third: get rs, rt, and imm fields values
# rs : 10001 -> 17 -> $s1
# rt : 10111 -> 23 -> $s7

# imm : 1111 1111 1111 0001
# ~imm -> NOT imm -> 0000 0000 0000 1110
# ~imm + 1 -> 0000 0000 0000 1111 -> -15

addi $s1, $s7, -15
