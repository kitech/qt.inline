//  header block begin
// /usr/include/qt/QtGui/qsessionmanager.h
#include <qsessionmanager.h>
#include <QtGui>

// QSessionManager is pure virtual: false
// QSessionManager has virtual projected: false
//  header block end

//  main block begin

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsessionmanager.h:60
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK15QSessionManager10metaObjectEv(void *this_) {
  return (void*)((QSessionManager*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsessionmanager.h:65
// [8] QString sessionId()
extern "C"
void* C_ZNK15QSessionManager9sessionIdEv(void *this_) {
  auto rv = ((QSessionManager*)this_)->sessionId();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsessionmanager.h:66
// [8] QString sessionKey()
extern "C"
void* C_ZNK15QSessionManager10sessionKeyEv(void *this_) {
  auto rv = ((QSessionManager*)this_)->sessionKey();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsessionmanager.h:68
// [1] bool allowsInteraction()
extern "C"
bool C_ZN15QSessionManager17allowsInteractionEv(void *this_) {
  return (bool)((QSessionManager*)this_)->allowsInteraction();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsessionmanager.h:69
// [1] bool allowsErrorInteraction()
extern "C"
bool C_ZN15QSessionManager22allowsErrorInteractionEv(void *this_) {
  return (bool)((QSessionManager*)this_)->allowsErrorInteraction();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsessionmanager.h:70
// [-2] void release()
extern "C"
void C_ZN15QSessionManager7releaseEv(void *this_) {
  ((QSessionManager*)this_)->release();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsessionmanager.h:72
// [-2] void cancel()
extern "C"
void C_ZN15QSessionManager6cancelEv(void *this_) {
  ((QSessionManager*)this_)->cancel();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsessionmanager.h:80
// [-2] void setRestartHint(enum QSessionManager::RestartHint)
extern "C"
void C_ZN15QSessionManager14setRestartHintENS_11RestartHintE(void *this_, QSessionManager::RestartHint arg0) {
  ((QSessionManager*)this_)->setRestartHint(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsessionmanager.h:81
// [4] QSessionManager::RestartHint restartHint()
extern "C"
QSessionManager::RestartHint C_ZNK15QSessionManager11restartHintEv(void *this_) {
  return (QSessionManager::RestartHint)((QSessionManager*)this_)->restartHint();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsessionmanager.h:83
// [-2] void setRestartCommand(const class QStringList &)
extern "C"
void C_ZN15QSessionManager17setRestartCommandERK11QStringList(void *this_, const QStringList & arg0) {
  ((QSessionManager*)this_)->setRestartCommand(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsessionmanager.h:85
// [-2] void setDiscardCommand(const class QStringList &)
extern "C"
void C_ZN15QSessionManager17setDiscardCommandERK11QStringList(void *this_, const QStringList & arg0) {
  ((QSessionManager*)this_)->setDiscardCommand(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsessionmanager.h:88
// [-2] void setManagerProperty(const class QString &, const class QString &)
extern "C"
void C_ZN15QSessionManager18setManagerPropertyERK7QStringS2_(void *this_, const QString & name, const QString & value) {
  ((QSessionManager*)this_)->setManagerProperty(name, value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsessionmanager.h:89
// [-2] void setManagerProperty(const class QString &, const class QStringList &)
extern "C"
void C_ZN15QSessionManager18setManagerPropertyERK7QStringRK11QStringList(void *this_, const QString & name, const QStringList & value) {
  ((QSessionManager*)this_)->setManagerProperty(name, value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsessionmanager.h:91
// [1] bool isPhase2()
extern "C"
bool C_ZNK15QSessionManager8isPhase2Ev(void *this_) {
  return (bool)((QSessionManager*)this_)->isPhase2();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsessionmanager.h:92
// [-2] void requestPhase2()
extern "C"
void C_ZN15QSessionManager13requestPhase2Ev(void *this_) {
  ((QSessionManager*)this_)->requestPhase2();
}
//  main block end
