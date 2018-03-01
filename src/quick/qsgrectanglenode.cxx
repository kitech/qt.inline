//  header block begin
// /usr/include/qt/QtQuick/qsgrectanglenode.h
#ifndef protected
#define protected public
#endif
#include <qsgrectanglenode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGRectangleNode is pure virtual: true
// QSGRectangleNode has virtual projected: false
//  header block end

//  main block begin

class MyQSGRectangleNode : public QSGRectangleNode {
public:
  virtual ~MyQSGRectangleNode() {}
};

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrectanglenode.h:50
// [-2] void ~QSGRectangleNode()
extern "C" Q_DECL_EXPORT
void C_ZN16QSGRectangleNodeD2Ev(void *this_) {
  delete (QSGRectangleNode*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrectanglenode.h:52
// [-2] void setRect(const class QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN16QSGRectangleNode7setRectERK6QRectF(void *this_, QRectF* rect) {
  ((QSGRectangleNode*)this_)->setRect(*rect);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrectanglenode.h:53
// [-2] void setRect(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN16QSGRectangleNode7setRectEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  ((QSGRectangleNode*)this_)->setRect(x, y, w, h);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrectanglenode.h:54
// [32] QRectF rect()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QSGRectangleNode4rectEv(void *this_) {
  auto rv = ((QSGRectangleNode*)this_)->rect();
return new QRectF(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrectanglenode.h:56
// [-2] void setColor(const class QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN16QSGRectangleNode8setColorERK6QColor(void *this_, QColor* color) {
  ((QSGRectangleNode*)this_)->setColor(*color);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrectanglenode.h:57
// [16] QColor color()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QSGRectangleNode5colorEv(void *this_) {
  auto rv = ((QSGRectangleNode*)this_)->color();
return new QColor(rv);
}

//  main block end
