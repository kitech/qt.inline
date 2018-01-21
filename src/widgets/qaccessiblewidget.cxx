//  header block begin
// /usr/include/qt/QtWidgets/qaccessiblewidget.h
#include <qaccessiblewidget.h>
#include <QtWidgets>

//  header block end

//  main block begin
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:55
// void QAccessibleWidget(class QWidget *, class QAccessible::Role, const class QString &)
extern "C"
void* C_ZN17QAccessibleWidgetC1EP7QWidgetN11QAccessible4RoleERK7QString(QWidget * o, QAccessible::Role r, const QString & name) {
  return new QAccessibleWidget(o, r, name);
}
// virtual
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:56
// bool isValid()
extern "C"
void C_ZNK17QAccessibleWidget7isValidEv(void *this_) {
  /*return*/ ((QAccessibleWidget*)this_)->isValid();
}
// virtual
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:58
// QWindow * window()
extern "C"
void C_ZNK17QAccessibleWidget6windowEv(void *this_) {
  /*return*/ ((QAccessibleWidget*)this_)->window();
}
// virtual
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:59
// int childCount()
extern "C"
void C_ZNK17QAccessibleWidget10childCountEv(void *this_) {
  /*return*/ ((QAccessibleWidget*)this_)->childCount();
}
// virtual
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:60
// int indexOfChild(const class QAccessibleInterface *)
extern "C"
void C_ZNK17QAccessibleWidget12indexOfChildEPK20QAccessibleInterface(void *this_, const QAccessibleInterface * child) {
  /*return*/ ((QAccessibleWidget*)this_)->indexOfChild(child);
}
// virtual
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:61
// QVector<QPair<QAccessibleInterface *, QAccessible::Relation> > relations(class QAccessible::Relation)
extern "C"
void C_ZNK17QAccessibleWidget9relationsE6QFlagsIN11QAccessible12RelationFlagEE(void *this_, QFlags<QAccessible::RelationFlag> match) {
  /*return*/ ((QAccessibleWidget*)this_)->relations(match);
}
// virtual
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:62
// QAccessibleInterface * focusChild()
extern "C"
void C_ZNK17QAccessibleWidget10focusChildEv(void *this_) {
  /*return*/ ((QAccessibleWidget*)this_)->focusChild();
}
// virtual
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:64
// QRect rect()
extern "C"
void C_ZNK17QAccessibleWidget4rectEv(void *this_) {
  /*return*/ ((QAccessibleWidget*)this_)->rect();
}
// virtual
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:66
// QAccessibleInterface * parent()
extern "C"
void C_ZNK17QAccessibleWidget6parentEv(void *this_) {
  /*return*/ ((QAccessibleWidget*)this_)->parent();
}
// virtual
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:67
// QAccessibleInterface * child(int)
extern "C"
void C_ZNK17QAccessibleWidget5childEi(void *this_, int index) {
  /*return*/ ((QAccessibleWidget*)this_)->child(index);
}
// virtual
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:69
// QString text(class QAccessible::Text)
extern "C"
void C_ZNK17QAccessibleWidget4textEN11QAccessible4TextE(void *this_, QAccessible::Text t) {
  /*return*/ ((QAccessibleWidget*)this_)->text(t);
}
// virtual
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:70
// QAccessible::Role role()
extern "C"
void C_ZNK17QAccessibleWidget4roleEv(void *this_) {
  /*return*/ ((QAccessibleWidget*)this_)->role();
}
// virtual
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:71
// QAccessible::State state()
extern "C"
void C_ZNK17QAccessibleWidget5stateEv(void *this_) {
  /*return*/ ((QAccessibleWidget*)this_)->state();
}
// virtual
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:73
// QColor foregroundColor()
extern "C"
void C_ZNK17QAccessibleWidget15foregroundColorEv(void *this_) {
  /*return*/ ((QAccessibleWidget*)this_)->foregroundColor();
}
// virtual
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:74
// QColor backgroundColor()
extern "C"
void C_ZNK17QAccessibleWidget15backgroundColorEv(void *this_) {
  /*return*/ ((QAccessibleWidget*)this_)->backgroundColor();
}
// virtual
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:76
// void * interface_cast(class QAccessible::InterfaceType)
extern "C"
void C_ZN17QAccessibleWidget14interface_castEN11QAccessible13InterfaceTypeE(void *this_, QAccessible::InterfaceType t) {
  /*return*/ ((QAccessibleWidget*)this_)->interface_cast(t);
}
// virtual
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:79
// QStringList actionNames()
extern "C"
void C_ZNK17QAccessibleWidget11actionNamesEv(void *this_) {
  /*return*/ ((QAccessibleWidget*)this_)->actionNames();
}
// virtual
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:80
// void doAction(const class QString &)
extern "C"
void C_ZN17QAccessibleWidget8doActionERK7QString(void *this_, const QString & actionName) {
  ((QAccessibleWidget*)this_)->doAction(actionName);
}
// virtual
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:81
// QStringList keyBindingsForAction(const class QString &)
extern "C"
void C_ZNK17QAccessibleWidget20keyBindingsForActionERK7QString(void *this_, const QString & actionName) {
  /*return*/ ((QAccessibleWidget*)this_)->keyBindingsForAction(actionName);
}
//  main block end
