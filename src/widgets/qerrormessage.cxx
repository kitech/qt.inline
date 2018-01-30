//  header block begin
// /usr/include/qt/QtWidgets/qerrormessage.h
#include <qerrormessage.h>
#include <QtWidgets>

// QErrorMessage is pure virtual: false
// QErrorMessage has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qerrormessage.h:68
// [-2] void done(int)
extern "C"
void* callback_ZN13QErrorMessage4doneEi = 0;
extern "C" void set_callback_ZN13QErrorMessage4doneEi(void*cbfn)
{ callback_ZN13QErrorMessage4doneEi = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qerrormessage.h:69
// [-2] void changeEvent(class QEvent *)
extern "C"
void* callback_ZN13QErrorMessage11changeEventEP6QEvent = 0;
extern "C" void set_callback_ZN13QErrorMessage11changeEventEP6QEvent(void*cbfn)
{ callback_ZN13QErrorMessage11changeEventEP6QEvent = cbfn; }

class MyQErrorMessage : public QErrorMessage {
public:
  virtual ~MyQErrorMessage() {}
// void QErrorMessage(class QWidget *)
MyQErrorMessage(QWidget * parent) : QErrorMessage(parent) {}
// void done(int)
  virtual void done(int arg0) {
    if (callback_ZN13QErrorMessage4doneEi != 0) {
      // callback_ZN13QErrorMessage4doneEi(arg0);
    }
    QErrorMessage::done(arg0);
  }
// void changeEvent(class QEvent *)
  virtual void changeEvent(QEvent * e) {
    if (callback_ZN13QErrorMessage11changeEventEP6QEvent != 0) {
      // callback_ZN13QErrorMessage11changeEventEP6QEvent(e);
    }
    QErrorMessage::changeEvent(e);
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
void C_ZN13QErrorMessage11showMessageERK7QString(void *this_, const QString & message) {
  ((QErrorMessage*)this_)->showMessage(message);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qerrormessage.h:65
// [-2] void showMessage(const class QString &, const class QString &)
extern "C"
void C_ZN13QErrorMessage11showMessageERK7QStringS2_(void *this_, const QString & message, const QString & type) {
  ((QErrorMessage*)this_)->showMessage(message, type);
}
//  main block end
