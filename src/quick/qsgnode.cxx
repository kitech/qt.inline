//  header block begin
// /usr/include/qt/QtQuick/qsgnode.h
#ifndef protected
#define protected public
#endif
#include <qsgnode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGNode is pure virtual: false
// QSGNode has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSGNode : public QSGNode {
public:
  virtual ~MyQSGNode() {}
// void QSGNode()
MyQSGNode() : QSGNode() {}
// void QSGNode(enum QSGNode::NodeType)
MyQSGNode(QSGNode::NodeType type_) : QSGNode(type_) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:130
// [-2] void QSGNode()
extern "C" Q_DECL_EXPORT
void* C_ZN7QSGNodeC2Ev() {
  return  new QSGNode();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:131
// [-2] void ~QSGNode()
extern "C" Q_DECL_EXPORT
void C_ZN7QSGNodeD2Ev(void *this_) {
  delete (QSGNode*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:133
// [8] QSGNode * parent()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QSGNode6parentEv(void *this_) {
  return (void*)((QSGNode*)this_)->parent();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:135
// [-2] void removeChildNode(class QSGNode *)
extern "C" Q_DECL_EXPORT
void C_ZN7QSGNode15removeChildNodeEPS_(void *this_, QSGNode * node) {
  ((QSGNode*)this_)->removeChildNode(node);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:136
// [-2] void removeAllChildNodes()
extern "C" Q_DECL_EXPORT
void C_ZN7QSGNode19removeAllChildNodesEv(void *this_) {
  ((QSGNode*)this_)->removeAllChildNodes();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:137
// [-2] void prependChildNode(class QSGNode *)
extern "C" Q_DECL_EXPORT
void C_ZN7QSGNode16prependChildNodeEPS_(void *this_, QSGNode * node) {
  ((QSGNode*)this_)->prependChildNode(node);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:138
// [-2] void appendChildNode(class QSGNode *)
extern "C" Q_DECL_EXPORT
void C_ZN7QSGNode15appendChildNodeEPS_(void *this_, QSGNode * node) {
  ((QSGNode*)this_)->appendChildNode(node);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:139
// [-2] void insertChildNodeBefore(class QSGNode *, class QSGNode *)
extern "C" Q_DECL_EXPORT
void C_ZN7QSGNode21insertChildNodeBeforeEPS_S0_(void *this_, QSGNode * node, QSGNode * before) {
  ((QSGNode*)this_)->insertChildNodeBefore(node, before);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:140
// [-2] void insertChildNodeAfter(class QSGNode *, class QSGNode *)
extern "C" Q_DECL_EXPORT
void C_ZN7QSGNode20insertChildNodeAfterEPS_S0_(void *this_, QSGNode * node, QSGNode * after) {
  ((QSGNode*)this_)->insertChildNodeAfter(node, after);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:141
// [-2] void reparentChildNodesTo(class QSGNode *)
extern "C" Q_DECL_EXPORT
void C_ZN7QSGNode20reparentChildNodesToEPS_(void *this_, QSGNode * newParent) {
  ((QSGNode*)this_)->reparentChildNodesTo(newParent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:143
// [4] int childCount()
extern "C" Q_DECL_EXPORT
int C_ZNK7QSGNode10childCountEv(void *this_) {
  return (int)((QSGNode*)this_)->childCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:144
// [8] QSGNode * childAtIndex(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QSGNode12childAtIndexEi(void *this_, int i) {
  return (void*)((QSGNode*)this_)->childAtIndex(i);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:145
// [8] QSGNode * firstChild()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QSGNode10firstChildEv(void *this_) {
  return (void*)((QSGNode*)this_)->firstChild();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:146
// [8] QSGNode * lastChild()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QSGNode9lastChildEv(void *this_) {
  return (void*)((QSGNode*)this_)->lastChild();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:147
// [8] QSGNode * nextSibling()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QSGNode11nextSiblingEv(void *this_) {
  return (void*)((QSGNode*)this_)->nextSibling();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:148
// [8] QSGNode * previousSibling()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QSGNode15previousSiblingEv(void *this_) {
  return (void*)((QSGNode*)this_)->previousSibling();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:150
// [4] QSGNode::NodeType type()
extern "C" Q_DECL_EXPORT
QSGNode::NodeType C_ZNK7QSGNode4typeEv(void *this_) {
  return (QSGNode::NodeType)((QSGNode*)this_)->type();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:152
// [-2] void clearDirty()
extern "C" Q_DECL_EXPORT
void C_ZN7QSGNode10clearDirtyEv(void *this_) {
  ((QSGNode*)this_)->clearDirty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:153
// [-2] void markDirty(QSGNode::DirtyState)
extern "C" Q_DECL_EXPORT
void C_ZN7QSGNode9markDirtyE6QFlagsINS_13DirtyStateBitEE(void *this_, QFlags<QSGNode::DirtyStateBit> bits) {
  ((QSGNode*)this_)->markDirty(bits);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:154
// [4] QSGNode::DirtyState dirtyState()
extern "C" Q_DECL_EXPORT
QSGNode::DirtyState* C_ZNK7QSGNode10dirtyStateEv(void *this_) {
  auto rv = ((QSGNode*)this_)->dirtyState();
return new QSGNode::DirtyState(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:156
// [1] bool isSubtreeBlocked()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QSGNode16isSubtreeBlockedEv(void *this_) {
  return (bool)((QSGNode*)this_)->isSubtreeBlocked();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:158
// [4] QSGNode::Flags flags()
extern "C" Q_DECL_EXPORT
QSGNode::Flags* C_ZNK7QSGNode5flagsEv(void *this_) {
  auto rv = ((QSGNode*)this_)->flags();
return new QSGNode::Flags(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:159
// [-2] void setFlag(enum QSGNode::Flag, _Bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QSGNode7setFlagENS_4FlagEb(void *this_, QSGNode::Flag arg0, bool arg1) {
  ((QSGNode*)this_)->setFlag(arg0, arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:160
// [-2] void setFlags(QSGNode::Flags, _Bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QSGNode8setFlagsE6QFlagsINS_4FlagEEb(void *this_, QFlags<QSGNode::Flag> arg0, bool arg1) {
  ((QSGNode*)this_)->setFlags(arg0, arg1);
}

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:162
// [-2] void preprocess()
extern "C" Q_DECL_EXPORT
void C_ZN7QSGNode10preprocessEv(void *this_) {
  ((QSGNode*)this_)->preprocess();
}

//  main block end
