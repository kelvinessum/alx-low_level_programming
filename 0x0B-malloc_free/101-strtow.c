#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 *count_words - counts the number of words in a string
 * @str: the input string
 *
 * Return: the number of words
 */
int count_words(char *str)
{
	    int in_word = 0, count = 0;

	        while (*str)
			    {
				            if (isspace(*str))
						            {
								                in_word = 0;
										        }
					            else if (!in_word)
							            {
									                in_word = 1;
											            count++;
												            }
						            str++;
							        }
		    return count;
}

/**
 *  * strtow - splits a string into words
 *   * @str: the input string
 *    *
 *     * Return: pointer to an array of strings (words) or NULL if failure
 *      */
char **strtow(char *str)
{
	    char **words;
	        int i, j, k, len, word_count;

		    if (str == NULL || *str == '\0')
			            return NULL;

		        word_count = count_words(str);
			    if (word_count == 0)
				            return NULL;

			        words = malloc((word_count + 1) * sizeof(char *));
				    if (words == NULL)
					            return NULL;

				        i = 0;
					    while (*str)
						        {
								        while (isspace(*str))
										            str++;

									        len = 0;
										        while (str[len] && !isspace(str[len]))
												            len++;

											        if (len > 0)
													        {
															            words[i] = malloc((len + 1) * sizeof(char));
																                if (words[i] == NULL)
																			            {
																					                    for (j = 0; j < i; j++)
																								                        free(words[j]);
																							                    free(words);
																									                    return NULL;
																											                }

																		            for (k = 0; k < len; k++)
																				                    words[i][k] = str[k];
																			                words[i][len] = '\0';
																					            i++;
																						                str += len;
																								        }
												    }
					        words[i] = NULL;

						    return words;
}
