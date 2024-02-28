#include "binary_trees.h"
/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 * Return: Pointer to the lowest common ancestor node or NULL if not found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	binary_tree_t *node_one, *node_two;

	if (!first || !second)
		return (NULL);
	node_one = (binary_tree_t *)first;

	while (node_one)
	{
		node_two = (binary_tree_t *)second;
		while (node_two)
		{
			if (node_one == node_two)
				return (node_one);
			node_two = node_two->parent;
		}
		node_one = node_one->parent;
	}
	return (NULL);
}
