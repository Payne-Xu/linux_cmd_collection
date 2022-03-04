1. search
  %s/each bucket:\s\d\{2\}//ng #to find how many times "each bucket...." occurs
  
2. vscode replace
  # python2 print xxx to python3 print(xxx)
  ^(\s+)print (.*)$
  $1print($2)
