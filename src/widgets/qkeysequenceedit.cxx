//  header block begin
// /usr/include/qt/QtWidgets/qkeysequenceedit.h
#include <qkeysequenceedit.h>
#include <QtWidgets>

// QKeySequenceEdit is pure virtual: false
// QKeySequenceEdit has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:75
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN16QKeySequenceEdit5eventEP6QEvent = 0;
extern "C" void set_callback_ZN16QKeySequenceEdit5eventEP6QEvent(void*cbfn)
{ callback_ZN16QKeySequenceEdit5eventEP6QEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:76
// [-2] void keyPressEvent(class QKeyEvent *)
extern "C"
void* callback_ZN16QKeySequenceEdit13keyPressEventEP9QKeyEvent = 0;
extern "C" void set_callback_ZN16QKeySequenceEdit13keyPressEventEP9QKeyEvent(void*cbfn)
{ callback_ZN16QKeySequenceEdit13keyPressEventEP9QKeyEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:77
// [-2] void keyReleaseEvent(class QKeyEvent *)
extern "C"
void* callback_ZN16QKeySequenceEdit15keyReleaseEventEP9QKeyEvent = 0;
extern "C" void set_callback_ZN16QKeySequenceEdit15keyReleaseEventEP9QKeyEvent(void*cbfn)
{ callback_ZN16QKeySequenceEdit15keyReleaseEventEP9QKeyEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:78
// [-2] void timerEvent(class QTimerEvent *)
extern "C"
void* callback_ZN16QKeySequenceEdit10timerEventEP11QTimerEvent = 0;
extern "C" void set_callback_ZN16QKeySequenceEdit10timerEventEP11QTimerEvent(void*cbfn)
{ callback_ZN16QKeySequenceEdit10timerEventEP11QTimerEvent = cbfn; }

class MyQKeySequenceEdit : public QKeySequenceEdit {
public:
  virtual ~MyQKeySequenceEdit() {}
// void QKeySequenceEdit(class QWidget *)
MyQKeySequenceEdit(QWidget * parent) : QKeySequenceEdit(parent) {}
// void QKeySequenceEdit(const class QKeySequence &, class QWidget *)
MyQKeySequenceEdit(const QKeySequence & keySequence, QWidget * parent) : QKeySequenceEdit(keySequence, parent) {}
// bool event(class QEvent *)
  virtual bool event(QEvent * arg0) {
    if (callback_ZN16QKeySequenceEdit5eventEP6QEvent != 0) {
      // callback_ZN16QKeySequenceEdit5eventEP6QEvent(arg0);
    }
    return QKeySequenceEdit::event(arg0);
  }
// void keyPressEvent(class QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * arg0) {
    if (callback_ZN16QKeySequenceEdit13keyPressEventEP9QKeyEvent != 0) {
      // callback_ZN16QKeySequenceEdit13keyPressEventEP9QKeyEvent(arg0);
    }
    QKeySequenceEdit::keyPressEvent(arg0);
  }
// void keyReleaseEvent(class QKeyEvent *)
  virtual void keyReleaseEvent(QKeyEvent * arg0) {
    if (callback_ZN16QKeySequenceEdit15keyReleaseEventEP9QKeyEvent != 0) {
      // callback_ZN16QKeySequenceEdit15keyReleaseEventEP9QKeyEvent(arg0);
    }
    QKeySequenceEdit::keyReleaseEvent(arg0);
  }
// void timerEvent(class QTimerEvent *)
  virtual void timerEvent(QTimerEvent * arg0) {
    if (callback_ZN16QKeySequenceEdit10timerEventEP11QTimerEvent != 0) {
      // callback_ZN16QKeySequenceEdit10timerEventEP11QTimerEvent(arg0);
    }
    QKeySequenceEdit::timerEvent(arg0);
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:54
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK16QKeySequenceEdit10metaObjectEv(void *this_) {
  return (void*)((QKeySequenceEdit*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:58
// [-2] void QKeySequenceEdit(class QWidget *)
extern "C"
void* C_ZN16QKeySequenceEditC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQKeySequenceEdit*)(0);
  return  new MyQKeySequenceEdit(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:59
// [-2] void QKeySequenceEdit(const class QKeySequence &, class QWidget *)
extern "C"
void* C_ZN16QKeySequenceEditC2ERK12QKeySequenceP7QWidget(const QKeySequence & keySequence, QWidget * parent) {
  auto _nilp = (MyQKeySequenceEdit*)(0);
  return  new MyQKeySequenceEdit(keySequence, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:60
// [-2] void ~QKeySequenceEdit()
extern "C"
void C_ZN16QKeySequenceEditD2Ev(void *this_) {
  delete (QKeySequenceEdit*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:62
// [8] QKeySequence keySequence()
extern "C"
void* C_ZNK16QKeySequenceEdit11keySequenceEv(void *this_) {
  auto rv = ((QKeySequenceEdit*)this_)->keySequence();
return new QKeySequence(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:65
// [-2] void setKeySequence(const class QKeySequence &)
extern "C"
void C_ZN16QKeySequenceEdit14setKeySequenceERK12QKeySequence(void *this_, const QKeySequence & keySequence) {
  ((QKeySequenceEdit*)this_)->setKeySequence(keySequence);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:66
// [-2] void clear()
extern "C"
void C_ZN16QKeySequenceEdit5clearEv(void *this_) {
  ((QKeySequenceEdit*)this_)->clear();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:69
// [-2] void editingFinished()
extern "C"
void C_ZN16QKeySequenceEdit15editingFinishedEv(void *this_) {
  ((QKeySequenceEdit*)this_)->editingFinished();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:70
// [-2] void keySequenceChanged(const class QKeySequence &)
extern "C"
void C_ZN16QKeySequenceEdit18keySequenceChangedERK12QKeySequence(void *this_, const QKeySequence & keySequence) {
  ((QKeySequenceEdit*)this_)->keySequenceChanged(keySequence);
}
//  main block end
