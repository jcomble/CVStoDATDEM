/*
 * Connection.cpp
 *
 *  Created on: 9 mai 2022
 *      Author: jcomble
 */

#include "connection.h"

Connection::Connection(Node node_1, Node node_2) {
	this->node_debut = node_1;
	this->node_fin = node_2;
}

Node Connection::get_node_debut() {
	return this->node_debut;
}

Node Connection::get_node_fin() {
	return this->node_fin;
}
