def maker(N):
    def action(X):
        return X**N
    return action
f=maker(2)
f
print(f(3))
print(f(4))
g = maker(3)
print(g(4))
print(f(4))
def maker2(T):
    return lambda X:X**T
h = maker2(3)
print(h(4))
