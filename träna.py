def h():
    print("h")
    return "h"

def f():
    print("f 1")
    h()
    print("f 2")
    return "f"

def g():
    print("g 1")
    f()
    print("g 2")
    return h()

print(g())