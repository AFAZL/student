f=input("enter first no:")
o=input("enter operatot:(+,-,/,*) : ")
s=input("enter second no:")
f=float(f)
s=float(s)

if o=="+":
    print(f+s)
elif o=="-":
    print(f-s)
elif o=="*":
    print(f*s)
elif o=="/":
    print(f/s)
else :
    print("invalid operator")
z=range(10)
print(z)