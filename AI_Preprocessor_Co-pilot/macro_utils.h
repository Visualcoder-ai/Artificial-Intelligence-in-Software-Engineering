#ifndef MACRO_UTILS_H
#define MACRO_UTILS_H

#include <stdio.h>

#define SQUARE(x) ((x) * (x))

#ifdef DEBUG_MODE
	#define DEBUG_LOG(msg, val) \
		printf("[DEBUG] %s:%d (%s): " msg " = %d\n", \
		       __FILE__, __LINE__, __func__, (val))
#else
	#define DEBUG_LOG(msg, val) do {} while (0)
#endif

#endif /* MACRO_UTILS_H */
