# -*- coding: utf-8 -*-

from math import *

n = int(input())

min ="%.1f" % (n/log(n))
max ="%.1f" % (1.25506*(n/log(n)))


print(str(min)+" "+str(max))
