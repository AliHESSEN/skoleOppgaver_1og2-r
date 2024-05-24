#include <iostream>
#include<string>
#include<vector>

class Node
{
public:

	// constructor
	Node() = default; // default
	~Node() = default; // destruktør
	Node(int nodeId, std::string nodeName)
		: m_nodeId{ nodeId }, m_nodeName{ nodeName }
	{

	}

	// accessors
	friend inline std::ostream& operator << (std::ostream& out, const Node& node);
	inline int getNodeId() const { return this->m_nodeId; } //@return m_nodeId
	inline std::string getNodeName() const { return this->m_nodeName; } //@return m_nodeName
	
	//functions
	void setNodeId(int nodeId)
	{
		m_nodeId = nodeId;
	}
	
	void SetNodeName(std::string nodeName)
	{
		m_nodeName = nodeName;
	}



private:

	int m_nodeId;
	std::string m_nodeName;

};
// for å kunne skrive ut fra vecotorer (nodeklassen)
std::ostream& operator <<(std::ostream& out, const Node& node)
{
	return out << node.getNodeId() << node.getNodeName() << std::endl;
}

class Edge
{
public:

	//constructor
	Edge() = default; // default
	~Edge() = default;
	Edge(int posNode, int nodeWeight) //parameter constructor
		: m_positionNode{ posNode }, m_nodeWeight{ nodeWeight }
	{

	}

	//accessors
	friend inline std::ostream& operator << (std::ostream& out, const Edge edge);
	inline int getPosNode() const { return this->m_positionNode; } //@return m_positionNode
	inline int getNodeWeight() const { return this->m_nodeWeight; } 

	//functions



private:

	int m_positionNode;
	int m_nodeWeight;

};
// for Edge klassen
std::ostream& operator << (std::ostream& out, const Edge& edge)
{
	return out << edge.getPosNode() << edge.getNodeWeight() << std::endl;
}

class Graph
{

public:
	
	//constructor
	Graph() = default; // default
	~Graph() = default; // destruktør
	


	//accessor
	friend inline std::ostream& operator << (std::ostream& out, const Graph& graph);
	std::vector<Node*> getNodeList() const { return this->m_nodeList; }
	std::vector<Edge*> getEdgeList() const { return this->m_edgeList; }
	

	//functions
	void addNode(Node* node) // lager objekt av node
	{
		m_nodeList.push_back(node); // legger til objektet i vectoren
	}

	void addEdge(Edge* edge)
	{
		m_edgeList.push_back(edge);
	}
	
	void printNodeList(Node* node)
	{
		//std::cout << "printing out nodes :" << std::endl;
		for (int i = 0; i < m_nodeList.size(); i++)
		{
			Node* temp; // lager tempvariabel for å lagre userinput, slik at neste input ikke overwriter den
			temp = m_nodeList.at(i);
			std::cout << "(" << temp->getNodeName() << ")" << "--> " << std::ends;
			std::cout << temp->getNodeId() << std::ends;
		}

	}
	//void runNode()
	//{
	//	Graph graph;
	//	int userInputId;
	//	std::string userInputNodeName;
	//	std::cout << "Type in the Id for the node you want to add :" << std::endl;
	//	std::cin >> userInputId;
	//	std::cout << "Type a name for the node" << std::endl;
	//	std::cin >> userInputNodeName;

	//	auto node1 = new Node(userInputId, userInputNodeName);
	//	graph.addNode(node1);
	//	graph.printNodeList(node1);


	//	
	//}

	void printEdgeList(Edge* edge)
	{
		std::cout << " [";;
		std::cout << edge->getPosNode() << std::ends;
		std::cout << " " << std::ends;
		std::cout << edge->getNodeWeight() << std::ends;
		std::cout << "]";
	std::cout << std::endl;
		
 	}

	//void runedge()
	//{
	//	graph graph;
	//	auto edge1 = new edge(1, 10);
	//	graph.addedge(edge1);
	//	graph.printedgelist(edge1);


	//}
	void RemoveNode(int NodeId)
	{
		for (auto i = 0; i < m_nodeList.size(); i++)
		{
			if (m_nodeList[i]->getNodeId() == NodeId)
			{
				m_nodeList.erase(m_nodeList.begin() + i);
			}
		}
	}

	void menu() // meny som kjører hele programmet
	{
		Graph graph;
		int option, userInputId{}, userInputWeight{}; // brukes for userValg
		std::string userInputNodeName;
		

		auto edge1 = new Edge(1, 10);
		auto edge2 = new Edge(2, 20);
		auto edge3 = new Edge(3, 30);

		// lager en do while-loop for meny programmet vårt
		do
		{
			std::cout << std::endl;
			std::cout << "What do you want to do ?: " << std::endl;
			std::cout << "1. Add Node " << std::endl;
			std::cout << "2. Delete a node " << std::endl;
			std::cout << "3. Add edge " << std::endl;
			std::cout << "4. Delete edge " << std::endl;
			std::cout << "5. print graph " << std::endl;
			std::cout << "0. Quit " << std::endl;

			std::cin >> option;
			auto node1 = new Node(userInputId, userInputNodeName);
			auto edge1 = new Edge(userInputId, userInputWeight);
			//auto node2 = new Node(2, "B");
			//auto node3 = new Node(3, "C");
			//auto node1 = new Node(userInputId, userInputNodeName); //må være her, eller mister vi de når vi tar option input fra user

			switch (option) // switch case med user input
			{
			case 0:
				break;

			case 1:
				
				std::cout << "type in the id for the node you want to add :" << std::endl;
				std::cin >> userInputId;
				std::cout << "type a name for the node" << std::endl;
				std::cin >> userInputNodeName;
				
				//legger til userinputen slik at vi ikke mister den,når vi tar mer userinput
				node1->setNodeId(userInputId);
				node1->SetNodeName(userInputNodeName);
				graph.addNode(node1);
				//graph.addNode(node1);
				//graph.addNode(node2);
				//graph.addNode(node3);
	
				break;

			case 2:
				
				std::cout << " delete a node" << std::endl;
				std::cout << "type in the Id of the node you want to remove :" << std::endl;
				std::cin >> userInputId; 
				std::cout << "Deleting node with Id " << userInputId << std::endl;
				graph.RemoveNode(userInputId);

				break;

			case 3:
				std::cout << " Add edge" << std::endl;
				std::cout << "type in the id for the node you are moving from :" << std::endl;
				std::cin >> userInputId;
				std::cout << "type in the weight of the node:" << std::endl;
				std::cin >> userInputWeight;
				//edge1->// trenger setter for edge klassen
				//graph.addEdge(edge1);

				break;

			case 4:
				break;

			case 5:
				std::cout << " print graph" << std::endl;
				graph.printNodeList(node1);
				graph.printEdgeList(edge1);

				
				break;


			default:
				std::cout << "Please enter a valid option number :" << std::endl; // hvis bruker ikke skriver riktig valg

			}


		} while (option != 0); // så lenge bruker ikke velger 0, vil programmet kjøre
	}
private:

	std::vector<Node*> m_nodeList;
	std::vector<Edge*> m_edgeList;



};
std::ostream& operator << (std::ostream& out, const Graph& graph)
{

}


int main()
{
	Graph graph;
	//graph.runNode();
	//graph.runEdge();
	graph.menu();

}