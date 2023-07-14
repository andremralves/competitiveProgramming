import sys

for line in sys.stdin:
    line = line.replace('\n', '')
    line = line.replace(' ', '')
    line = "0b"+line
    x = int(line.encode('ascii'))
    print(x)
    break;

