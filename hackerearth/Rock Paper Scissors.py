from os import *
from sys import *
from collections import *
from math import *

def rockPaperScissor(K: int, NEZUKO: str, ZENITSU: str) -> [int]:
    nezuko_score = 0
    zenitsu_score = 0

    for i in range(K):
        nezuko_move = NEZUKO[i % len(NEZUKO)]
        zenitsu_move = ZENITSU[i % len(ZENITSU)]

        if nezuko_move == zenitsu_move:
            continue

        if (
            (nezuko_move == 'R' and zenitsu_move == 'S') or
            (nezuko_move == 'P' and zenitsu_move == 'R') or
            (nezuko_move == 'S' and zenitsu_move == 'P')
        ):
            nezuko_score += 1
        else:
            zenitsu_score += 1

    return nezuko_score, zenitsu_score
    pass
