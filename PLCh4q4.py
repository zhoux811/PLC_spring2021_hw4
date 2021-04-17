import re, string


def perl_identifier(input_string):
    results = re.findall(r'[@$%][a-zA-Z_][A-Za-z0-9_]*', input_string)
    if len(results) > 0:
        print(results)
        for r in results:
            if '$' in r:
                print('scalar: ' + r)
            elif '@' in r:
                print('array: ' + r)
            if '%' in r:
                print('hash: ' + r)
    else:
        print('no perl identifiers found\n')


f = open('sample')

line_n = 0
for l in f:
    print('line ' + str(line_n) + ' : ' + l[:-1])
    perl_identifier(l)
    line_n += 1
