//  header block begin
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

class MyQStyleOptionGraphicsItem : public QStyleOptionGraphicsItem {
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
// /usr/include/qt/QtWidgets/qstyleoption.h:671
// [8] qreal levelOfDetailFromTransform(const class QTransform &)
extern "C" Q_DECL_EXPORT
qreal C_ZN24QStyleOptionGraphicsItem26levelOfDetailFromTransformERK10QTransform(QTransform* worldTransform) {
  return (qreal)QStyleOptionGraphicsItem::levelOfDetailFromTransform(*worldTransform);
}

extern "C" Q_DECL_EXPORT
void C_ZN24QStyleOptionGraphicsItemD2Ev(void *this_) {
  delete (QStyleOptionGraphicsItem*)(this_);
}
//  main block end
