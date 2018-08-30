//  header block begin
// /usr/include/qt/QtQuick/qsgnode.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgnode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGBasicGeometryNode is pure virtual: false
// QSGBasicGeometryNode has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQSGBasicGeometryNode_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSGBasicGeometryNode_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSGBasicGeometryNode_t qt_meta_stringdata_MyQSGBasicGeometryNode = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQSGBasicGeometryNode"
  },
  "MyQSGBasicGeometryNode"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSGBasicGeometryNode[] = {
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
class Q_DECL_EXPORT MyQSGBasicGeometryNode : public QSGBasicGeometryNode {
public:
  virtual ~MyQSGBasicGeometryNode() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:198
// [-2] void ~QSGBasicGeometryNode()
extern "C" Q_DECL_EXPORT
void C_ZN20QSGBasicGeometryNodeD2Ev(void *this_) {
  delete (QSGBasicGeometryNode*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:200
// [-2] void setGeometry(QSGGeometry *)
extern "C" Q_DECL_EXPORT
void C_ZN20QSGBasicGeometryNode11setGeometryEP11QSGGeometry(void *this_, QSGGeometry * geometry) {
  ((QSGBasicGeometryNode*)this_)->setGeometry(geometry);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:201
// [8] const QSGGeometry * geometry()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QSGBasicGeometryNode8geometryEv(void *this_) {
  return (void*)((QSGBasicGeometryNode*)this_)->geometry();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:202
// [8] QSGGeometry * geometry()
extern "C" Q_DECL_EXPORT
void* C_ZN20QSGBasicGeometryNode8geometryEv(void *this_) {
  return (void*)((QSGBasicGeometryNode*)this_)->geometry();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:204
// [8] const QMatrix4x4 * matrix()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QSGBasicGeometryNode6matrixEv(void *this_) {
  return (void*)((QSGBasicGeometryNode*)this_)->matrix();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:205
// [8] const QSGClipNode * clipList()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QSGBasicGeometryNode8clipListEv(void *this_) {
  return (void*)((QSGBasicGeometryNode*)this_)->clipList();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:207
// [-2] void setRendererMatrix(const QMatrix4x4 *)
extern "C" Q_DECL_EXPORT
void C_ZN20QSGBasicGeometryNode17setRendererMatrixEPK10QMatrix4x4(void *this_, const QMatrix4x4 * m) {
  ((QSGBasicGeometryNode*)this_)->setRendererMatrix(m);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:208
// [-2] void setRendererClipList(const QSGClipNode *)
extern "C" Q_DECL_EXPORT
void C_ZN20QSGBasicGeometryNode19setRendererClipListEPK11QSGClipNode(void *this_, const QSGClipNode * c) {
  ((QSGBasicGeometryNode*)this_)->setRendererClipList(c);
}

//  main block end
