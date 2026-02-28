#!/bin/bash
for d in */; do
  if ! find "$d" -maxdepth 1 -type f -name 'C_*' | grep -q .; then
    echo "$d"
  fi
done
