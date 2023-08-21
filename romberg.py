import scipy as sp

from scipy import integrate

func = lambda x: sp.sin(x)**2

result = integrate.romberg(func, 0, 1, show=True)

