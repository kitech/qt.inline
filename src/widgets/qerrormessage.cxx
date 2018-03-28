//  header block begin
// /usr/include/qt/QtWidgets/qerrormessage.h
#ifndef protected
#define protected public
#endif
#include <qerrormessage.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QErrorMessage is pure virtual: false
// QErrorMessage has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQErrorMessage : public QErrorMessage {
public:
  virtual ~MyQErrorMessage() {}
// void QErrorMessage(QWidget *)
MyQErrorMessage(QWidget * parent) : QErrorMessage(parent) {}
// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
// void changeEvent(QEvent *)
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

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qerrormessage.h:68
// [-2] void done(int)
extern "C" Q_DECL_EXPORT
void C_ZN13QErrorMessage4doneEi(void *this_, int arg0) {
  ((QErrorMessage*)this_)->QErrorMessage::done(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qerrormessage.h:69
// [-2] void changeEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QErrorMessage11changeEventEP6QEvent(void *this_, QEvent * e) {
  ((QErrorMessage*)this_)->QErrorMessage::changeEvent(e);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qerrormessage.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QErrorMessage10metaObjectEv(void *this_) {
  return (void*)((QErrorMessage*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qerrormessage.h:58
// [-2] void QErrorMessage(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QErrorMessageC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQErrorMessage*)(0);
  return  new MyQErrorMessage(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qerrormessage.h:59
// [-2] void ~QErrorMessage()
extern "C" Q_DECL_EXPORT
void C_ZN13QErrorMessageD2Ev(void *this_) {
  delete (QErrorMessage*)(this_);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qerrormessage.h:61
// [8] QErrorMessage * qtHandler()
extern "C" Q_DECL_EXPORT
void* C_ZN13QErrorMessage9qtHandlerEv() {
  return (void*)QErrorMessage::qtHandler();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qerrormessage.h:64
// [-2] void showMessage(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN13QErrorMessage11showMessageERK7QString(void *this_, QString* message) {
  ((QErrorMessage*)this_)->showMessage(*message);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qerrormessage.h:65
// [-2] void showMessage(const QString &, const QString &)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN13QErrorMessage11showMessageERK7QStringS2_(void *this_, QString* message, QString* type_) {
  ((QErrorMessage*)this_)->showMessage(*message, *type_);
}
#endif // QT_VERSION >= 0x040500

//  main block end
