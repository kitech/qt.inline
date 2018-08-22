//  header block begin
// since 0x050800
// /usr/include/qt/QtQuick/qsgrectanglenode.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgrectanglenode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGRectangleNode is pure virtual: true
// QSGRectangleNode has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSGRectangleNode : public QSGRectangleNode {
public:
  virtual ~MyQSGRectangleNode() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setRect(const QRectF &)
  virtual void setRect(const QRectF & rect)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setRect", &handled, 1, (uint64_t)&rect, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QSGRectangleNode::setRect(rect);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [32] QRectF rect()
  virtual QRectF rect() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"rect", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QRectF){};}
    auto prv = (QRectF*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QRectF
    } else {
    return (QRectF){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setColor(const QColor &)
  virtual void setColor(const QColor & color)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setColor", &handled, 1, (uint64_t)&color, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QSGRectangleNode::setColor(color);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [16] QColor color()
  virtual QColor color() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"color", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QColor){};}
    auto prv = (QColor*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QColor
    } else {
    return (QColor){};
  }
  }

};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrectanglenode.h:52
// [-2] void setRect(const QRectF &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrectanglenode.h:54
// [32] QRectF rect()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrectanglenode.h:56
// [-2] void setColor(const QColor &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrectanglenode.h:57
// [16] QColor color()
// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrectanglenode.h:50
// [-2] void ~QSGRectangleNode()
extern "C" Q_DECL_EXPORT
void C_ZN16QSGRectangleNodeD2Ev(void *this_) {
  delete (QSGRectangleNode*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrectanglenode.h:52
// [-2] void setRect(const QRectF &)
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
// [-2] void setColor(const QColor &)
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
