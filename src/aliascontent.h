#ifndef ALIASCONTENT_H_62B23520_7C8E_11DE_8A39_0800200C9A66
#define ALIASCONTENT_H_62B23520_7C8E_11DE_8A39_0800200C9A66

#if !defined(__GNUC__) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4) || (__GNUC__ >= 4) // GCC supports "pragma once" correctly since 3.4
#pragma once
#endif


#include "content.h"

namespace YAML
{
	class AliasContent : public Content
	{
	public:
		AliasContent(Content *pNodeContent);

		virtual bool GetBegin(std::vector <Node *>::const_iterator&) const;
		virtual bool GetBegin(std::map <Node *, Node *, ltnode>::const_iterator&) const;
		virtual bool GetEnd(std::vector <Node *>::const_iterator&) const;
		virtual bool GetEnd(std::map <Node *, Node *, ltnode>::const_iterator&) const;
		virtual Node* GetNode(std::size_t) const;
		virtual std::size_t GetSize() const;
		virtual bool IsScalar() const;
		virtual bool IsMap() const;
		virtual bool IsSequence() const;

		virtual bool GetScalar(std::string& s) const;
		virtual void EmitEvents(AliasManager& am, EventHandler& eventHandler, const Mark& mark, const std::string& tag, anchor_t anchor) const;

		virtual int Compare(Content *);
		virtual int Compare(Scalar *);
		virtual int Compare(Sequence *);
		virtual int Compare(Map *);

	private:
		Content* m_pRef;
	};
}

#endif // ALIASCONTENT_H_62B23520_7C8E_11DE_8A39_0800200C9A66
