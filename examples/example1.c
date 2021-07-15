#include <libft/io.h>
#include <stdio.h>

#include "ptys.h"

int	main(void)
{
	ptys_setup();

	ASSERT("simple_string_literal", printf("Hello world"));
	ASSERT("conv_x", printf("%x %x %x", 42, 84, 21));
	ASSERT("conv_s", printf("hey %s %s hey", "ho", "ha"));
	ASSERT("conv_d", printf("I am %d years old", 20));

	ptys_terminate();

	return (0);
}