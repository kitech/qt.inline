//  header block begin
// /usr/include/qt/QtWidgets/qaccessiblewidget.h
#include <qaccessiblewidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QAccessibleWidget is pure virtual: false
// QAccessibleWidget has virtual projected: true
//  header block end

//  main block begin
// void* callback_ZN17QAccessibleWidgetD1Ev_fnptr = 0;
// extern "C" void set_callback_ZN17QAccessibleWidgetD1Ev(void*cbfn)
// { callback_ZN17QAccessibleWidgetD1Ev_fnptr = cbfn; }
// void* callback_ZNK17QAccessibleWidget6widgetEv_fnptr = 0;
// extern "C" void set_callback_ZNK17QAccessibleWidget6widgetEv(void*cbfn)
// { callback_ZNK17QAccessibleWidget6widgetEv_fnptr = cbfn; }
// void* callback_ZNK17QAccessibleWidget12parentObjectEv_fnptr = 0;
// extern "C" void set_callback_ZNK17QAccessibleWidget12parentObjectEv(void*cbfn)
// { callback_ZNK17QAccessibleWidget12parentObjectEv_fnptr = cbfn; }
// void* callback_ZN17QAccessibleWidget20addControllingSignalERK7QString_fnptr = 0;
// extern "C" void set_callback_ZN17QAccessibleWidget20addControllingSignalERK7QString(void*cbfn)
// { callback_ZN17QAccessibleWidget20addControllingSignalERK7QString_fnptr = cbfn; }

class MyQAccessibleWidget : public QAccessibleWidget {
public:
  virtual ~MyQAccessibleWidget() {}
// void QAccessibleWidget(class QWidget *, class QAccessible::Role, const class QString &)
MyQAccessibleWidget(QWidget * o, QAccessible::Role r, const QString & name) : QAccessibleWidget(o, r, name) {}
// void ~QAccessibleWidget()
// QWidget * widget()
  virtual QWidget * widget() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"widget", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QWidget *)(irv);
      // PointerPointerQWidget *
    } else {
    // auto fnptr = ((QWidget * (*)(void* ))(callback_ZNK17QAccessibleWidget6widgetEv_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this );
    // }
    return QAccessibleWidget::widget();
  }
  }
// QObject * parentObject()
  virtual QObject * parentObject() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"parentObject", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QObject *)(irv);
      // PointerPointerQObject *
    } else {
    // auto fnptr = ((QObject * (*)(void* ))(callback_ZNK17QAccessibleWidget12parentObjectEv_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this );
    // }
    return QAccessibleWidget::parentObject();
  }
  }
// void addControllingSignal(const class QString &)
  virtual void addControllingSignal(const QString & signal) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"addControllingSignal", &handled, 1, (uint64_t)&signal, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QString*))(callback_ZN17QAccessibleWidget20addControllingSignalERK7QString_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , (QString*)&signal);
    // }
    QAccessibleWidget::addControllingSignal(signal);
  }
  }
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:56
// [-2] void QAccessibleWidget(class QWidget *, class QAccessible::Role, const class QString &)
extern "C"
void* C_ZN17QAccessibleWidgetC2EP7QWidgetN11QAccessible4RoleERK7QString(QWidget * o, QAccessible::Role r, QString* name) {
  auto _nilp = (MyQAccessibleWidget*)(0);
  return  new MyQAccessibleWidget(o, r, *name);
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
void C_ZN17QAccessibleWidget8doActionERK7QString(void *this_, QString* actionName) {
  ((QAccessibleWidget*)this_)->doAction(*actionName);
}
//  main block end
