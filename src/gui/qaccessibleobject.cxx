//  header block begin
// /usr/include/qt/QtGui/qaccessibleobject.h
#ifndef protected
#define protected public
#endif
#include <qaccessibleobject.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleObject is pure virtual: false
// QAccessibleObject has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAccessibleObject : public QAccessibleObject {
public:
  virtual ~MyQAccessibleObject() {}
// void QAccessibleObject(QObject *)
MyQAccessibleObject(QObject * object) : QAccessibleObject(object) {}
// Protected virtual Visibility=Default Availability=Available
// void ~QAccessibleObject()
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleobject.h:57
// [-2] void QAccessibleObject(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QAccessibleObjectC2EP7QObject(QObject * object) {
  return 0; // new QAccessibleObject(object);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleobject.h:59
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QAccessibleObject7isValidEv(void *this_) {
  return (bool)((QAccessibleObject*)this_)->isValid();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleobject.h:60
// [8] QObject * object()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAccessibleObject6objectEv(void *this_) {
  return (void*)((QAccessibleObject*)this_)->object();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleobject.h:63
// [16] QRect rect()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAccessibleObject4rectEv(void *this_) {
  auto rv = ((QAccessibleObject*)this_)->rect();
return new QRect(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleobject.h:64
// [-2] void setText(QAccessible::Text, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN17QAccessibleObject7setTextEN11QAccessible4TextERK7QString(void *this_, QAccessible::Text t, QString* text) {
  ((QAccessibleObject*)this_)->setText(t, *text);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleobject.h:65
// [8] QAccessibleInterface * childAt(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAccessibleObject7childAtEii(void *this_, int x, int y) {
  return (void*)((QAccessibleObject*)this_)->childAt(x, y);
}


extern "C" Q_DECL_EXPORT
void C_ZN17QAccessibleObjectD2Ev(void *this_) {
  delete (QAccessibleObject*)(this_);
}
//  main block end
