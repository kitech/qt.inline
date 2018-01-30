//  header block begin
// /usr/include/qt/QtWidgets/qshortcut.h
#include <qshortcut.h>
#include <QtWidgets>

// QShortcut is pure virtual: false
// QShortcut has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:94
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN9QShortcut5eventEP6QEvent = 0;
extern "C" void set_callback_ZN9QShortcut5eventEP6QEvent(void*cbfn)
{ callback_ZN9QShortcut5eventEP6QEvent = cbfn; }

class MyQShortcut : public QShortcut {
public:
  virtual ~MyQShortcut() {}
// void QShortcut(class QWidget *)
MyQShortcut(QWidget * parent) : QShortcut(parent) {}
// void QShortcut(const class QKeySequence &, class QWidget *, const char *, const char *, Qt::ShortcutContext)
MyQShortcut(const QKeySequence & key, QWidget * parent, const char * member, const char * ambiguousMember, Qt::ShortcutContext context) : QShortcut(key, parent, member, ambiguousMember, context) {}
// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    if (callback_ZN9QShortcut5eventEP6QEvent != 0) {
      // callback_ZN9QShortcut5eventEP6QEvent(e);
    }
    return QShortcut::event(e);
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:55
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK9QShortcut10metaObjectEv(void *this_) {
  return (void*)((QShortcut*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:63
// [-2] void QShortcut(class QWidget *)
extern "C"
void* C_ZN9QShortcutC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQShortcut*)(0);
  return  new MyQShortcut(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:64
// [-2] void QShortcut(const class QKeySequence &, class QWidget *, const char *, const char *, Qt::ShortcutContext)
extern "C"
void* C_ZN9QShortcutC2ERK12QKeySequenceP7QWidgetPKcS6_N2Qt15ShortcutContextE(const QKeySequence & key, QWidget * parent, const char * member, const char * ambiguousMember, Qt::ShortcutContext context) {
  auto _nilp = (MyQShortcut*)(0);
  return  new MyQShortcut(key, parent, member, ambiguousMember, context);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:67
// [-2] void ~QShortcut()
extern "C"
void C_ZN9QShortcutD2Ev(void *this_) {
  delete (QShortcut*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:69
// [-2] void setKey(const class QKeySequence &)
extern "C"
void C_ZN9QShortcut6setKeyERK12QKeySequence(void *this_, const QKeySequence & key) {
  ((QShortcut*)this_)->setKey(key);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:70
// [8] QKeySequence key()
extern "C"
void* C_ZNK9QShortcut3keyEv(void *this_) {
  auto rv = ((QShortcut*)this_)->key();
return new QKeySequence(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:72
// [-2] void setEnabled(_Bool)
extern "C"
void C_ZN9QShortcut10setEnabledEb(void *this_, bool enable) {
  ((QShortcut*)this_)->setEnabled(enable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:73
// [1] bool isEnabled()
extern "C"
bool C_ZNK9QShortcut9isEnabledEv(void *this_) {
  return (bool)((QShortcut*)this_)->isEnabled();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:75
// [-2] void setContext(Qt::ShortcutContext)
extern "C"
void C_ZN9QShortcut10setContextEN2Qt15ShortcutContextE(void *this_, Qt::ShortcutContext context) {
  ((QShortcut*)this_)->setContext(context);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:76
// [4] Qt::ShortcutContext context()
extern "C"
Qt::ShortcutContext C_ZNK9QShortcut7contextEv(void *this_) {
  return (Qt::ShortcutContext)((QShortcut*)this_)->context();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:78
// [-2] void setWhatsThis(const class QString &)
extern "C"
void C_ZN9QShortcut12setWhatsThisERK7QString(void *this_, const QString & text) {
  ((QShortcut*)this_)->setWhatsThis(text);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:79
// [8] QString whatsThis()
extern "C"
void* C_ZNK9QShortcut9whatsThisEv(void *this_) {
  auto rv = ((QShortcut*)this_)->whatsThis();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:81
// [-2] void setAutoRepeat(_Bool)
extern "C"
void C_ZN9QShortcut13setAutoRepeatEb(void *this_, bool on) {
  ((QShortcut*)this_)->setAutoRepeat(on);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:82
// [1] bool autoRepeat()
extern "C"
bool C_ZNK9QShortcut10autoRepeatEv(void *this_) {
  return (bool)((QShortcut*)this_)->autoRepeat();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:84
// [4] int id()
extern "C"
int C_ZNK9QShortcut2idEv(void *this_) {
  return (int)((QShortcut*)this_)->id();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:86
// [8] QWidget * parentWidget()
extern "C"
void* C_ZNK9QShortcut12parentWidgetEv(void *this_) {
  return (void*)((QShortcut*)this_)->parentWidget();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:90
// [-2] void activated()
extern "C"
void C_ZN9QShortcut9activatedEv(void *this_) {
  ((QShortcut*)this_)->activated();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qshortcut.h:91
// [-2] void activatedAmbiguously()
extern "C"
void C_ZN9QShortcut20activatedAmbiguouslyEv(void *this_) {
  ((QShortcut*)this_)->activatedAmbiguously();
}
//  main block end
