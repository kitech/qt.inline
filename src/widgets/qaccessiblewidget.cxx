//  header block begin
// /usr/include/qt/QtWidgets/qaccessiblewidget.h
#include <qaccessiblewidget.h>
#include <QtWidgets>

// QAccessibleWidget is pure virtual: false
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:84
// [-2] void ~QAccessibleWidget()
extern "C"
void* callback_ZN17QAccessibleWidgetD1Ev = 0;
extern "C" void set_callback_ZN17QAccessibleWidgetD1Ev(void*cbfn)
{ callback_ZN17QAccessibleWidgetD1Ev = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:85
// [8] QWidget * widget()
extern "C"
void* callback_ZNK17QAccessibleWidget6widgetEv = 0;
extern "C" void set_callback_ZNK17QAccessibleWidget6widgetEv(void*cbfn)
{ callback_ZNK17QAccessibleWidget6widgetEv = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:86
// [8] QObject * parentObject()
extern "C"
void* callback_ZNK17QAccessibleWidget12parentObjectEv = 0;
extern "C" void set_callback_ZNK17QAccessibleWidget12parentObjectEv(void*cbfn)
{ callback_ZNK17QAccessibleWidget12parentObjectEv = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:88
// [-2] void addControllingSignal(const class QString &)
extern "C"
void* callback_ZN17QAccessibleWidget20addControllingSignalERK7QString = 0;
extern "C" void set_callback_ZN17QAccessibleWidget20addControllingSignalERK7QString(void*cbfn)
{ callback_ZN17QAccessibleWidget20addControllingSignalERK7QString = cbfn; }

class MyQAccessibleWidget : public QAccessibleWidget {
public:
MyQAccessibleWidget(QWidget * o, QAccessible::Role r, const QString & name) : QAccessibleWidget(o, r, name) {}
// void ~QAccessibleWidget()
// QWidget * widget()
// QWidget * widget()
virtual QWidget * widget() {
  if (callback_ZNK17QAccessibleWidget6widgetEv != 0) {
  // callback_ZNK17QAccessibleWidget6widgetEv();
}}
// QObject * parentObject()
// QObject * parentObject()
virtual QObject * parentObject() {
  if (callback_ZNK17QAccessibleWidget12parentObjectEv != 0) {
  // callback_ZNK17QAccessibleWidget12parentObjectEv();
}}
// void addControllingSignal(const class QString &)
// void addControllingSignal(const class QString &)
virtual void addControllingSignal(const QString & signal) {
  if (callback_ZN17QAccessibleWidget20addControllingSignalERK7QString != 0) {
  // callback_ZN17QAccessibleWidget20addControllingSignalERK7QString(signal);
}}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:56
// [-2] void QAccessibleWidget(class QWidget *, class QAccessible::Role, const class QString &)
extern "C"
void* C_ZN17QAccessibleWidgetC1EP7QWidgetN11QAccessible4RoleERK7QString(QWidget * o, QAccessible::Role r, const QString & name) {
  (MyQAccessibleWidget*)(0);
  return  new MyQAccessibleWidget(o, r, name);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:57
// [1] bool isValid()
extern "C"
bool C_ZNK17QAccessibleWidget7isValidEv(void *this_) {
  return (bool)((QAccessibleWidget*)this_)->isValid();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:59
// [8] QWindow * window()
extern "C"
void* C_ZNK17QAccessibleWidget6windowEv(void *this_) {
  return (void*)((QAccessibleWidget*)this_)->window();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:60
// [4] int childCount()
extern "C"
int C_ZNK17QAccessibleWidget10childCountEv(void *this_) {
  return (int)((QAccessibleWidget*)this_)->childCount();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:61
// [4] int indexOfChild(const class QAccessibleInterface *)
extern "C"
int C_ZNK17QAccessibleWidget12indexOfChildEPK20QAccessibleInterface(void *this_, const QAccessibleInterface * child) {
  return (int)((QAccessibleWidget*)this_)->indexOfChild(child);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:63
// [8] QAccessibleInterface * focusChild()
extern "C"
void* C_ZNK17QAccessibleWidget10focusChildEv(void *this_) {
  return (void*)((QAccessibleWidget*)this_)->focusChild();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:65
// [16] QRect rect()
extern "C"
void* C_ZNK17QAccessibleWidget4rectEv(void *this_) {
  auto rv = ((QAccessibleWidget*)this_)->rect();
return new QRect(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:67
// [8] QAccessibleInterface * parent()
extern "C"
void* C_ZNK17QAccessibleWidget6parentEv(void *this_) {
  return (void*)((QAccessibleWidget*)this_)->parent();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:68
// [8] QAccessibleInterface * child(int)
extern "C"
void* C_ZNK17QAccessibleWidget5childEi(void *this_, int index) {
  return (void*)((QAccessibleWidget*)this_)->child(index);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:70
// [8] QString text(class QAccessible::Text)
extern "C"
void* C_ZNK17QAccessibleWidget4textEN11QAccessible4TextE(void *this_, QAccessible::Text t) {
  auto rv = ((QAccessibleWidget*)this_)->text(t);
return new QString(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:71
// [4] QAccessible::Role role()
extern "C"
QAccessible::Role C_ZNK17QAccessibleWidget4roleEv(void *this_) {
  return (QAccessible::Role)((QAccessibleWidget*)this_)->role();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:72
// [8] QAccessible::State state()
extern "C"
QAccessible::State C_ZNK17QAccessibleWidget5stateEv(void *this_) {
  return (QAccessible::State)((QAccessibleWidget*)this_)->state();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:74
// [16] QColor foregroundColor()
extern "C"
void* C_ZNK17QAccessibleWidget15foregroundColorEv(void *this_) {
  auto rv = ((QAccessibleWidget*)this_)->foregroundColor();
return new QColor(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:75
// [16] QColor backgroundColor()
extern "C"
void* C_ZNK17QAccessibleWidget15backgroundColorEv(void *this_) {
  auto rv = ((QAccessibleWidget*)this_)->backgroundColor();
return new QColor(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:77
// [8] void * interface_cast(class QAccessible::InterfaceType)
extern "C"
void* C_ZN17QAccessibleWidget14interface_castEN11QAccessible13InterfaceTypeE(void *this_, QAccessible::InterfaceType t) {
  return (void*)((QAccessibleWidget*)this_)->interface_cast(t);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:81
// [-2] void doAction(const class QString &)
extern "C"
void C_ZN17QAccessibleWidget8doActionERK7QString(void *this_, const QString & actionName) {
  ((QAccessibleWidget*)this_)->doAction(actionName);
}
//  main block end
