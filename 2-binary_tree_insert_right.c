#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in.
 * @value: Value to store in the new node.
 *
 * Return: A pointer to the created node, or NULL on failure.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nu_nod, *right_child;

	nu_nod = binary_tree_node(parent, value);

	if (!parent)
		return (NULL);

	if (!nu_nod)
		return (NULL);

	right_child = parent->right;

	if (right_child)
	{
		nu_nod->right = right_child;
		right_child->parent = nu_nod;
	}

	parent->right = nu_nod;

	return (nu_nod);
}
