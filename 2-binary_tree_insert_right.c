#include "binary_trees.h"

/**
 * binary_tree_insert_right- function that inserts right-child node
 *
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * 
 * Return: Return pointer to the created node
 *			NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right;

	if (parent == NULL)
		return (NULL);

	new_right = binary_tree_new(parent, value);
	if (new_right == NULL)
		return (NULL);
	if (parent->right)
	{
		parent->right->parent = new_right;
		new_right->right = parent->right;
	}
	parent->right = new_right;
	return (new_right);
}
