//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>

// QStyleOptionGraphicsItem is pure virtual: false
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:673
// [-2] void QStyleOptionGraphicsItem(int)
extern "C"
void* callback_ZN24QStyleOptionGraphicsItemC1Ei = 0;
extern "C" void set_callback_ZN24QStyleOptionGraphicsItemC1Ei(void*cbfn)
{ callback_ZN24QStyleOptionGraphicsItemC1Ei = cbfn; }

class MyQStyleOptionGraphicsItem : public QStyleOptionGraphicsItem {
public:
MyQStyleOptionGraphicsItem() : QStyleOptionGraphicsItem() {}
MyQStyleOptionGraphicsItem(int version) : QStyleOptionGraphicsItem(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:669
// [-2] void QStyleOptionGraphicsItem()
extern "C"
void* C_ZN24QStyleOptionGraphicsItemC1Ev() {
  (MyQStyleOptionGraphicsItem*)(0);
  return  new MyQStyleOptionGraphicsItem();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:671
// [8] qreal levelOfDetailFromTransform(const class QTransform &)
extern "C"
qreal C_ZN24QStyleOptionGraphicsItem26levelOfDetailFromTransformERK10QTransform(const QTransform & worldTransform) {
  return (qreal)QStyleOptionGraphicsItem::levelOfDetailFromTransform(worldTransform);
}
//  main block end
