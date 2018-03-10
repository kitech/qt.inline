//  header block begin
// since 0x040600
// /usr/include/qt/QtWidgets/qgesture.h
#ifndef protected
#define protected public
#endif
#include <qgesture.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTapGesture is pure virtual: false
// QTapGesture has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQTapGesture : public QTapGesture {
public:
  virtual ~MyQTapGesture() {}
// void QTapGesture(class QObject *)
MyQTapGesture(QObject * parent) : QTapGesture(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:236
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTapGesture10metaObjectEv(void *this_) {
  return (void*)((QTapGesture*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:242
// [-2] void QTapGesture(class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTapGestureC2EP7QObject(QObject * parent) {
  return  new QTapGesture(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:243
// [-2] void ~QTapGesture()
extern "C" Q_DECL_EXPORT
void C_ZN11QTapGestureD2Ev(void *this_) {
  delete (QTapGesture*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:245
// [16] QPointF position()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTapGesture8positionEv(void *this_) {
  auto rv = ((QTapGesture*)this_)->position();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:246
// [-2] void setPosition(const class QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN11QTapGesture11setPositionERK7QPointF(void *this_, QPointF* pos) {
  ((QTapGesture*)this_)->setPosition(*pos);
}

//  main block end
