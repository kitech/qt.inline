//  header block begin
// /usr/include/qt/QtQuick/qsgnode.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgnode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGClipNode is pure virtual: false
// QSGClipNode has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQSGClipNode_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSGClipNode_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSGClipNode_t qt_meta_stringdata_MyQSGClipNode = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQSGClipNode"
  },
  "MyQSGClipNode"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSGClipNode[] = {
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
class Q_DECL_EXPORT MyQSGClipNode : public QSGClipNode {
public:
  virtual ~MyQSGClipNode() {}
// void QSGClipNode()
MyQSGClipNode() : QSGClipNode() {}
};
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:264
// [-2] void QSGClipNode()
extern "C" Q_DECL_EXPORT
void* C_ZN11QSGClipNodeC2Ev() {
  return  new QSGClipNode();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:265
// [-2] void ~QSGClipNode()
extern "C" Q_DECL_EXPORT
void C_ZN11QSGClipNodeD2Ev(void *this_) {
  delete (QSGClipNode*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:267
// [-2] void setIsRectangular(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QSGClipNode16setIsRectangularEb(void *this_, bool rectHint) {
  ((QSGClipNode*)this_)->setIsRectangular(rectHint);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:268
// [1] bool isRectangular()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QSGClipNode13isRectangularEv(void *this_) {
  return (bool)((QSGClipNode*)this_)->isRectangular();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:270
// [-2] void setClipRect(const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN11QSGClipNode11setClipRectERK6QRectF(void *this_, QRectF* arg0) {
  ((QSGClipNode*)this_)->setClipRect(*arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:271
// [32] QRectF clipRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QSGClipNode8clipRectEv(void *this_) {
  auto rv = ((QSGClipNode*)this_)->clipRect();
return new QRectF(rv);
}

//  main block end
