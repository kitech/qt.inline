//  header block begin
// /usr/include/qt/QtWidgets/qerrormessage.h
#include <qerrormessage.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QErrorMessage is pure virtual: false
// QErrorMessage has virtual projected: true
//  header block end

//  main block begin

class MyQErrorMessage : public QErrorMessage {
public:
  virtual ~MyQErrorMessage() {}
// void QErrorMessage(class QWidget *)
MyQErrorMessage(QWidget * parent) : QErrorMessage(parent) {}
// void done(int)
  virtual void done(int arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"done", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QErrorMessage::done(arg0);
  }
  }
// void changeEvent(class QEvent *)
  virtual void changeEvent(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"changeEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QErrorMessage::changeEvent(e);
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qerrormessage.h:55
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK13QErrorMessage10metaObjectEv(void *this_) {
  return (void*)((QErrorMessage*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qerrormessage.h:58
// [-2] void QErrorMessage(class QWidget *)
extern "C"
void* C_ZN13QErrorMessageC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQErrorMessage*)(0);
  return  new MyQErrorMessage(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qerrormessage.h:59
// [-2] void ~QErrorMessage()
extern "C"
void C_ZN13QErrorMessageD2Ev(void *this_) {
  delete (QErrorMessage*)(this_);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qerrormessage.h:61
// [8] QErrorMessage * qtHandler()
extern "C"
void* C_ZN13QErrorMessage9qtHandlerEv() {
  return (void*)QErrorMessage::qtHandler();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qerrormessage.h:64
// [-2] void showMessage(const class QString &)
extern "C"
void C_ZN13QErrorMessage11showMessageERK7QString(void *this_, QString* message) {
  ((QErrorMessage*)this_)->showMessage(*message);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qerrormessage.h:65
// [-2] void showMessage(const class QString &, const class QString &)
extern "C"
void C_ZN13QErrorMessage11showMessageERK7QStringS2_(void *this_, QString* message, QString* type) {
  ((QErrorMessage*)this_)->showMessage(*message, *type);
}
//  main block end
