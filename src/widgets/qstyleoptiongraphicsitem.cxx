//  header block begin
// since 0x040200
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionGraphicsItem is pure virtual: false
// QStyleOptionGraphicsItem has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStyleOptionGraphicsItem : public QStyleOptionGraphicsItem {
public:
  virtual ~MyQStyleOptionGraphicsItem() {}
// void QStyleOptionGraphicsItem()
MyQStyleOptionGraphicsItem() : QStyleOptionGraphicsItem() {}
// void QStyleOptionGraphicsItem(int)
MyQStyleOptionGraphicsItem(int version) : QStyleOptionGraphicsItem(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:669
// [-2] void QStyleOptionGraphicsItem()
extern "C" Q_DECL_EXPORT
void* C_ZN24QStyleOptionGraphicsItemC2Ev() {
  return  new QStyleOptionGraphicsItem();
}

// Public static Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtWidgets/qstyleoption.h:671
// [8] qreal levelOfDetailFromTransform(const class QTransform &)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
qreal C_ZN24QStyleOptionGraphicsItem26levelOfDetailFromTransformERK10QTransform(QTransform* worldTransform) {
  return (qreal)QStyleOptionGraphicsItem::levelOfDetailFromTransform(*worldTransform);
}
#endif // QT_VERSION >= 0x040600


extern "C" Q_DECL_EXPORT
void C_ZN24QStyleOptionGraphicsItemD2Ev(void *this_) {
  delete (QStyleOptionGraphicsItem*)(this_);
}
//  main block end
