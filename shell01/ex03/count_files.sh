#!/bin/sh
find . -exec basename {} \; | wc -l | tr -d ' '
