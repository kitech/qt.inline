//  header block begin
// /usr/include/qt/QtCore/qcoreapplication.h
#include <qcoreapplication.h>
#include <QtCore>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtCore/qcoreapplication.h:78
// const QMetaObject * metaObject()
extern "C"
void C_ZNK16QCoreApplication10metaObjectEv(void *this_) {
  /*return*/ ((QCoreApplication*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qcoreapplication.h:91
// void QCoreApplication(int &, char **, int)
extern "C"
void* C_ZN16QCoreApplicationC1ERiPPci(int & argc, char ** argv, int arg2) {
  return new QCoreApplication(argc, argv, arg2);
}
// virtual
// /usr/include/qt/QtCore/qcoreapplication.h:97
// void ~QCoreApplication()
extern "C"
void C_ZN16QCoreApplicationD1Ev(void *this_) {
  delete (QCoreApplication*)(this_);
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:99
// QStringList arguments()
extern "C"
void C_ZN16QCoreApplication9argumentsEv() {
  /*return*/ QCoreApplication::arguments();
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:101
// void setAttribute(Qt::ApplicationAttribute, _Bool)
extern "C"
void C_ZN16QCoreApplication12setAttributeEN2Qt20ApplicationAttributeEb(Qt::ApplicationAttribute attribute, bool on) {
  QCoreApplication::setAttribute(attribute, on);
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:102
// bool testAttribute(Qt::ApplicationAttribute)
extern "C"
void C_ZN16QCoreApplication13testAttributeEN2Qt20ApplicationAttributeE(Qt::ApplicationAttribute attribute) {
  /*return*/ QCoreApplication::testAttribute(attribute);
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:104
// void setOrganizationDomain(const class QString &)
extern "C"
void C_ZN16QCoreApplication21setOrganizationDomainERK7QString(const QString & orgDomain) {
  QCoreApplication::setOrganizationDomain(orgDomain);
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:105
// QString organizationDomain()
extern "C"
void C_ZN16QCoreApplication18organizationDomainEv() {
  /*return*/ QCoreApplication::organizationDomain();
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:106
// void setOrganizationName(const class QString &)
extern "C"
void C_ZN16QCoreApplication19setOrganizationNameERK7QString(const QString & orgName) {
  QCoreApplication::setOrganizationName(orgName);
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:107
// QString organizationName()
extern "C"
void C_ZN16QCoreApplication16organizationNameEv() {
  /*return*/ QCoreApplication::organizationName();
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:108
// void setApplicationName(const class QString &)
extern "C"
void C_ZN16QCoreApplication18setApplicationNameERK7QString(const QString & application) {
  QCoreApplication::setApplicationName(application);
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:109
// QString applicationName()
extern "C"
void C_ZN16QCoreApplication15applicationNameEv() {
  /*return*/ QCoreApplication::applicationName();
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:110
// void setApplicationVersion(const class QString &)
extern "C"
void C_ZN16QCoreApplication21setApplicationVersionERK7QString(const QString & version) {
  QCoreApplication::setApplicationVersion(version);
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:111
// QString applicationVersion()
extern "C"
void C_ZN16QCoreApplication18applicationVersionEv() {
  /*return*/ QCoreApplication::applicationVersion();
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:113
// void setSetuidAllowed(_Bool)
extern "C"
void C_ZN16QCoreApplication16setSetuidAllowedEb(bool allow) {
  QCoreApplication::setSetuidAllowed(allow);
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:114
// bool isSetuidAllowed()
extern "C"
void C_ZN16QCoreApplication15isSetuidAllowedEv() {
  /*return*/ QCoreApplication::isSetuidAllowed();
}
// static inline
// /usr/include/qt/QtCore/qcoreapplication.h:116
// QCoreApplication * instance()
extern "C"
void C_ZN16QCoreApplication8instanceEv() {
  /*return*/ QCoreApplication::instance();
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:119
// int exec()
extern "C"
void C_ZN16QCoreApplication4execEv() {
  /*return*/ QCoreApplication::exec();
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:120
// void processEvents(class QEventLoop::ProcessEventsFlags)
extern "C"
void C_ZN16QCoreApplication13processEventsE6QFlagsIN10QEventLoop17ProcessEventsFlagEE(QFlags<QEventLoop::ProcessEventsFlag> flags) {
  QCoreApplication::processEvents(flags);
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:121
// void processEvents(class QEventLoop::ProcessEventsFlags, int)
extern "C"
void C_ZN16QCoreApplication13processEventsE6QFlagsIN10QEventLoop17ProcessEventsFlagEEi(QFlags<QEventLoop::ProcessEventsFlag> flags, int maxtime) {
  QCoreApplication::processEvents(flags, maxtime);
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:122
// void exit(int)
extern "C"
void C_ZN16QCoreApplication4exitEi(int retcode) {
  QCoreApplication::exit(retcode);
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:124
// bool sendEvent(class QObject *, class QEvent *)
extern "C"
void C_ZN16QCoreApplication9sendEventEP7QObjectP6QEvent(QObject * receiver, QEvent * event) {
  /*return*/ QCoreApplication::sendEvent(receiver, event);
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:125
// void postEvent(class QObject *, class QEvent *, int)
extern "C"
void C_ZN16QCoreApplication9postEventEP7QObjectP6QEventi(QObject * receiver, QEvent * event, int priority) {
  QCoreApplication::postEvent(receiver, event, priority);
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:126
// void sendPostedEvents(class QObject *, int)
extern "C"
void C_ZN16QCoreApplication16sendPostedEventsEP7QObjecti(QObject * receiver, int event_type) {
  QCoreApplication::sendPostedEvents(receiver, event_type);
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:127
// void removePostedEvents(class QObject *, int)
extern "C"
void C_ZN16QCoreApplication18removePostedEventsEP7QObjecti(QObject * receiver, int eventType) {
  QCoreApplication::removePostedEvents(receiver, eventType);
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:129
// bool hasPendingEvents()
extern "C"
void C_ZN16QCoreApplication16hasPendingEventsEv() {
  /*return*/ QCoreApplication::hasPendingEvents();
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:131
// QAbstractEventDispatcher * eventDispatcher()
extern "C"
void C_ZN16QCoreApplication15eventDispatcherEv() {
  /*return*/ QCoreApplication::eventDispatcher();
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:132
// void setEventDispatcher(class QAbstractEventDispatcher *)
extern "C"
void C_ZN16QCoreApplication18setEventDispatcherEP24QAbstractEventDispatcher(QAbstractEventDispatcher * eventDispatcher) {
  QCoreApplication::setEventDispatcher(eventDispatcher);
}
// virtual
// /usr/include/qt/QtCore/qcoreapplication.h:134
// bool notify(class QObject *, class QEvent *)
extern "C"
void C_ZN16QCoreApplication6notifyEP7QObjectP6QEvent(void *this_, QObject * arg0, QEvent * arg1) {
  /*return*/ ((QCoreApplication*)this_)->notify(arg0, arg1);
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:136
// bool startingUp()
extern "C"
void C_ZN16QCoreApplication10startingUpEv() {
  /*return*/ QCoreApplication::startingUp();
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:137
// bool closingDown()
extern "C"
void C_ZN16QCoreApplication11closingDownEv() {
  /*return*/ QCoreApplication::closingDown();
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:140
// QString applicationDirPath()
extern "C"
void C_ZN16QCoreApplication18applicationDirPathEv() {
  /*return*/ QCoreApplication::applicationDirPath();
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:141
// QString applicationFilePath()
extern "C"
void C_ZN16QCoreApplication19applicationFilePathEv() {
  /*return*/ QCoreApplication::applicationFilePath();
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:142
// qint64 applicationPid()
extern "C"
void C_ZN16QCoreApplication14applicationPidEv() {
  /*return*/ QCoreApplication::applicationPid();
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:145
// void setLibraryPaths(const class QStringList &)
extern "C"
void C_ZN16QCoreApplication15setLibraryPathsERK11QStringList(const QStringList & arg0) {
  QCoreApplication::setLibraryPaths(arg0);
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:146
// QStringList libraryPaths()
extern "C"
void C_ZN16QCoreApplication12libraryPathsEv() {
  /*return*/ QCoreApplication::libraryPaths();
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:147
// void addLibraryPath(const class QString &)
extern "C"
void C_ZN16QCoreApplication14addLibraryPathERK7QString(const QString & arg0) {
  QCoreApplication::addLibraryPath(arg0);
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:148
// void removeLibraryPath(const class QString &)
extern "C"
void C_ZN16QCoreApplication17removeLibraryPathERK7QString(const QString & arg0) {
  QCoreApplication::removeLibraryPath(arg0);
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:152
// bool installTranslator(class QTranslator *)
extern "C"
void C_ZN16QCoreApplication17installTranslatorEP11QTranslator(QTranslator * messageFile) {
  /*return*/ QCoreApplication::installTranslator(messageFile);
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:153
// bool removeTranslator(class QTranslator *)
extern "C"
void C_ZN16QCoreApplication16removeTranslatorEP11QTranslator(QTranslator * messageFile) {
  /*return*/ QCoreApplication::removeTranslator(messageFile);
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:156
// QString translate(const char *, const char *, const char *, int)
extern "C"
void C_ZN16QCoreApplication9translateEPKcS1_S1_i(const char * context, const char * key, const char * disambiguation, int n) {
  /*return*/ QCoreApplication::translate(context, key, disambiguation, n);
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:168
// void flush()
extern "C"
void C_ZN16QCoreApplication5flushEv() {
  QCoreApplication::flush();
}
// /usr/include/qt/QtCore/qcoreapplication.h:170
// void installNativeEventFilter(class QAbstractNativeEventFilter *)
extern "C"
void C_ZN16QCoreApplication24installNativeEventFilterEP26QAbstractNativeEventFilter(void *this_, QAbstractNativeEventFilter * filterObj) {
  ((QCoreApplication*)this_)->installNativeEventFilter(filterObj);
}
// /usr/include/qt/QtCore/qcoreapplication.h:171
// void removeNativeEventFilter(class QAbstractNativeEventFilter *)
extern "C"
void C_ZN16QCoreApplication23removeNativeEventFilterEP26QAbstractNativeEventFilter(void *this_, QAbstractNativeEventFilter * filterObj) {
  ((QCoreApplication*)this_)->removeNativeEventFilter(filterObj);
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:173
// bool isQuitLockEnabled()
extern "C"
void C_ZN16QCoreApplication17isQuitLockEnabledEv() {
  /*return*/ QCoreApplication::isQuitLockEnabled();
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:174
// void setQuitLockEnabled(_Bool)
extern "C"
void C_ZN16QCoreApplication18setQuitLockEnabledEb(bool enabled) {
  QCoreApplication::setQuitLockEnabled(enabled);
}
// static
// /usr/include/qt/QtCore/qcoreapplication.h:177
// void quit()
extern "C"
void C_ZN16QCoreApplication4quitEv() {
  QCoreApplication::quit();
}
// /usr/include/qt/QtCore/qcoreapplication.h:182
// void organizationNameChanged()
extern "C"
void C_ZN16QCoreApplication23organizationNameChangedEv(void *this_) {
  ((QCoreApplication*)this_)->organizationNameChanged();
}
// /usr/include/qt/QtCore/qcoreapplication.h:183
// void organizationDomainChanged()
extern "C"
void C_ZN16QCoreApplication25organizationDomainChangedEv(void *this_) {
  ((QCoreApplication*)this_)->organizationDomainChanged();
}
// /usr/include/qt/QtCore/qcoreapplication.h:184
// void applicationNameChanged()
extern "C"
void C_ZN16QCoreApplication22applicationNameChangedEv(void *this_) {
  ((QCoreApplication*)this_)->applicationNameChanged();
}
// /usr/include/qt/QtCore/qcoreapplication.h:185
// void applicationVersionChanged()
extern "C"
void C_ZN16QCoreApplication25applicationVersionChangedEv(void *this_) {
  ((QCoreApplication*)this_)->applicationVersionChanged();
}
//  main block end
