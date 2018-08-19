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

class Q_DECL_EXPORT MyQSGBasicGeometryNode : public QSGBasicGeometryNode {
public:
  virtual ~MyQSGBasicGeometryNode() {}
// void QSGBasicGeometryNode(QSGNode::NodeType)
MyQSGBasicGeometryNode(QSGNode::NodeType type_) : QSGBasicGeometryNode(type_) {}
// void QSGBasicGeometryNode(QSGBasicGeometryNodePrivate &, QSGNode::NodeType)
MyQSGBasicGeometryNode(QSGBasicGeometryNodePrivate & dd, QSGNode::NodeType type_) : QSGBasicGeometryNode(dd, type_) {}
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
