//  header block begin
// /usr/include/qt/QtQuick/qsgsimplerectnode.h
#ifndef protected
#define protected public
#endif
#include <qsgsimplerectnode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGSimpleRectNode is pure virtual: false
// QSGSimpleRectNode has virtual projected: false
//  header block end

//  main block begin

class MyQSGSimpleRectNode : public QSGSimpleRectNode {
public:
  virtual ~MyQSGSimpleRectNode() {}
// void QSGSimpleRectNode(const class QRectF &, const class QColor &)
MyQSGSimpleRectNode(const QRectF & rect, const QColor & color) : QSGSimpleRectNode(rect, color) {}
// void QSGSimpleRectNode()
MyQSGSimpleRectNode() : QSGSimpleRectNode() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimplerectnode.h:51
// [-2] void QSGSimpleRectNode(const class QRectF &, const class QColor &)
extern "C" Q_DECL_EXPORT
void* C_ZN17QSGSimpleRectNodeC2ERK6QRectFRK6QColor(QRectF* rect, QColor* color) {
  return  new QSGSimpleRectNode(*rect, *color);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimplerectnode.h:52
// [-2] void QSGSimpleRectNode()
extern "C" Q_DECL_EXPORT
void* C_ZN17QSGSimpleRectNodeC2Ev() {
  return  new QSGSimpleRectNode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimplerectnode.h:54
// [-2] void setRect(const class QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN17QSGSimpleRectNode7setRectERK6QRectF(void *this_, QRectF* rect) {
  ((QSGSimpleRectNode*)this_)->setRect(*rect);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimplerectnode.h:55
// [-2] void setRect(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN17QSGSimpleRectNode7setRectEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  ((QSGSimpleRectNode*)this_)->setRect(x, y, w, h);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimplerectnode.h:56
// [32] QRectF rect()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QSGSimpleRectNode4rectEv(void *this_) {
  auto rv = ((QSGSimpleRectNode*)this_)->rect();
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimplerectnode.h:58
// [-2] void setColor(const class QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN17QSGSimpleRectNode8setColorERK6QColor(void *this_, QColor* color) {
  ((QSGSimpleRectNode*)this_)->setColor(*color);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimplerectnode.h:59
// [16] QColor color()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QSGSimpleRectNode5colorEv(void *this_) {
  auto rv = ((QSGSimpleRectNode*)this_)->color();
return new QColor(rv);
}


extern "C" Q_DECL_EXPORT
void C_ZN17QSGSimpleRectNodeD2Ev(void *this_) {
  delete (QSGSimpleRectNode*)(this_);
}
//  main block end
