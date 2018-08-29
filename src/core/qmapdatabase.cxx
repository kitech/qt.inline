//  header block begin
// /usr/include/qt/QtCore/qmap.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmap.h>
#include <QtCore>
#include "callback_inherit.h"

// QMapDataBase is pure virtual: false
// QMapDataBase has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQMapDataBase_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMapDataBase_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMapDataBase_t qt_meta_stringdata_MyQMapDataBase = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQMapDataBase"
  },
  "MyQMapDataBase"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMapDataBase[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
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
