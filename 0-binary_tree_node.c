#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: Pointer to the parent node of the node to create.
 * @value: Value to put in the new node.
 * Return: A pointer to the new node, or NULL on failure.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nu_nod;

	nu_nod = malloc(sizeof(binary_tree_t));

	if (nu_nod == 0)
		return (NULL);

	/**nu_nod = (binary_tree_t){*/
		/*.n = value,*/
		/*.parent = parent,*/
		/*.left = NULL,*/
		/*.right = NULL*/
	/*};*/

	nu_nod->n = value;
	nu_nod->parent = parent;
	nu_nod->left = NULL;
	nu_nod->right = NULL;

	return (nu_nod);
}
