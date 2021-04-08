vertebras = input()
classe = input()
dieta = input()

if vertebras == "vertebrado":
    if classe == "ave":
        if dieta == "carnivoro":
            print("aguia")
        elif dieta == "onivoro":
            print("pomba")
    elif classe == "mamifero":
        if dieta == "onivoro":
            print("homem")
        elif dieta == "herbivoro":
            print("vaca")
elif vertebras == "invertebrado":
    if classe == "inseto":
        if dieta == "hematofago":
            print("pulga")
        elif dieta == "herbivoro":
            print("lagarta")
    elif classe == "anelideo":
        if dieta == "hematofago":
            print("sanguessuga")
        elif dieta == "onivoro":
            print("minhoca")
