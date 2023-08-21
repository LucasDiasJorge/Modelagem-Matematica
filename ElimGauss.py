import numpy as np
 
 A=np.array([[2.,-1.,0.],[-1.,2.,-1.],[0.,-1.,2.]])
 b=np.array([1.,0,0])
 
 def ElimGauss(A, b):
    U =np.copy(A)
    c = np.copy(b)
    n = c.size
    for j inrange(n-1):
       for i inrange(j+1,n):
         m = U[i,j]/U[j,j]
         U[i,j:] -= m*U[j,j:]
         c[i] -= m*c[j]
    x = SubRet(U,c)
    return x
 
 print('x=',ElimGauss(A,b))