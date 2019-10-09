cat /etc/passwd | grep -v \# | sed -n 'n;p' | cut -d ':' -f1 | rev | sort -r | head -n +$FT_LINE2 | tail -n +$FT_LINE1 | sed 'H;1h;$!d;x;y/\n/,/' | sed 's/,/, /g' | sed 's/.*/&./' | tr -d '\n'
