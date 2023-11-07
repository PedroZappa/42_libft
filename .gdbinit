set auto-load safe-path /

# Debug ft_uitoa.c
break 39
display n
display *str
display nbrstr

define	db_uitoa
	b ft_uitoa
	display n
	display *str
	display len
	run
	n
end
