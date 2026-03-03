#!/bin/bash

# コマンドライン引数でA,B,C...を渡すとその問題が存在しないディレクトリを探してくれる
for d in */; do
  if ! find "$d" -maxdepth 1 -type f -name $1'_*' | grep -q .; then
    echo "$d"
  fi
done