//  header block begin
// /usr/include/qt/QtGui/qaccessibleobject.h
#include <qaccessibleobject.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qaccessibleobject.h:77
// void QAccessibleApplication()
extern "C"
void* C_ZN22QAccessibleApplicationC1Ev() {
  return new QAccessibleApplication();
}
// virtual
// /usr/include/qt/QtGui/qaccessibleobject.h:79
// QWindow * window()
extern "C"
void C_ZNK22QAccessibleApplication6windowEv(void *this_) {
  /*return*/ ((QAccessibleApplication*)this_)->window();
}
// virtual
// /usr/include/qt/QtGui/qaccessibleobject.h:81
// int childCount()
extern "C"
void C_ZNK22QAccessibleApplication10childCountEv(void *this_) {
  /*return*/ ((QAccessibleApplication*)this_)->childCount();
}
// virtual
// /usr/include/qt/QtGui/qaccessibleobject.h:82
// int indexOfChild(const class QAccessibleInterface *)
extern "C"
void C_ZNK22QAccessibleApplication12indexOfChildEPK20QAccessibleInterface(void *this_, const QAccessibleInterface * arg0) {
  /*return*/ ((QAccessibleApplication*)this_)->indexOfChild(arg0);
}
// virtual
// /usr/include/qt/QtGui/qaccessibleobject.h:83
// QAccessibleInterface * focusChild()
extern "C"
void C_ZNK22QAccessibleApplication10focusChildEv(void *this_) {
  /*return*/ ((QAccessibleApplication*)this_)->focusChild();
}
// virtual
// /usr/include/qt/QtGui/qaccessibleobject.h:86
// QAccessibleInterface * parent()
extern "C"
void C_ZNK22QAccessibleApplication6parentEv(void *this_) {
  /*return*/ ((QAccessibleApplication*)this_)->parent();
}
// virtual
// /usr/include/qt/QtGui/qaccessibleobject.h:87
// QAccessibleInterface * child(int)
extern "C"
void C_ZNK22QAccessibleApplication5childEi(void *this_, int index) {
  /*return*/ ((QAccessibleApplication*)this_)->child(index);
}
// virtual
// /usr/include/qt/QtGui/qaccessibleobject.h:90
// QString text(class QAccessible::Text)
extern "C"
void C_ZNK22QAccessibleApplication4textEN11QAccessible4TextE(void *this_, QAccessible::Text t) {
  /*return*/ ((QAccessibleApplication*)this_)->text(t);
}
// virtual
// /usr/include/qt/QtGui/qaccessibleobject.h:91
// QAccessible::Role role()
extern "C"
void C_ZNK22QAccessibleApplication4roleEv(void *this_) {
  /*return*/ ((QAccessibleApplication*)this_)->role();
}
// virtual
// /usr/include/qt/QtGui/qaccessibleobject.h:92
// QAccessible::State state()
extern "C"
void C_ZNK22QAccessibleApplication5stateEv(void *this_) {
  /*return*/ ((QAccessibleApplication*)this_)->state();
}
//  main block end
