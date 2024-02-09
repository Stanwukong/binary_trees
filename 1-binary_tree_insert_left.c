#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the
 *			left child of another node.
 * @parent: pointer to the node to insert the left-child in.
 * @value: Value to store in the new node.
 *
 * Return: Pointer to new node, otherwise NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *temp_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL || parent == NULL)
	{
		return (NULL);
	}

	new_node->parent = parent;
	new_node->n = value;
	new_node->right = NULL;

	if (parent->left != NULL)
	{
		temp_node = parent->left;
		new_node->left = temp_node;
		temp_node->parent = new_node;
	}
	else
	{
		new_node->left = NULL;
	}

	parent->left = new_node;

	return (new_node);
}
