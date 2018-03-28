//  header block begin
// /usr/include/qt/QtQuick/qsgnode.h
#ifndef protected
#define protected public
#endif
#include <qsgnode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGTransformNode is pure virtual: false
// QSGTransformNode has virtual projected: false
//  header block end

//  main block begin

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
