#pragma once

#include "content.h"
#include <map>

namespace YAML
{
	class Node;

	class Map: public Content
	{
	public:
		Map();
		virtual ~Map();

		void Clear();
		virtual void Parse(Scanner *pScanner, const ParserState& state);
		virtual void Write(std::ostream& out, int indent);

	private:
		void ParseBlock(Scanner *pScanner, const ParserState& state);
		void ParseFlow(Scanner *pScanner, const ParserState& state);

	protected:
		typedef std::map <Node *, Node *> node_map;
		node_map m_data;
	};
}
