#!/usr/bin/python3
""" Lockboxes """

from operator import truediv


def canUnlockAll(boxes):
""" method that determines if all the boxes can be opened"""
total_boxes = len(boxes)

if total_boxes <= 1:
    return True
return False



