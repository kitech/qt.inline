//  header block begin
// /usr/include/qt/QtCore/qhash.h
#include <qhash.h>
#include <QtCore>
#include "callback_inherit.h"

// QHashData is pure virtual: false
// QHashData has virtual projected: false
//  header block end

//  main block begin

class MyQHashData : public QHashData {
public:
  virtual ~MyQHashData() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhash.h:84
// [8] void * allocateNode(int)
extern "C"
void* C_ZN9QHashData12allocateNodeEi(void *this_, int nodeAlign) {
  return (void*)((QHashData*)this_)->allocateNode(nodeAlign);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhash.h:85
// [-2] void freeNode(void *)
extern "C"
void C_ZN9QHashData8freeNodeEPv(void *this_, void * node) {
  ((QHashData*)this_)->freeNode(node);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhash.h:86
// [8] QHashData * detach_helper(void (*)(struct QHashData::Node *, void *), void (*)(struct QHashData::Node *), int, int)
extern "C"
void* C_ZN9QHashData13detach_helperEPFvPNS_4NodeEPvEPFvS1_Eii(void *this_, void (*node_duplicate)(QHashData::Node *, void *), void (*node_delete)(QHashData::Node *), int nodeSize, int nodeAlign) {
  return (void*)((QHashData*)this_)->detach_helper(node_duplicate, node_delete, nodeSize, nodeAlign);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhash.h:88
// [1] bool willGrow()
extern "C"
bool C_ZN9QHashData8willGrowEv(void *this_) {
  return (bool)((QHashData*)this_)->willGrow();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhash.h:89
// [-2] void hasShrunk()
extern "C"
void C_ZN9QHashData9hasShrunkEv(void *this_) {
  ((QHashData*)this_)->hasShrunk();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhash.h:90
// [-2] void rehash(int)
extern "C"
void C_ZN9QHashData6rehashEi(void *this_, int hint) {
  ((QHashData*)this_)->rehash(hint);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhash.h:91
// [-2] void free_helper(void (*)(struct QHashData::Node *))
extern "C"
void C_ZN9QHashData11free_helperEPFvPNS_4NodeEE(void *this_, void (*node_delete)(QHashData::Node *)) {
  ((QHashData*)this_)->free_helper(node_delete);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhash.h:92
// [8] QHashData::Node * firstNode()
extern "C"
void* C_ZN9QHashData9firstNodeEv(void *this_) {
  return (void*)((QHashData*)this_)->firstNode();
}

extern "C"
void C_ZN9QHashDataD2Ev(void *this_) {
  delete (QHashData*)(this_);
}
//  main block end
