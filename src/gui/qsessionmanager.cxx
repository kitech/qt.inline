//  header block begin
// /usr/include/qt/QtGui/qsessionmanager.h
#include <qsessionmanager.h>
#include <QtGui>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtGui/qsessionmanager.h:59
// const QMetaObject * metaObject()
extern "C"
void C_ZNK15QSessionManager10metaObjectEv(void *this_) {
  /*return*/ ((QSessionManager*)this_)->metaObject();
}
// /usr/include/qt/QtGui/qsessionmanager.h:64
// QString sessionId()
extern "C"
void C_ZNK15QSessionManager9sessionIdEv(void *this_) {
  /*return*/ ((QSessionManager*)this_)->sessionId();
}
// /usr/include/qt/QtGui/qsessionmanager.h:65
// QString sessionKey()
extern "C"
void C_ZNK15QSessionManager10sessionKeyEv(void *this_) {
  /*return*/ ((QSessionManager*)this_)->sessionKey();
}
// /usr/include/qt/QtGui/qsessionmanager.h:67
// bool allowsInteraction()
extern "C"
void C_ZN15QSessionManager17allowsInteractionEv(void *this_) {
  /*return*/ ((QSessionManager*)this_)->allowsInteraction();
}
// /usr/include/qt/QtGui/qsessionmanager.h:68
// bool allowsErrorInteraction()
extern "C"
void C_ZN15QSessionManager22allowsErrorInteractionEv(void *this_) {
  /*return*/ ((QSessionManager*)this_)->allowsErrorInteraction();
}
// /usr/include/qt/QtGui/qsessionmanager.h:69
// void release()
extern "C"
void C_ZN15QSessionManager7releaseEv(void *this_) {
  ((QSessionManager*)this_)->release();
}
// /usr/include/qt/QtGui/qsessionmanager.h:71
// void cancel()
extern "C"
void C_ZN15QSessionManager6cancelEv(void *this_) {
  ((QSessionManager*)this_)->cancel();
}
// /usr/include/qt/QtGui/qsessionmanager.h:79
// void setRestartHint(enum QSessionManager::RestartHint)
extern "C"
void C_ZN15QSessionManager14setRestartHintENS_11RestartHintE(void *this_, QSessionManager::RestartHint arg0) {
  ((QSessionManager*)this_)->setRestartHint(arg0);
}
// /usr/include/qt/QtGui/qsessionmanager.h:80
// QSessionManager::RestartHint restartHint()
extern "C"
void C_ZNK15QSessionManager11restartHintEv(void *this_) {
  /*return*/ ((QSessionManager*)this_)->restartHint();
}
// /usr/include/qt/QtGui/qsessionmanager.h:82
// void setRestartCommand(const class QStringList &)
extern "C"
void C_ZN15QSessionManager17setRestartCommandERK11QStringList(void *this_, const QStringList & arg0) {
  ((QSessionManager*)this_)->setRestartCommand(arg0);
}
// /usr/include/qt/QtGui/qsessionmanager.h:83
// QStringList restartCommand()
extern "C"
void C_ZNK15QSessionManager14restartCommandEv(void *this_) {
  /*return*/ ((QSessionManager*)this_)->restartCommand();
}
// /usr/include/qt/QtGui/qsessionmanager.h:84
// void setDiscardCommand(const class QStringList &)
extern "C"
void C_ZN15QSessionManager17setDiscardCommandERK11QStringList(void *this_, const QStringList & arg0) {
  ((QSessionManager*)this_)->setDiscardCommand(arg0);
}
// /usr/include/qt/QtGui/qsessionmanager.h:85
// QStringList discardCommand()
extern "C"
void C_ZNK15QSessionManager14discardCommandEv(void *this_) {
  /*return*/ ((QSessionManager*)this_)->discardCommand();
}
// /usr/include/qt/QtGui/qsessionmanager.h:87
// void setManagerProperty(const class QString &, const class QString &)
extern "C"
void C_ZN15QSessionManager18setManagerPropertyERK7QStringS2_(void *this_, const QString & name, const QString & value) {
  ((QSessionManager*)this_)->setManagerProperty(name, value);
}
// /usr/include/qt/QtGui/qsessionmanager.h:88
// void setManagerProperty(const class QString &, const class QStringList &)
extern "C"
void C_ZN15QSessionManager18setManagerPropertyERK7QStringRK11QStringList(void *this_, const QString & name, const QStringList & value) {
  ((QSessionManager*)this_)->setManagerProperty(name, value);
}
// /usr/include/qt/QtGui/qsessionmanager.h:90
// bool isPhase2()
extern "C"
void C_ZNK15QSessionManager8isPhase2Ev(void *this_) {
  /*return*/ ((QSessionManager*)this_)->isPhase2();
}
// /usr/include/qt/QtGui/qsessionmanager.h:91
// void requestPhase2()
extern "C"
void C_ZN15QSessionManager13requestPhase2Ev(void *this_) {
  ((QSessionManager*)this_)->requestPhase2();
}
//  main block end
