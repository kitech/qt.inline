//  header block begin
// since 0x050200
// /usr/include/qt/QtWidgets/qkeysequenceedit.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qkeysequenceedit.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QKeySequenceEdit is pure virtual: false
// QKeySequenceEdit has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQKeySequenceEdit : public QKeySequenceEdit {
public:
  virtual ~MyQKeySequenceEdit() {}
// void QKeySequenceEdit(QWidget *)
MyQKeySequenceEdit(QWidget * parent) : QKeySequenceEdit(parent) {}
// void QKeySequenceEdit(const QKeySequence &, QWidget *)
MyQKeySequenceEdit(const QKeySequence & keySequence, QWidget * parent) : QKeySequenceEdit(keySequence, parent) {}
// void QKeySequenceEdit(QKeySequenceEditPrivate &, QWidget *, Qt::WindowFlags)
MyQKeySequenceEdit(QKeySequenceEditPrivate & d, QWidget * parent, QFlags<Qt::WindowType> f) : QKeySequenceEdit(d, parent, f) {}
// Protected virtual Visibility=Default Availability=Available
// bool event(QEvent *)
  virtual bool event(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QKeySequenceEdit::event(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void keyPressEvent(QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyPressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QKeySequenceEdit::keyPressEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void keyReleaseEvent(QKeyEvent *)
  virtual void keyReleaseEvent(QKeyEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyReleaseEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QKeySequenceEdit::keyReleaseEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void timerEvent(QTimerEvent *)
  virtual void timerEvent(QTimerEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"timerEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QKeySequenceEdit::timerEvent(arg0);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:75
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN16QKeySequenceEdit5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QKeySequenceEdit*)this_)->QKeySequenceEdit::event(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:76
// [-2] void keyPressEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN16QKeySequenceEdit13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * arg0) {
  ((QKeySequenceEdit*)this_)->QKeySequenceEdit::keyPressEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:77
// [-2] void keyReleaseEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN16QKeySequenceEdit15keyReleaseEventEP9QKeyEvent(void *this_, QKeyEvent * arg0) {
  ((QKeySequenceEdit*)this_)->QKeySequenceEdit::keyReleaseEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:78
// [-2] void timerEvent(QTimerEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN16QKeySequenceEdit10timerEventEP11QTimerEvent(void *this_, QTimerEvent * arg0) {
  ((QKeySequenceEdit*)this_)->QKeySequenceEdit::timerEvent(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QKeySequenceEdit10metaObjectEv(void *this_) {
  return (void*)((QKeySequenceEdit*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:54
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QKeySequenceEdit11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QKeySequenceEdit*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:54
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN16QKeySequenceEdit11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QKeySequenceEdit*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:54
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QKeySequenceEdit2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QKeySequenceEdit::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:54
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QKeySequenceEdit6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QKeySequenceEdit::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:58
// [-2] void QKeySequenceEdit(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QKeySequenceEditC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQKeySequenceEdit*)(0);
  return  new MyQKeySequenceEdit(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:59
// [-2] void QKeySequenceEdit(const QKeySequence &, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QKeySequenceEditC2ERK12QKeySequenceP7QWidget(QKeySequence* keySequence, QWidget * parent) {
  auto _nilp = (MyQKeySequenceEdit*)(0);
  return  new MyQKeySequenceEdit(*keySequence, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:60
// [-2] void ~QKeySequenceEdit()
extern "C" Q_DECL_EXPORT
void C_ZN16QKeySequenceEditD2Ev(void *this_) {
  delete (QKeySequenceEdit*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:62
// [8] QKeySequence keySequence()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QKeySequenceEdit11keySequenceEv(void *this_) {
  auto rv = ((QKeySequenceEdit*)this_)->keySequence();
return new QKeySequence(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:65
// [-2] void setKeySequence(const QKeySequence &)
extern "C" Q_DECL_EXPORT
void C_ZN16QKeySequenceEdit14setKeySequenceERK12QKeySequence(void *this_, QKeySequence* keySequence) {
  ((QKeySequenceEdit*)this_)->setKeySequence(*keySequence);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:66
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN16QKeySequenceEdit5clearEv(void *this_) {
  ((QKeySequenceEdit*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:69
// [-2] void editingFinished()
extern "C" Q_DECL_EXPORT
void C_ZN16QKeySequenceEdit15editingFinishedEv(void *this_) {
  ((QKeySequenceEdit*)this_)->editingFinished();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:70
// [-2] void keySequenceChanged(const QKeySequence &)
extern "C" Q_DECL_EXPORT
void C_ZN16QKeySequenceEdit18keySequenceChangedERK12QKeySequence(void *this_, QKeySequence* keySequence) {
  ((QKeySequenceEdit*)this_)->keySequenceChanged(*keySequence);
}

//  main block end
