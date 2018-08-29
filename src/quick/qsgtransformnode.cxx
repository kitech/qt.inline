//  header block begin
// /usr/include/qt/QtQuick/qsgnode.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgnode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGTransformNode is pure virtual: false
// QSGTransformNode has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQSGTransformNode_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSGTransformNode_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSGTransformNode_t qt_meta_stringdata_MyQSGTransformNode = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQSGTransformNode"
  },
  "MyQSGTransformNode"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSGTransformNode[] = {
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
class Q_DECL_EXPORT MyQSGTransformNode : public QSGTransformNode {
public:
  virtual ~MyQSGTransformNode() {}
// void QSGTransformNode()
MyQSGTransformNode() : QSGTransformNode() {}
};
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:284
// [-2] void QSGTransformNode()
extern "C" Q_DECL_EXPORT
void* C_ZN16QSGTransformNodeC2Ev() {
  return  new QSGTransformNode();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:285
// [-2] void ~QSGTransformNode()
extern "C" Q_DECL_EXPORT
void C_ZN16QSGTransformNodeD2Ev(void *this_) {
  delete (QSGTransformNode*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:287
// [-2] void setMatrix(const QMatrix4x4 &)
extern "C" Q_DECL_EXPORT
void C_ZN16QSGTransformNode9setMatrixERK10QMatrix4x4(void *this_, QMatrix4x4* matrix) {
  ((QSGTransformNode*)this_)->setMatrix(*matrix);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:288
// [68] const QMatrix4x4 & matrix()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QSGTransformNode6matrixEv(void *this_) {
  auto& rv = ((QSGTransformNode*)this_)->matrix();
return new QMatrix4x4(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:290
// [-2] void setCombinedMatrix(const QMatrix4x4 &)
extern "C" Q_DECL_EXPORT
void C_ZN16QSGTransformNode17setCombinedMatrixERK10QMatrix4x4(void *this_, QMatrix4x4* matrix) {
  ((QSGTransformNode*)this_)->setCombinedMatrix(*matrix);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:291
// [68] const QMatrix4x4 & combinedMatrix()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QSGTransformNode14combinedMatrixEv(void *this_) {
  auto& rv = ((QSGTransformNode*)this_)->combinedMatrix();
return new QMatrix4x4(rv);
}

//  main block end
