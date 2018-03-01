//  header block begin
// /usr/include/qt/QtQuick/qsgninepatchnode.h
#ifndef protected
#define protected public
#endif
#include <qsgninepatchnode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGNinePatchNode is pure virtual: true
// QSGNinePatchNode has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSGNinePatchNode : public QSGNinePatchNode {
public:
  virtual ~MyQSGNinePatchNode() {}
};

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgninepatchnode.h:51
// [-2] void ~QSGNinePatchNode()
extern "C" Q_DECL_EXPORT
void C_ZN16QSGNinePatchNodeD2Ev(void *this_) {
  delete (QSGNinePatchNode*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgninepatchnode.h:53
// [-2] void setTexture(class QSGTexture *)
extern "C" Q_DECL_EXPORT
void C_ZN16QSGNinePatchNode10setTextureEP10QSGTexture(void *this_, QSGTexture * texture) {
  ((QSGNinePatchNode*)this_)->setTexture(texture);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgninepatchnode.h:54
// [-2] void setBounds(const class QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN16QSGNinePatchNode9setBoundsERK6QRectF(void *this_, QRectF* bounds) {
  ((QSGNinePatchNode*)this_)->setBounds(*bounds);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgninepatchnode.h:55
// [-2] void setDevicePixelRatio(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN16QSGNinePatchNode19setDevicePixelRatioEd(void *this_, qreal ratio) {
  ((QSGNinePatchNode*)this_)->setDevicePixelRatio(ratio);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgninepatchnode.h:56
// [-2] void setPadding(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN16QSGNinePatchNode10setPaddingEdddd(void *this_, qreal left, qreal top, qreal right, qreal bottom) {
  ((QSGNinePatchNode*)this_)->setPadding(left, top, right, bottom);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgninepatchnode.h:57
// [-2] void update()
extern "C" Q_DECL_EXPORT
void C_ZN16QSGNinePatchNode6updateEv(void *this_) {
  ((QSGNinePatchNode*)this_)->update();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgninepatchnode.h:59
// [-2] void rebuildGeometry(class QSGTexture *, class QSGGeometry *, const class QVector4D &, const class QRectF &, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN16QSGNinePatchNode15rebuildGeometryEP10QSGTextureP11QSGGeometryRK9QVector4DRK6QRectFd(QSGTexture * texture, QSGGeometry * geometry, QVector4D* padding, QRectF* bounds, qreal dpr) {
  QSGNinePatchNode::rebuildGeometry(texture, geometry, *padding, *bounds, dpr);
}
//  main block end
