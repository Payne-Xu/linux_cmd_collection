1. regex replace: 
  cat hope_server.log | grep "mergeOneShapeNumOfGroupProfile cost" | awk '{gsub(/\([a-zA-Z]+\)/, " ", $NF);print $NF}'
