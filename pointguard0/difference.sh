file1="$1"
file2="$2"
diff file1 file2 > diff_
tail -n +2 diff_ 
