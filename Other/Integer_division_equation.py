def integer_division_equation(n, d):
	"""Perform integer division between int numbers.

	:param n: int - numerator.
	:param d: int - denominator
	:return: string - formatted equation representing the result of
	 the division (n = d * q + r, where q is the quotient and r is
	 the remainder.).
	"""
	new_n = abs(n)
	new_d = abs(d)

	q = new_n // new_d
	r = new_n % new_d # Remainder cannot be negative

	# Adjustments for negative numerator or denominator
	if n < 0 and d > 0:
		if (r):
			q += 1
			r = new_d - r
		q *= -1
	elif n > 0 and d < 0:
		q *= -1

	return f"{n} = {d} * {q} + {r}"

print(integer_division_equation(32, -5))
