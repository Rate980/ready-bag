import math

R = 70

print("[")
for x in range(628):
    x /= 100
    print("[", end="")
    print(
        math.floor(math.sin(x) * R), math.floor(math.cos(x) * R), sep=", ", end="],\n"
    )

print("]")
