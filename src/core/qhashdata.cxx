//  header block begin
// /usr/include/qt/QtCore/qhash.h
#ifndef protected
#define protected public
#endif
#include <qhash.h>
#include <QtCore>
#include "callback_inherit.h"

// QHashData is pure virtual: false
// QHashData has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQHashData : public QHashData {
public:
  virtual ~MyQHashData() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhash.h:84
// [8] void * allocateNode(int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QHashData12allocateNodeEi(void *this_, int nodeAlign) {
  return (void*)((QHashData*)this_)->allocateNode(nodeAlign);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhash.h:85
// [-2] void freeNode(void *)
extern "C" Q_DECL_EXPORT
void C_ZN9QHashData8freeNodeEPv(void *this_, void * node) {
  ((QHashData*)this_)->freeNode(node);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhash.h:86
// [8] QHashData * detach_helper(void (*)(QHashData::Node *, void *), void (*)(QHashData::Node *), int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QHashData13detach_helperEPFvPNS_4NodeEPvEPFvS1_Eii(void *this_, void (*node_duplicate)(QHashData::Node *, void *), void (*node_delete)(QHashData::Node *), int nodeSize, int nodeAlign) {
  return (void*)((QHashData*)this_)->detach_helper(node_duplicate, node_delete, nodeSize, nodeAlign);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhash.h:88
// [1] bool willGrow()
extern "C" Q_DECL_EXPORT
bool C_ZN9QHashData8willGrowEv(void *this_) {
  return (bool)((QHashData*)this_)->willGrow();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhash.h:89
// [-2] void hasShrunk()
extern "C" Q_DECL_EXPORT
void C_ZN9QHashData9hasShrunkEv(void *this_) {
  ((QHashData*)this_)->hasShrunk();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhash.h:90
// [-2] void rehash(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QHashData6rehashEi(void *this_, int hint) {
  ((QHashData*)this_)->rehash(hint);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhash.h:91
// [-2] void free_helper(void (*)(QHashData::Node *))
extern "C" Q_DECL_EXPORT
void C_ZN9QHashData11free_helperEPFvPNS_4NodeEE(void *this_, void (*node_delete)(QHashData::Node *)) {
  ((QHashData*)this_)->free_helper(node_delete);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhash.h:92
// [8] QHashData::Node * firstNode()
extern "C" Q_DECL_EXPORT
void* C_ZN9QHashData9firstNodeEv(void *this_) {
  return (void*)((QHashData*)this_)->firstNode();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhash.h:97
// [8] QHashData::Node * nextNode(QHashData::Node *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QHashData8nextNodeEPNS_4NodeE(QHashData::Node * node) {
  return (void*)QHashData::nextNode(node);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhash.h:98
// [8] QHashData::Node * previousNode(QHashData::Node *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QHashData12previousNodeEPNS_4NodeE(QHashData::Node * node) {
  return (void*)QHashData::previousNode(node);
}


extern "C" Q_DECL_EXPORT
void C_ZN9QHashDataD2Ev(void *this_) {
  delete (QHashData*)(this_);
}
//  main block end
