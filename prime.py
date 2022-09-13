import time

time_start = time.time_ns()/1000

for i in range(2,10001):
	prime_list = []
	tok = False
	for j in range(2,i):
		if i%j == 0:
			tok = True
			break
	if not tok:
		prime_list.append(i)

time_stop = time.time_ns()/1000
print("Python Time difference =", time_stop - time_start, "[us]")