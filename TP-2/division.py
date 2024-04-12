a = int(input("introduisez un entier a:"))
b = int(input("introduisez un entier b:"))
if b != 0:
	if a % b != 0:
		print("la division de a par b donne un reste non nul")
	else:
		print("a est divisible par b")
else:
	print("la division de a par b est non déterminée")