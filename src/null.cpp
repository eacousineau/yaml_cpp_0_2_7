#include "yaml-cpp-0.2.7/null.h"
#include "yaml-cpp-0.2.7/node.h"

namespace YAML
{
	_Null Null;

	bool IsNull(const Node& node)
	{
		return node.Read(Null);
	}
}
