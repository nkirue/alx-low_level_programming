st_len - Returns the number of elements in a linked list
 * @h: This Pointer to the list_t list
 *  *
 *   * Return: Returns number of elements in a list_t
 *    */
 size_t list_len(const list_t *h)
{
		size_t num = 0;

			while (h)
					{
								num++;
										h = h->next;
											}
				return (num);
}

