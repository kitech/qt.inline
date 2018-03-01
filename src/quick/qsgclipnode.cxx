//  header block begin
// /usr/include/qt/QtQuick/qsgnode.h
#ifndef protected
#define protected public
#endif
#include <qsgnode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGClipNode is pure virtual: false
// QSGClipNode has virtual projected: false
//  header block end

//  main block begin

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
// [-2] void setIsRectangular(_Bool)
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
// [-2] void setClipRect(const class QRectF &)
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
