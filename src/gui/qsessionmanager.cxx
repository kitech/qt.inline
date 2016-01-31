// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtGui/qsessionmanager.h
// dst-file: /src/gui/qsessionmanager.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qsessionmanager.h>


#include <qstring.h>
#include <qstringlist.h>
// <= header block end

// main block begin =>
void __keep_qsessionmanager_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSessionManager_Class_Size()
{
  return sizeof(QSessionManager);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qsessionmanager.h', line 73, column 10>
//   // proto:  void QSessionManager::setRestartHint(QSessionManager::RestartHint );
// _ZN15QSessionManager14setRestartHintENS_11RestartHintE setRestartHint(enum QSessionManager::RestartHint)
extern "C"
void
C_ZN15QSessionManager14setRestartHintENS_11RestartHintE(void *qthis,
QSessionManager::RestartHint arg1) {
  ((QSessionManager*)qthis)->setRestartHint(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qsessionmanager.h', line 58, column 13>
//   // proto:  QString QSessionManager::sessionId();
// _ZNK15QSessionManager9sessionIdEv sessionId()
extern "C"
QString*
C_ZNK15QSessionManager9sessionIdEv(void *qthis) {
  auto ret =
  ((QSessionManager*)qthis)->sessionId();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qsessionmanager.h', line 59, column 13>
//   // proto:  QString QSessionManager::sessionKey();
// _ZNK15QSessionManager10sessionKeyEv sessionKey()
extern "C"
QString*
C_ZNK15QSessionManager10sessionKeyEv(void *qthis) {
  auto ret =
  ((QSessionManager*)qthis)->sessionKey();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qsessionmanager.h', line 76, column 10>
//   // proto:  void QSessionManager::setRestartCommand(const QStringList & );
// _ZN15QSessionManager17setRestartCommandERK11QStringList setRestartCommand(const class QStringList &)
extern "C"
void
C_ZN15QSessionManager17setRestartCommandERK11QStringList(void *qthis,
const QStringList* arg1) {
  ((QSessionManager*)qthis)->setRestartCommand(*((const QStringList*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qsessionmanager.h', line 53, column 5>
//   // proto:  const QMetaObject * QSessionManager::metaObject();
// _ZNK15QSessionManager10metaObjectEv metaObject()
extern "C"
void*
C_ZNK15QSessionManager10metaObjectEv(void *qthis) {
  auto ret =
  ((QSessionManager*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qsessionmanager.h', line 62, column 10>
//   // proto:  bool QSessionManager::allowsErrorInteraction();
// _ZN15QSessionManager22allowsErrorInteractionEv allowsErrorInteraction()
extern "C"
bool
C_ZN15QSessionManager22allowsErrorInteractionEv(void *qthis) {
  auto ret =
  ((QSessionManager*)qthis)->allowsErrorInteraction();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qsessionmanager.h', line 77, column 17>
//   // proto:  QStringList QSessionManager::restartCommand();
// _ZNK15QSessionManager14restartCommandEv restartCommand()
extern "C"
QStringList*
C_ZNK15QSessionManager14restartCommandEv(void *qthis) {
  auto ret =
  ((QSessionManager*)qthis)->restartCommand();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qsessionmanager.h', line 85, column 10>
//   // proto:  void QSessionManager::requestPhase2();
// _ZN15QSessionManager13requestPhase2Ev requestPhase2()
extern "C"
void
C_ZN15QSessionManager13requestPhase2Ev(void *qthis) {
  ((QSessionManager*)qthis)->requestPhase2();
}
// <SourceLocation file '/usr/include/qt/QtGui/qsessionmanager.h', line 74, column 17>
//   // proto:  QSessionManager::RestartHint QSessionManager::restartHint();
// _ZNK15QSessionManager11restartHintEv restartHint()
extern "C"
QSessionManager::RestartHint
C_ZNK15QSessionManager11restartHintEv(void *qthis) {
  auto ret =
  ((QSessionManager*)qthis)->restartHint();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qsessionmanager.h', line 84, column 10>
//   // proto:  bool QSessionManager::isPhase2();
// _ZNK15QSessionManager8isPhase2Ev isPhase2()
extern "C"
bool
C_ZNK15QSessionManager8isPhase2Ev(void *qthis) {
  auto ret =
  ((QSessionManager*)qthis)->isPhase2();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qsessionmanager.h', line 63, column 10>
//   // proto:  void QSessionManager::release();
// _ZN15QSessionManager7releaseEv release()
extern "C"
void
C_ZN15QSessionManager7releaseEv(void *qthis) {
  ((QSessionManager*)qthis)->release();
}
// <SourceLocation file '/usr/include/qt/QtGui/qsessionmanager.h', line 81, column 10>
//   // proto:  void QSessionManager::setManagerProperty(const QString & name, const QString & value);
// _ZN15QSessionManager18setManagerPropertyERK7QStringS2_ setManagerProperty(const class QString &, const class QString &)
extern "C"
void
C_ZN15QSessionManager18setManagerPropertyERK7QStringS2_(void *qthis,
const QString* arg1,
const QString* arg2) {
  ((QSessionManager*)qthis)->setManagerProperty(*((const QString*)arg1),
*((const QString*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qsessionmanager.h', line 82, column 10>
//   // proto:  void QSessionManager::setManagerProperty(const QString & name, const QStringList & value);
// _ZN15QSessionManager18setManagerPropertyERK7QStringRK11QStringList setManagerProperty(const class QString &, const class QStringList &)
extern "C"
void
C_ZN15QSessionManager18setManagerPropertyERK7QStringRK11QStringList(void *qthis,
const QString* arg1,
const QStringList* arg2) {
  ((QSessionManager*)qthis)->setManagerProperty(*((const QString*)arg1),
*((const QStringList*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qsessionmanager.h', line 79, column 17>
//   // proto:  QStringList QSessionManager::discardCommand();
// _ZNK15QSessionManager14discardCommandEv discardCommand()
extern "C"
QStringList*
C_ZNK15QSessionManager14discardCommandEv(void *qthis) {
  auto ret =
  ((QSessionManager*)qthis)->discardCommand();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qsessionmanager.h', line 65, column 10>
//   // proto:  void QSessionManager::cancel();
// _ZN15QSessionManager6cancelEv cancel()
extern "C"
void
C_ZN15QSessionManager6cancelEv(void *qthis) {
  ((QSessionManager*)qthis)->cancel();
}
// <SourceLocation file '/usr/include/qt/QtGui/qsessionmanager.h', line 78, column 10>
//   // proto:  void QSessionManager::setDiscardCommand(const QStringList & );
// _ZN15QSessionManager17setDiscardCommandERK11QStringList setDiscardCommand(const class QStringList &)
extern "C"
void
C_ZN15QSessionManager17setDiscardCommandERK11QStringList(void *qthis,
const QStringList* arg1) {
  ((QSessionManager*)qthis)->setDiscardCommand(*((const QStringList*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qsessionmanager.h', line 61, column 10>
//   // proto:  bool QSessionManager::allowsInteraction();
// _ZN15QSessionManager17allowsInteractionEv allowsInteraction()
extern "C"
bool
C_ZN15QSessionManager17allowsInteractionEv(void *qthis) {
  auto ret =
  ((QSessionManager*)qthis)->allowsInteraction();
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// QSessionManager_SlotProxy here
class QSessionManager_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSessionManager_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/gui/qsessionmanager.moc"

extern "C" {
  QSessionManager_SlotProxy* QSessionManager_SlotProxy_new()
  {
    return new QSessionManager_SlotProxy();
  }
};

// <= body block end

