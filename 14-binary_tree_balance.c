#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: 0 if tree is NULL, return the balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left, height_right, balance_factor;

	if (tree == NULL)
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);
	balance_factor = height_left - height_right;

	return (balance_factor);
}
