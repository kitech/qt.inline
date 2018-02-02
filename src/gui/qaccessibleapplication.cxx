//  header block begin
// /usr/include/qt/QtGui/qaccessibleobject.h
#include <qaccessibleobject.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleApplication is pure virtual: false
// QAccessibleApplication has virtual projected: false
//  header block end

//  main block begin

class MyQAccessibleApplication : public QAccessibleApplication {
public:
  virtual ~MyQAccessibleApplication() {}
// void QAccessibleApplication()
MyQAccessibleApplication() : QAccessibleApplication() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleobject.h:78
// [-2] void QAccessibleApplication()
extern "C"
void* C_ZN22QAccessibleApplicationC2Ev() {
  return  new QAccessibleApplication();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleobject.h:80
// [8] QWindow * window()
extern "C"
void* C_ZNK22QAccessibleApplication6windowEv(void *this_) {
  return (void*)((QAccessibleApplication*)this_)->window();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleobject.h:82
// [4] int childCount()
extern "C"
int C_ZNK22QAccessibleApplication10childCountEv(void *this_) {
  return (int)((QAccessibleApplication*)this_)->childCount();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleobject.h:83
// [4] int indexOfChild(const class QAccessibleInterface *)
extern "C"
int C_ZNK22QAccessibleApplication12indexOfChildEPK20QAccessibleInterface(void *this_, const QAccessibleInterface * arg0) {
  return (int)((QAccessibleApplication*)this_)->indexOfChild(arg0);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleobject.h:84
// [8] QAccessibleInterface * focusChild()
extern "C"
void* C_ZNK22QAccessibleApplication10focusChildEv(void *this_) {
  return (void*)((QAccessibleApplication*)this_)->focusChild();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleobject.h:87
// [8] QAccessibleInterface * parent()
extern "C"
void* C_ZNK22QAccessibleApplication6parentEv(void *this_) {
  return (void*)((QAccessibleApplication*)this_)->parent();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleobject.h:88
// [8] QAccessibleInterface * child(int)
extern "C"
void* C_ZNK22QAccessibleApplication5childEi(void *this_, int index) {
  return (void*)((QAccessibleApplication*)this_)->child(index);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleobject.h:91
// [8] QString text(class QAccessible::Text)
extern "C"
void* C_ZNK22QAccessibleApplication4textEN11QAccessible4TextE(void *this_, QAccessible::Text t) {
  auto rv = ((QAccessibleApplication*)this_)->text(t);
return new QString(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleobject.h:92
// [4] QAccessible::Role role()
extern "C"
QAccessible::Role C_ZNK22QAccessibleApplication4roleEv(void *this_) {
  return (QAccessible::Role)((QAccessibleApplication*)this_)->role();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleobject.h:93
// [8] QAccessible::State state()
extern "C"
QAccessible::State C_ZNK22QAccessibleApplication5stateEv(void *this_) {
  return (QAccessible::State)((QAccessibleApplication*)this_)->state();
}

extern "C"
void C_ZN22QAccessibleApplicationD2Ev(void *this_) {
  delete (QAccessibleApplication*)(this_);
}
//  main block end
