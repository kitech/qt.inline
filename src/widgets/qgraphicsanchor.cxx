//  header block begin
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h
#include <qgraphicsanchorlayout.h>
#include <QtWidgets>

// QGraphicsAnchor is pure virtual: false
// QGraphicsAnchor has virtual projected: false
//  header block end

//  main block begin

class MyQGraphicsAnchor : public QGraphicsAnchor {
public:
  virtual ~MyQGraphicsAnchor() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:57
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK15QGraphicsAnchor10metaObjectEv(void *this_) {
  return (void*)((QGraphicsAnchor*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:61
// [-2] void setSpacing(qreal)
extern "C"
void C_ZN15QGraphicsAnchor10setSpacingEd(void *this_, qreal spacing) {
  ((QGraphicsAnchor*)this_)->setSpacing(spacing);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:62
// [-2] void unsetSpacing()
extern "C"
void C_ZN15QGraphicsAnchor12unsetSpacingEv(void *this_) {
  ((QGraphicsAnchor*)this_)->unsetSpacing();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:63
// [8] qreal spacing()
extern "C"
qreal C_ZNK15QGraphicsAnchor7spacingEv(void *this_) {
  return (qreal)((QGraphicsAnchor*)this_)->spacing();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:64
// [-2] void setSizePolicy(class QSizePolicy::Policy)
extern "C"
void C_ZN15QGraphicsAnchor13setSizePolicyEN11QSizePolicy6PolicyE(void *this_, QSizePolicy::Policy policy) {
  ((QGraphicsAnchor*)this_)->setSizePolicy(policy);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:65
// [4] QSizePolicy::Policy sizePolicy()
extern "C"
QSizePolicy::Policy C_ZNK15QGraphicsAnchor10sizePolicyEv(void *this_) {
  return (QSizePolicy::Policy)((QGraphicsAnchor*)this_)->sizePolicy();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:66
// [-2] void ~QGraphicsAnchor()
extern "C"
void C_ZN15QGraphicsAnchorD2Ev(void *this_) {
  delete (QGraphicsAnchor*)(this_);
}
//  main block end
