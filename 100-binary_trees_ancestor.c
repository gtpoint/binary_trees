#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: If no common ancestors return NULL, else return common ancestor.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *first_p, *second_p;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	first_p = first->parent, second_p = second->parent;
	if (first == second_p || !first_p || (!first_p->parent && second_p))
		return (binary_trees_ancestor(first, second_p));
	else if (first_p == second || !second_p || (!second_p->parent && first_p))
		return (binary_trees_ancestor(first_p, second));
	return (binary_trees_ancestor(first_p, second_p));
}
