#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anything.
 * @format:  list of types of arguments
 */
void print_all(const char * const format, ...)
{
	    va_list args;
	        char *sval;
		    int ival;
		        double dval;
			    char cval;
			        const char *p;
				    int first_arg = 1;

				        va_start(args, format);
					    for (p = format; *p; p++) {
						            if (!first_arg && (*(p-1) == 'c' || *(p-1) == 'i' || *(p-1) == 'f' || *(p-1) == 's')) {
								                printf(", ");
										        }

							            switch (*p) {
									            case 'c':
											                cval = va_arg(args, int);
													            printf("%c", cval);
														                break;
																        case 'i':
																            ival = va_arg(args, int);
																	                printf("%d", ival);
																			            break;
																				            case 'f':
																				                dval = va_arg(args, double);
																						            printf("%f", dval);
																							                break;
																									        case 's':
																									            sval = va_arg(args, char *);
																										                if (sval == NULL) {
																													                printf("(nil)");
																															            } else {
																																	                    printf("%s", sval);
																																			                }
																												            break;
																													            default:
																													                continue;
																															        }
								            first_arg = 0;
									        }

					        printf("\n");
						    va_end(args);
}

