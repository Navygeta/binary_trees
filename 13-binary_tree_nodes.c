#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree.
 * @tree: A pointer to the root node of the tree to count the number of nodes.
 * Return: 0 if tree is NULL,else return total nodes.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes_left, nodes_right, total_nodes = 0;

	if (tree == NULL)
		return (0);

	nodes_left = binary_tree_nodes(tree->left);
	nodes_right = binary_tree_nodes(tree->right);

	if (tree->left || tree->right)
		total_nodes = 1;

	total_nodes += nodes_left + nodes_right;

	return (total_nodes);
}
