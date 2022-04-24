1. regex replace: 
  cat hope_server.log | grep "mer" | awk '{gsub(/\([a-zA-Z]+\)/, " ", $NF);print $NF}'
  cat hope_server.log | grep "sav" | awk '{gsub(/\([a-zA-Z]+\)/, " ", $NF);print $NF}' | awk '{h+=$1;m+=$2;s+=$3;ms+=$4;}END{print h" "m" "s" "ms" "}'
