//  header block begin
// /usr/include/qt/QtCore/qmap.h
#ifndef protected
#define protected public
#endif
#include <qmap.h>
#include <QtCore>
#include "callback_inherit.h"

// QMapDataBase is pure virtual: false
// QMapDataBase has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQMapDataBase : public QMapDataBase {
public:
  virtual ~MyQMapDataBase() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmap.h:190
// [-2] void rotateLeft(QMapNodeBase *)
extern "C" Q_DECL_EXPORT
void C_ZN12QMapDataBase10rotateLeftEP12QMapNodeBase(void *this_, QMapNodeBase * x) {
  ((QMapDataBase*)this_)->rotateLeft(x);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmap.h:191
// [-2] void rotateRight(QMapNodeBase *)
extern "C" Q_DECL_EXPORT
void C_ZN12QMapDataBase11rotateRightEP12QMapNodeBase(void *this_, QMapNodeBase * x) {
  ((QMapDataBase*)this_)->rotateRight(x);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmap.h:192
// [-2] void rebalance(QMapNodeBase *)
extern "C" Q_DECL_EXPORT
void C_ZN12QMapDataBase9rebalanceEP12QMapNodeBase(void *this_, QMapNodeBase * x) {
  ((QMapDataBase*)this_)->rebalance(x);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmap.h:193
// [-2] void freeNodeAndRebalance(QMapNodeBase *)
extern "C" Q_DECL_EXPORT
void C_ZN12QMapDataBase20freeNodeAndRebalanceEP12QMapNodeBase(void *this_, QMapNodeBase * z) {
  ((QMapDataBase*)this_)->freeNodeAndRebalance(z);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmap.h:194
// [-2] void recalcMostLeftNode()
extern "C" Q_DECL_EXPORT
void C_ZN12QMapDataBase18recalcMostLeftNodeEv(void *this_) {
  ((QMapDataBase*)this_)->recalcMostLeftNode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmap.h:196
// [8] QMapNodeBase * createNode(int, int, QMapNodeBase *, bool)
extern "C" Q_DECL_EXPORT
void* C_ZN12QMapDataBase10createNodeEiiP12QMapNodeBaseb(void *this_, int size, int alignment, QMapNodeBase * parent, bool left) {
  return (void*)((QMapDataBase*)this_)->createNode(size, alignment, parent, left);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmap.h:197
// [-2] void freeTree(QMapNodeBase *, int)
extern "C" Q_DECL_EXPORT
void C_ZN12QMapDataBase8freeTreeEP12QMapNodeBasei(void *this_, QMapNodeBase * root, int alignment) {
  ((QMapDataBase*)this_)->freeTree(root, alignment);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmap.h:201
// [8] QMapDataBase * createData()
extern "C" Q_DECL_EXPORT
void* C_ZN12QMapDataBase10createDataEv() {
  return (void*)QMapDataBase::createData();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmap.h:202
// [-2] void freeData(QMapDataBase *)
extern "C" Q_DECL_EXPORT
void C_ZN12QMapDataBase8freeDataEPS_(QMapDataBase * d) {
  QMapDataBase::freeData(d);
}


extern "C" Q_DECL_EXPORT
void C_ZN12QMapDataBaseD2Ev(void *this_) {
  delete (QMapDataBase*)(this_);
}
//  main block end
