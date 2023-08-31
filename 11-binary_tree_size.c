#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size of.
 *
 * Return: The size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree == NULL)
    return (0);

  l = tree->left ? 1 + binary_tree_size(tree->left) : 0;
  r = tree->right ? 1 + binary_tree_size(tree->right) : 0;
  return (1 + l + r);
}
