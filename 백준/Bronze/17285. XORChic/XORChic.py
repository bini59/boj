encoded = input()
key__ = bin(ord(encoded[0]))
key__ = key__[2:]

key_ = '1000011'
key = ''
for k in range(len(key__)):
    if key__[k] == key_[k]:
        key += '0'
    else:
        key += '1'
decoded = ''
for i in encoded:
    t = bin(ord(i))
    t = t[2:]
    base = key
    result = '0b'
    for j in range(len(base)):
        if t[j] == base[j]:
            result += '0'
        else:
            result += '1'
    decoded += chr(int(result, 2))
print(decoded)