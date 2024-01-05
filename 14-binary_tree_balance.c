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

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: 0 if tree is NULL, else return height.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0, max_height = 0;

	if (tree)
	{
		if (tree->left)
			left_height = 1 + binary_tree_height(tree->left);

		if (tree->right)
			right_height = 1 + binary_tree_height(tree->right);

		max_height = left_height;
		if (right_height > left_height)
			max_height = right_height;

		return (max_height);
	}
	return (0);
}
