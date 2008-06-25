??=include <ctype.h>
??=include <stdio.h>

??=define KEY '&'

int main(void) ??<
	char orig_char, new_char;

	while ((orig_char = getchar()) != EOF) ??<
		new_char = orig_char ??' KEY;
		if (iscntrl(orig_char) ??!??! iscntrl(new_char))
			putchar(orig_char);
		else
			putchar(new_char);
	??>

	return 0;
??>
