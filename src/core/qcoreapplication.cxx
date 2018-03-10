//  header block begin
// /usr/include/qt/QtCore/qcoreapplication.h
#ifndef protected
#define protected public
#endif
#include <qcoreapplication.h>
#include <QtCore>
#include "callback_inherit.h"

// QCoreApplication is pure virtual: false
// QCoreApplication has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQCoreApplication : public QCoreApplication {
public:
  virtual ~MyQCoreApplication() {}
// void QCoreApplication(int &, char **, int)
MyQCoreApplication(int & argc, char** argv, int arg2) : QCoreApplication(argc, argv, arg2) {}
// Protected virtual Visibility=Default Availability=Available
// bool event(class QEvent *)
  virtual bool event(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QCoreApplication::event(arg0);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:190
// [1] bool event(class QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN16QCoreApplication5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QCoreApplication*)this_)->QCoreApplication::event(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:78
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QCoreApplication10metaObjectEv(void *this_) {
  return (void*)((QCoreApplication*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:91
// [-2] void QCoreApplication(int &, char **, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QCoreApplicationC2ERiPPci(int & argc, char** argv, int arg2) {
  auto _nilp = (MyQCoreApplication*)(0);
  return  new MyQCoreApplication(*(new int(argc)), argv, arg2);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:97
// [-2] void ~QCoreApplication()
extern "C" Q_DECL_EXPORT
void C_ZN16QCoreApplicationD2Ev(void *this_) {
  delete (QCoreApplication*)(this_);
}
// Public static Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtCore/qcoreapplication.h:99
// [8] QStringList arguments()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void* C_ZN16QCoreApplication9argumentsEv() {
  auto rv = QCoreApplication::arguments();
return new QStringList(rv);
}
#endif // QT_VERSION >= 0x040100

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:101
// [-2] void setAttribute(Qt::ApplicationAttribute, _Bool)
extern "C" Q_DECL_EXPORT
void C_ZN16QCoreApplication12setAttributeEN2Qt20ApplicationAttributeEb(Qt::ApplicationAttribute attribute, bool on) {
  QCoreApplication::setAttribute(attribute, on);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:102
// [1] bool testAttribute(Qt::ApplicationAttribute)
extern "C" Q_DECL_EXPORT
bool C_ZN16QCoreApplication13testAttributeEN2Qt20ApplicationAttributeE(Qt::ApplicationAttribute attribute) {
  return (bool)QCoreApplication::testAttribute(attribute);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:104
// [-2] void setOrganizationDomain(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QCoreApplication21setOrganizationDomainERK7QString(QString* orgDomain) {
  QCoreApplication::setOrganizationDomain(*orgDomain);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:105
// [8] QString organizationDomain()
extern "C" Q_DECL_EXPORT
void* C_ZN16QCoreApplication18organizationDomainEv() {
  auto rv = QCoreApplication::organizationDomain();
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:106
// [-2] void setOrganizationName(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QCoreApplication19setOrganizationNameERK7QString(QString* orgName) {
  QCoreApplication::setOrganizationName(*orgName);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:107
// [8] QString organizationName()
extern "C" Q_DECL_EXPORT
void* C_ZN16QCoreApplication16organizationNameEv() {
  auto rv = QCoreApplication::organizationName();
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:108
// [-2] void setApplicationName(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QCoreApplication18setApplicationNameERK7QString(QString* application) {
  QCoreApplication::setApplicationName(*application);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:109
// [8] QString applicationName()
extern "C" Q_DECL_EXPORT
void* C_ZN16QCoreApplication15applicationNameEv() {
  auto rv = QCoreApplication::applicationName();
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:110
// [-2] void setApplicationVersion(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QCoreApplication21setApplicationVersionERK7QString(QString* version) {
  QCoreApplication::setApplicationVersion(*version);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:111
// [8] QString applicationVersion()
extern "C" Q_DECL_EXPORT
void* C_ZN16QCoreApplication18applicationVersionEv() {
  auto rv = QCoreApplication::applicationVersion();
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtCore/qcoreapplication.h:113
// [-2] void setSetuidAllowed(_Bool)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QCoreApplication16setSetuidAllowedEb(bool allow) {
  QCoreApplication::setSetuidAllowed(allow);
}
#endif // QT_VERSION >= 0x050300

// Public static Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtCore/qcoreapplication.h:114
// [1] bool isSetuidAllowed()
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
bool C_ZN16QCoreApplication15isSetuidAllowedEv() {
  return (bool)QCoreApplication::isSetuidAllowed();
}
#endif // QT_VERSION >= 0x050300

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:116
// [8] QCoreApplication * instance()
extern "C" Q_DECL_EXPORT
void* C_ZN16QCoreApplication8instanceEv() {
  return (void*)QCoreApplication::instance();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:119
// [4] int exec()
extern "C" Q_DECL_EXPORT
int C_ZN16QCoreApplication4execEv() {
  return (int)QCoreApplication::exec();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:120
// [-2] void processEvents(class QEventLoop::ProcessEventsFlags)
extern "C" Q_DECL_EXPORT
void C_ZN16QCoreApplication13processEventsE6QFlagsIN10QEventLoop17ProcessEventsFlagEE(QFlags<QEventLoop::ProcessEventsFlag> flags) {
  QCoreApplication::processEvents(flags);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:121
// [-2] void processEvents(class QEventLoop::ProcessEventsFlags, int)
extern "C" Q_DECL_EXPORT
void C_ZN16QCoreApplication13processEventsE6QFlagsIN10QEventLoop17ProcessEventsFlagEEi(QFlags<QEventLoop::ProcessEventsFlag> flags, int maxtime) {
  QCoreApplication::processEvents(flags, maxtime);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:122
// [-2] void exit(int)
extern "C" Q_DECL_EXPORT
void C_ZN16QCoreApplication4exitEi(int retcode) {
  QCoreApplication::exit(retcode);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:124
// [1] bool sendEvent(class QObject *, class QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN16QCoreApplication9sendEventEP7QObjectP6QEvent(QObject * receiver, QEvent * event) {
  return (bool)QCoreApplication::sendEvent(receiver, event);
}

// Public static Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtCore/qcoreapplication.h:125
// [-2] void postEvent(class QObject *, class QEvent *, int)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN16QCoreApplication9postEventEP7QObjectP6QEventi(QObject * receiver, QEvent * event, int priority) {
  QCoreApplication::postEvent(receiver, event, priority);
}
#endif // QT_VERSION >= 0x040300

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:126
// [-2] void sendPostedEvents(class QObject *, int)
extern "C" Q_DECL_EXPORT
void C_ZN16QCoreApplication16sendPostedEventsEP7QObjecti(QObject * receiver, int event_type) {
  QCoreApplication::sendPostedEvents(receiver, event_type);
}

// Public static Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtCore/qcoreapplication.h:127
// [-2] void removePostedEvents(class QObject *, int)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN16QCoreApplication18removePostedEventsEP7QObjecti(QObject * receiver, int eventType) {
  QCoreApplication::removePostedEvents(receiver, eventType);
}
#endif // QT_VERSION >= 0x040300

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:129
// [1] bool hasPendingEvents()
extern "C" Q_DECL_EXPORT
bool C_ZN16QCoreApplication16hasPendingEventsEv() {
  return (bool)QCoreApplication::hasPendingEvents();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:131
// [8] QAbstractEventDispatcher * eventDispatcher()
extern "C" Q_DECL_EXPORT
void* C_ZN16QCoreApplication15eventDispatcherEv() {
  return (void*)QCoreApplication::eventDispatcher();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:132
// [-2] void setEventDispatcher(class QAbstractEventDispatcher *)
extern "C" Q_DECL_EXPORT
void C_ZN16QCoreApplication18setEventDispatcherEP24QAbstractEventDispatcher(QAbstractEventDispatcher * eventDispatcher) {
  QCoreApplication::setEventDispatcher(eventDispatcher);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:134
// [1] bool notify(class QObject *, class QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN16QCoreApplication6notifyEP7QObjectP6QEvent(void *this_, QObject * arg0, QEvent * arg1) {
  return (bool)((QCoreApplication*)this_)->notify(arg0, arg1);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:136
// [1] bool startingUp()
extern "C" Q_DECL_EXPORT
bool C_ZN16QCoreApplication10startingUpEv() {
  return (bool)QCoreApplication::startingUp();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:137
// [1] bool closingDown()
extern "C" Q_DECL_EXPORT
bool C_ZN16QCoreApplication11closingDownEv() {
  return (bool)QCoreApplication::closingDown();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:140
// [8] QString applicationDirPath()
extern "C" Q_DECL_EXPORT
void* C_ZN16QCoreApplication18applicationDirPathEv() {
  auto rv = QCoreApplication::applicationDirPath();
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:141
// [8] QString applicationFilePath()
extern "C" Q_DECL_EXPORT
void* C_ZN16QCoreApplication19applicationFilePathEv() {
  auto rv = QCoreApplication::applicationFilePath();
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qcoreapplication.h:142
// [8] qint64 applicationPid()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
qint64 C_ZN16QCoreApplication14applicationPidEv() {
  return (qint64)QCoreApplication::applicationPid();
}
#endif // QT_VERSION >= 0x040400

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:145
// [-2] void setLibraryPaths(const class QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN16QCoreApplication15setLibraryPathsERK11QStringList(QStringList* arg0) {
  QCoreApplication::setLibraryPaths(*arg0);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:146
// [8] QStringList libraryPaths()
extern "C" Q_DECL_EXPORT
void* C_ZN16QCoreApplication12libraryPathsEv() {
  auto rv = QCoreApplication::libraryPaths();
return new QStringList(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:147
// [-2] void addLibraryPath(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QCoreApplication14addLibraryPathERK7QString(QString* arg0) {
  QCoreApplication::addLibraryPath(*arg0);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:148
// [-2] void removeLibraryPath(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QCoreApplication17removeLibraryPathERK7QString(QString* arg0) {
  QCoreApplication::removeLibraryPath(*arg0);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:152
// [1] bool installTranslator(class QTranslator *)
extern "C" Q_DECL_EXPORT
bool C_ZN16QCoreApplication17installTranslatorEP11QTranslator(QTranslator * messageFile) {
  return (bool)QCoreApplication::installTranslator(messageFile);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:153
// [1] bool removeTranslator(class QTranslator *)
extern "C" Q_DECL_EXPORT
bool C_ZN16QCoreApplication16removeTranslatorEP11QTranslator(QTranslator * messageFile) {
  return (bool)QCoreApplication::removeTranslator(messageFile);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:156
// [8] QString translate(const char *, const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QCoreApplication9translateEPKcS1_S1_i(const char * context, const char * key, const char * disambiguation, int n) {
  auto rv = QCoreApplication::translate(context, key, disambiguation, n);
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:169
// [-2] void flush()
extern "C" Q_DECL_EXPORT
void C_ZN16QCoreApplication5flushEv() {
  QCoreApplication::flush();
}

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qcoreapplication.h:172
// [-2] void installNativeEventFilter(class QAbstractNativeEventFilter *)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN16QCoreApplication24installNativeEventFilterEP26QAbstractNativeEventFilter(void *this_, QAbstractNativeEventFilter * filterObj) {
  ((QCoreApplication*)this_)->installNativeEventFilter(filterObj);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qcoreapplication.h:173
// [-2] void removeNativeEventFilter(class QAbstractNativeEventFilter *)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN16QCoreApplication23removeNativeEventFilterEP26QAbstractNativeEventFilter(void *this_, QAbstractNativeEventFilter * filterObj) {
  ((QCoreApplication*)this_)->removeNativeEventFilter(filterObj);
}
#endif // QT_VERSION >= 0x050000

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:175
// [1] bool isQuitLockEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZN16QCoreApplication17isQuitLockEnabledEv() {
  return (bool)QCoreApplication::isQuitLockEnabled();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:176
// [-2] void setQuitLockEnabled(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN16QCoreApplication18setQuitLockEnabledEb(bool enabled) {
  QCoreApplication::setQuitLockEnabled(enabled);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:179
// [-2] void quit()
extern "C" Q_DECL_EXPORT
void C_ZN16QCoreApplication4quitEv() {
  QCoreApplication::quit();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:184
// [-2] void organizationNameChanged()
extern "C" Q_DECL_EXPORT
void C_ZN16QCoreApplication23organizationNameChangedEv(void *this_) {
  ((QCoreApplication*)this_)->organizationNameChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:185
// [-2] void organizationDomainChanged()
extern "C" Q_DECL_EXPORT
void C_ZN16QCoreApplication25organizationDomainChangedEv(void *this_) {
  ((QCoreApplication*)this_)->organizationDomainChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:186
// [-2] void applicationNameChanged()
extern "C" Q_DECL_EXPORT
void C_ZN16QCoreApplication22applicationNameChangedEv(void *this_) {
  ((QCoreApplication*)this_)->applicationNameChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:187
// [-2] void applicationVersionChanged()
extern "C" Q_DECL_EXPORT
void C_ZN16QCoreApplication25applicationVersionChangedEv(void *this_) {
  ((QCoreApplication*)this_)->applicationVersionChanged();
}

//  main block end
