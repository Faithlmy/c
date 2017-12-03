from ctypes import *
add = CDLL('./sum.so')
res_int = add.add_int(4, 5)
print(res_int)


a = c_float(4.09)
b = c_float(3.56)
res_float = add.add_float
res_float.restype = c_float

print(str(res_float(a, b)))