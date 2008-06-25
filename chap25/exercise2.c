#include <locale.h>
#include <stdio.h>

int main(void) {
	char *native_name;
	struct lconv native, c;

	c = *localeconv();

	native_name = setlocale(LC_ALL, "");
	native = *localeconv();

	printf("\t\t\t\"C\"\t\"%s\"\n", native_name);

	printf("decimal_point\t\t\"%s\"\t\t\"%s\"\n", c.decimal_point, native.decimal_point);
	printf("thousands_sep\t\t\"%s\"\t\t\"%s\"\n", c.thousands_sep, native.thousands_sep);
	printf("grouping\t\t\"%s\"\t\t\"%s\"\n", c.grouping, native.grouping);
	printf("int_curr_symbol\t\t\"%s\"\t\t\"%s\"\n", c.int_curr_symbol, native.int_curr_symbol);
	printf("currency_symbol\t\t\"%s\"\t\t\"%s\"\n", c.currency_symbol, native.currency_symbol);
	printf("mon_decimal_point\t\"%s\"\t\t\"%s\"\n", c.mon_decimal_point, native.mon_decimal_point);
	printf("mon_grouping\t\t\"%s\"\t\t\"%s\"\n", c.mon_grouping, native.mon_grouping);
	printf("positive_sign\t\t\"%s\"\t\t\"%s\"\n", c.positive_sign, native.positive_sign);
	printf("negative_sign\t\t\"%s\"\t\t\"%s\"\n", c.negative_sign, native.negative_sign);

	printf("int_frac_digits\t\t\"%c\"\t\t\"%c\"\n", c.int_frac_digits, native.int_frac_digits);
	printf("frac_digits\t\t\"%c\"\t\t\"%c\"\n", c.frac_digits, native.frac_digits);
	printf("p_cs_precedes\t\t\"%c\"\t\t\"%c\"\n", c.p_cs_precedes, native.p_cs_precedes);
	printf("p_sep_by_space\t\t\"%c\"\t\t\"%c\"\n", c.p_sep_by_space, native.p_sep_by_space);
	printf("n_cs_precedes\t\t\"%c\"\t\t\"%c\"\n", c.n_cs_precedes, native.n_cs_precedes);
	printf("n_sep_by_space\t\t\"%c\"\t\t\"%c\"\n", c.n_sep_by_space, native.n_sep_by_space);
	printf("p_sign_posn\t\t\"%c\"\t\t\"%c\"\n", c.p_sign_posn, native.p_sign_posn);
	printf("n_sign_posn\t\t\"%c\"\t\t\"%c\"\n", c.n_sign_posn, native.n_sign_posn);

	return 0;
}
