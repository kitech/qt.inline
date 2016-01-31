// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtCore/qcoreapplication.h
// dst-file: /src/core/qcoreapplication.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qcoreapplication.h>


#include <qglobal.h>
#include <qstring.h>
#include <qstringlist.h>
// <= header block end

// main block begin =>
void __keep_qcoreapplication_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 110, column 30>
//   // proto: static QCoreApplication * QCoreApplication::instance();
if (true) {
  auto f = [](QCoreApplication flythis) {
    ((QCoreApplication*)0)->instance();
    flythis.instance();
  };
  if (f == nullptr){}
}
// _ZN16QCoreApplication8instanceEv instance()
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 118, column 17>
//   // proto: static bool QCoreApplication::sendEvent(QObject * receiver, QEvent * event);
if (true) {
  auto f = [](QCoreApplication flythis, QObject * arg1, QEvent * arg2) {
    ((QCoreApplication*)0)->sendEvent(arg1, arg2);
    flythis.sendEvent(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN16QCoreApplication9sendEventEP7QObjectP6QEvent sendEvent(class QObject *, class QEvent *)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QCoreApplication_Class_Size()
{
  return sizeof(QCoreApplication);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 120, column 17>
//   // proto: static void QCoreApplication::sendPostedEvents(QObject * receiver, int event_type);
// _ZN16QCoreApplication16sendPostedEventsEP7QObjecti sendPostedEvents(class QObject *, int)
extern "C"
void
C_ZN16QCoreApplication16sendPostedEventsEP7QObjecti(QObject * arg1,
int arg2) {
  QCoreApplication::sendPostedEvents(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 141, column 17>
//   // proto: static void QCoreApplication::addLibraryPath(const QString & );
// _ZN16QCoreApplication14addLibraryPathERK7QString addLibraryPath(const class QString &)
extern "C"
void
C_ZN16QCoreApplication14addLibraryPathERK7QString(const QString* arg1) {
  QCoreApplication::addLibraryPath(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 136, column 19>
//   // proto: static qint64 QCoreApplication::applicationPid();
// _ZN16QCoreApplication14applicationPidEv applicationPid()
extern "C"
long long
C_ZN16QCoreApplication14applicationPidEv() {
  auto ret =
  QCoreApplication::applicationPid();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 102, column 17>
//   // proto: static void QCoreApplication::setApplicationName(const QString & application);
// _ZN16QCoreApplication18setApplicationNameERK7QString setApplicationName(const class QString &)
extern "C"
void
C_ZN16QCoreApplication18setApplicationNameERK7QString(const QString* arg1) {
  QCoreApplication::setApplicationName(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 101, column 20>
//   // proto: static QString QCoreApplication::organizationName();
// _ZN16QCoreApplication16organizationNameEv organizationName()
extern "C"
QString*
C_ZN16QCoreApplication16organizationNameEv() {
  auto ret =
  QCoreApplication::organizationName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 164, column 10>
//   // proto:  void QCoreApplication::installNativeEventFilter(QAbstractNativeEventFilter * filterObj);
// _ZN16QCoreApplication24installNativeEventFilterEP26QAbstractNativeEventFilter installNativeEventFilter(class QAbstractNativeEventFilter *)
extern "C"
void
C_ZN16QCoreApplication24installNativeEventFilterEP26QAbstractNativeEventFilter(void *qthis,
QAbstractNativeEventFilter * arg1) {
  ((QCoreApplication*)qthis)->installNativeEventFilter(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 110, column 30>
//   // proto: static QCoreApplication * QCoreApplication::instance();
// _ZN16QCoreApplication8instanceEv instance()
extern "C"
void*
C_ZN16QCoreApplication8instanceEv() {
  auto ret =
  QCoreApplication::instance();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 108, column 17>
//   // proto: static bool QCoreApplication::isSetuidAllowed();
// _ZN16QCoreApplication15isSetuidAllowedEv isSetuidAllowed()
extern "C"
bool
C_ZN16QCoreApplication15isSetuidAllowedEv() {
  auto ret =
  QCoreApplication::isSetuidAllowed();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 179, column 10>
//   // proto:  void QCoreApplication::applicationVersionChanged();
// _ZN16QCoreApplication25applicationVersionChangedEv applicationVersionChanged()
extern "C"
void
C_ZN16QCoreApplication25applicationVersionChangedEv(void *qthis) {
  ((QCoreApplication*)qthis)->applicationVersionChanged();
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 103, column 20>
//   // proto: static QString QCoreApplication::applicationName();
// _ZN16QCoreApplication15applicationNameEv applicationName()
extern "C"
QString*
C_ZN16QCoreApplication15applicationNameEv() {
  auto ret =
  QCoreApplication::applicationName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 107, column 17>
//   // proto: static void QCoreApplication::setSetuidAllowed(bool allow);
// _ZN16QCoreApplication16setSetuidAllowedEb setSetuidAllowed(_Bool)
extern "C"
void
C_ZN16QCoreApplication16setSetuidAllowedEb(bool arg1) {
  QCoreApplication::setSetuidAllowed(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 114, column 17>
//   // proto: static void QCoreApplication::processEvents(QEventLoop::ProcessEventsFlags flags);
// _ZN16QCoreApplication13processEventsE6QFlagsIN10QEventLoop17ProcessEventsFlagEE processEvents(class QEventLoop::ProcessEventsFlags)
extern "C"
void
C_ZN16QCoreApplication13processEventsE6QFlagsIN10QEventLoop17ProcessEventsFlagEE(QEventLoop::ProcessEventsFlags* arg1) {
  QCoreApplication::processEvents(*((QEventLoop::ProcessEventsFlags*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 119, column 17>
//   // proto: static void QCoreApplication::postEvent(QObject * receiver, QEvent * event, int priority);
// _ZN16QCoreApplication9postEventEP7QObjectP6QEventi postEvent(class QObject *, class QEvent *, int)
extern "C"
void
C_ZN16QCoreApplication9postEventEP7QObjectP6QEventi(QObject * arg1,
QEvent * arg2,
int arg3) {
  QCoreApplication::postEvent(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 95, column 17>
//   // proto: static void QCoreApplication::setAttribute(Qt::ApplicationAttribute attribute, bool on);
// _ZN16QCoreApplication12setAttributeEN2Qt20ApplicationAttributeEb setAttribute(Qt::ApplicationAttribute, _Bool)
extern "C"
void
C_ZN16QCoreApplication12setAttributeEN2Qt20ApplicationAttributeEb(Qt::ApplicationAttribute* arg1,
bool arg2) {
  QCoreApplication::setAttribute(*((Qt::ApplicationAttribute*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 140, column 24>
//   // proto: static QStringList QCoreApplication::libraryPaths();
// _ZN16QCoreApplication12libraryPathsEv libraryPaths()
extern "C"
QStringList*
C_ZN16QCoreApplication12libraryPathsEv() {
  auto ret =
  QCoreApplication::libraryPaths();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 178, column 10>
//   // proto:  void QCoreApplication::applicationNameChanged();
// _ZN16QCoreApplication22applicationNameChangedEv applicationNameChanged()
extern "C"
void
C_ZN16QCoreApplication22applicationNameChangedEv(void *qthis) {
  ((QCoreApplication*)qthis)->applicationNameChanged();
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 142, column 17>
//   // proto: static void QCoreApplication::removeLibraryPath(const QString & );
// _ZN16QCoreApplication17removeLibraryPathERK7QString removeLibraryPath(const class QString &)
extern "C"
void
C_ZN16QCoreApplication17removeLibraryPathERK7QString(const QString* arg1) {
  QCoreApplication::removeLibraryPath(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 150, column 20>
//   // proto: static QString QCoreApplication::translate(const char * context, const char * key, const char * disambiguation, int n);
// _ZN16QCoreApplication9translateEPKcS1_S1_i translate(const char *, const char *, const char *, int)
extern "C"
QString*
C_ZN16QCoreApplication9translateEPKcS1_S1_i(const char * arg1,
const char * arg2,
const char * arg3,
int arg4) {
  auto ret =
  QCoreApplication::translate(arg1,
arg2,
arg3,
arg4);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 135, column 20>
//   // proto: static QString QCoreApplication::applicationFilePath();
// _ZN16QCoreApplication19applicationFilePathEv applicationFilePath()
extern "C"
QString*
C_ZN16QCoreApplication19applicationFilePathEv() {
  auto ret =
  QCoreApplication::applicationFilePath();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 96, column 17>
//   // proto: static bool QCoreApplication::testAttribute(Qt::ApplicationAttribute attribute);
// _ZN16QCoreApplication13testAttributeEN2Qt20ApplicationAttributeE testAttribute(Qt::ApplicationAttribute)
extern "C"
bool
C_ZN16QCoreApplication13testAttributeEN2Qt20ApplicationAttributeE(Qt::ApplicationAttribute* arg1) {
  auto ret =
  QCoreApplication::testAttribute(*((Qt::ApplicationAttribute*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 147, column 17>
//   // proto: static bool QCoreApplication::removeTranslator(QTranslator * messageFile);
// _ZN16QCoreApplication16removeTranslatorEP11QTranslator removeTranslator(class QTranslator *)
extern "C"
bool
C_ZN16QCoreApplication16removeTranslatorEP11QTranslator(QTranslator * arg1) {
  auto ret =
  QCoreApplication::removeTranslator(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 100, column 17>
//   // proto: static void QCoreApplication::setOrganizationName(const QString & orgName);
// _ZN16QCoreApplication19setOrganizationNameERK7QString setOrganizationName(const class QString &)
extern "C"
void
C_ZN16QCoreApplication19setOrganizationNameERK7QString(const QString* arg1) {
  QCoreApplication::setOrganizationName(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 116, column 17>
//   // proto: static void QCoreApplication::exit(int retcode);
// _ZN16QCoreApplication4exitEi exit(int)
extern "C"
void
C_ZN16QCoreApplication4exitEi(int arg1) {
  QCoreApplication::exit(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 105, column 20>
//   // proto: static QString QCoreApplication::applicationVersion();
// _ZN16QCoreApplication18applicationVersionEv applicationVersion()
extern "C"
QString*
C_ZN16QCoreApplication18applicationVersionEv() {
  auto ret =
  QCoreApplication::applicationVersion();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 171, column 17>
//   // proto: static void QCoreApplication::quit();
// _ZN16QCoreApplication4quitEv quit()
extern "C"
void
C_ZN16QCoreApplication4quitEv() {
  QCoreApplication::quit();
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 131, column 17>
//   // proto: static bool QCoreApplication::closingDown();
// _ZN16QCoreApplication11closingDownEv closingDown()
extern "C"
bool
C_ZN16QCoreApplication11closingDownEv() {
  auto ret =
  QCoreApplication::closingDown();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 168, column 17>
//   // proto: static void QCoreApplication::setQuitLockEnabled(bool enabled);
// _ZN16QCoreApplication18setQuitLockEnabledEb setQuitLockEnabled(_Bool)
extern "C"
void
C_ZN16QCoreApplication18setQuitLockEnabledEb(bool arg1) {
  QCoreApplication::setQuitLockEnabled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 123, column 31>
//   // proto: static bool QCoreApplication::hasPendingEvents();
// _ZN16QCoreApplication16hasPendingEventsEv hasPendingEvents()
extern "C"
bool
C_ZN16QCoreApplication16hasPendingEventsEv() {
  auto ret =
  QCoreApplication::hasPendingEvents();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 98, column 17>
//   // proto: static void QCoreApplication::setOrganizationDomain(const QString & orgDomain);
// _ZN16QCoreApplication21setOrganizationDomainERK7QString setOrganizationDomain(const class QString &)
extern "C"
void
C_ZN16QCoreApplication21setOrganizationDomainERK7QString(const QString* arg1) {
  QCoreApplication::setOrganizationDomain(*((const QString*)arg1));
}
//   // proto:  void QCoreApplication::~QCoreApplication();
extern "C"
void C_ZN16QCoreApplicationD2Ev(void *qthis) {
  delete (QCoreApplication*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 177, column 10>
//   // proto:  void QCoreApplication::organizationDomainChanged();
// _ZN16QCoreApplication25organizationDomainChangedEv organizationDomainChanged()
extern "C"
void
C_ZN16QCoreApplication25organizationDomainChangedEv(void *qthis) {
  ((QCoreApplication*)qthis)->organizationDomainChanged();
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 165, column 10>
//   // proto:  void QCoreApplication::removeNativeEventFilter(QAbstractNativeEventFilter * filterObj);
// _ZN16QCoreApplication23removeNativeEventFilterEP26QAbstractNativeEventFilter removeNativeEventFilter(class QAbstractNativeEventFilter *)
extern "C"
void
C_ZN16QCoreApplication23removeNativeEventFilterEP26QAbstractNativeEventFilter(void *qthis,
QAbstractNativeEventFilter * arg1) {
  ((QCoreApplication*)qthis)->removeNativeEventFilter(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 99, column 20>
//   // proto: static QString QCoreApplication::organizationDomain();
// _ZN16QCoreApplication18organizationDomainEv organizationDomain()
extern "C"
QString*
C_ZN16QCoreApplication18organizationDomainEv() {
  auto ret =
  QCoreApplication::organizationDomain();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 146, column 17>
//   // proto: static bool QCoreApplication::installTranslator(QTranslator * messageFile);
// _ZN16QCoreApplication17installTranslatorEP11QTranslator installTranslator(class QTranslator *)
extern "C"
bool
C_ZN16QCoreApplication17installTranslatorEP11QTranslator(QTranslator * arg1) {
  auto ret =
  QCoreApplication::installTranslator(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 134, column 20>
//   // proto: static QString QCoreApplication::applicationDirPath();
// _ZN16QCoreApplication18applicationDirPathEv applicationDirPath()
extern "C"
QString*
C_ZN16QCoreApplication18applicationDirPathEv() {
  auto ret =
  QCoreApplication::applicationDirPath();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 162, column 17>
//   // proto: static void QCoreApplication::flush();
// _ZN16QCoreApplication5flushEv flush()
extern "C"
void
C_ZN16QCoreApplication5flushEv() {
  QCoreApplication::flush();
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 113, column 16>
//   // proto: static int QCoreApplication::exec();
// _ZN16QCoreApplication4execEv exec()
extern "C"
int
C_ZN16QCoreApplication4execEv() {
  auto ret =
  QCoreApplication::exec();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 93, column 24>
//   // proto: static QStringList QCoreApplication::arguments();
// _ZN16QCoreApplication9argumentsEv arguments()
extern "C"
QStringList*
C_ZN16QCoreApplication9argumentsEv() {
  auto ret =
  QCoreApplication::arguments();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 139, column 17>
//   // proto: static void QCoreApplication::setLibraryPaths(const QStringList & );
// _ZN16QCoreApplication15setLibraryPathsERK11QStringList setLibraryPaths(const class QStringList &)
extern "C"
void
C_ZN16QCoreApplication15setLibraryPathsERK11QStringList(const QStringList* arg1) {
  QCoreApplication::setLibraryPaths(*((const QStringList*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 125, column 38>
//   // proto: static QAbstractEventDispatcher * QCoreApplication::eventDispatcher();
// _ZN16QCoreApplication15eventDispatcherEv eventDispatcher()
extern "C"
void*
C_ZN16QCoreApplication15eventDispatcherEv() {
  auto ret =
  QCoreApplication::eventDispatcher();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 130, column 17>
//   // proto: static bool QCoreApplication::startingUp();
// _ZN16QCoreApplication10startingUpEv startingUp()
extern "C"
bool
C_ZN16QCoreApplication10startingUpEv() {
  auto ret =
  QCoreApplication::startingUp();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 118, column 17>
//   // proto: static bool QCoreApplication::sendEvent(QObject * receiver, QEvent * event);
// _ZN16QCoreApplication9sendEventEP7QObjectP6QEvent sendEvent(class QObject *, class QEvent *)
extern "C"
bool
C_ZN16QCoreApplication9sendEventEP7QObjectP6QEvent(QObject * arg1,
QEvent * arg2) {
  auto ret =
  QCoreApplication::sendEvent(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 128, column 18>
//   // proto:  bool QCoreApplication::notify(QObject * , QEvent * );
// _ZN16QCoreApplication6notifyEP7QObjectP6QEvent notify(class QObject *, class QEvent *)
extern "C"
bool
C_ZN16QCoreApplication6notifyEP7QObjectP6QEvent(void *qthis,
QObject * arg1,
QEvent * arg2) {
  auto ret =
  ((QCoreApplication*)qthis)->notify(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 167, column 17>
//   // proto: static bool QCoreApplication::isQuitLockEnabled();
// _ZN16QCoreApplication17isQuitLockEnabledEv isQuitLockEnabled()
extern "C"
bool
C_ZN16QCoreApplication17isQuitLockEnabledEv() {
  auto ret =
  QCoreApplication::isQuitLockEnabled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 176, column 10>
//   // proto:  void QCoreApplication::organizationNameChanged();
// _ZN16QCoreApplication23organizationNameChangedEv organizationNameChanged()
extern "C"
void
C_ZN16QCoreApplication23organizationNameChangedEv(void *qthis) {
  ((QCoreApplication*)qthis)->organizationNameChanged();
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 121, column 17>
//   // proto: static void QCoreApplication::removePostedEvents(QObject * receiver, int eventType);
// _ZN16QCoreApplication18removePostedEventsEP7QObjecti removePostedEvents(class QObject *, int)
extern "C"
void
C_ZN16QCoreApplication18removePostedEventsEP7QObjecti(QObject * arg1,
int arg2) {
  QCoreApplication::removePostedEvents(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 72, column 5>
//   // proto:  const QMetaObject * QCoreApplication::metaObject();
// _ZNK16QCoreApplication10metaObjectEv metaObject()
extern "C"
void*
C_ZNK16QCoreApplication10metaObjectEv(void *qthis) {
  auto ret =
  ((QCoreApplication*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 115, column 17>
//   // proto: static void QCoreApplication::processEvents(QEventLoop::ProcessEventsFlags flags, int maxtime);
// _ZN16QCoreApplication13processEventsE6QFlagsIN10QEventLoop17ProcessEventsFlagEEi processEvents(class QEventLoop::ProcessEventsFlags, int)
extern "C"
void
C_ZN16QCoreApplication13processEventsE6QFlagsIN10QEventLoop17ProcessEventsFlagEEi(QEventLoop::ProcessEventsFlags* arg1,
int arg2) {
  QCoreApplication::processEvents(*((QEventLoop::ProcessEventsFlags*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 85, column 5>
//   // proto:  void QCoreApplication::QCoreApplication(int & argc, char ** argv, int );
extern "C"
QCoreApplication*
C_ZN16QCoreApplicationC2ERiPPci(int* arg1,
char ** arg2,
int arg3) {
  auto ret = new QCoreApplication(*((int*)arg1),
arg2,
arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 104, column 17>
//   // proto: static void QCoreApplication::setApplicationVersion(const QString & version);
// _ZN16QCoreApplication21setApplicationVersionERK7QString setApplicationVersion(const class QString &)
extern "C"
void
C_ZN16QCoreApplication21setApplicationVersionERK7QString(const QString* arg1) {
  QCoreApplication::setApplicationVersion(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 126, column 17>
//   // proto: static void QCoreApplication::setEventDispatcher(QAbstractEventDispatcher * eventDispatcher);
// _ZN16QCoreApplication18setEventDispatcherEP24QAbstractEventDispatcher setEventDispatcher(class QAbstractEventDispatcher *)
extern "C"
void
C_ZN16QCoreApplication18setEventDispatcherEP24QAbstractEventDispatcher(QAbstractEventDispatcher * arg1) {
  QCoreApplication::setEventDispatcher(arg1);
}
// <= ext block end

// body block begin =>
// QCoreApplication_SlotProxy here
class QCoreApplication_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QCoreApplication_SlotProxy():QObject(){}

public slots:
  // applicationVersionChanged()
  void slot_proxy_func__ZN16QCoreApplication25applicationVersionChangedEv();
public:
  void (*slot_func__ZN16QCoreApplication25applicationVersionChangedEv)(void* rsfptr) = NULL;
public slots:
  // organizationNameChanged()
  void slot_proxy_func__ZN16QCoreApplication23organizationNameChangedEv();
public:
  void (*slot_func__ZN16QCoreApplication23organizationNameChangedEv)(void* rsfptr) = NULL;
public slots:
  // applicationNameChanged()
  void slot_proxy_func__ZN16QCoreApplication22applicationNameChangedEv();
public:
  void (*slot_func__ZN16QCoreApplication22applicationNameChangedEv)(void* rsfptr) = NULL;
public slots:
  // organizationDomainChanged()
  void slot_proxy_func__ZN16QCoreApplication25organizationDomainChangedEv();
public:
  void (*slot_func__ZN16QCoreApplication25organizationDomainChangedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/core/qcoreapplication.moc"

extern "C" {
  QCoreApplication_SlotProxy* QCoreApplication_SlotProxy_new()
  {
    return new QCoreApplication_SlotProxy();
  }
};

void QCoreApplication_SlotProxy::slot_proxy_func__ZN16QCoreApplication25applicationVersionChangedEv() {
  if (this->slot_func__ZN16QCoreApplication25applicationVersionChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN16QCoreApplication25applicationVersionChangedEv(this->rsfptr);
  }
}
extern "C"
void* QCoreApplication_SlotProxy_connect__ZN16QCoreApplication25applicationVersionChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QCoreApplication_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN16QCoreApplication25applicationVersionChangedEv = (decltype(that->slot_func__ZN16QCoreApplication25applicationVersionChangedEv))ffifptr;
  QObject::connect((QCoreApplication*)sender, SIGNAL(applicationVersionChanged()), that, SLOT(slot_proxy_func__ZN16QCoreApplication25applicationVersionChangedEv()));
  return that;
}
extern "C"
void QCoreApplication_SlotProxy_disconnect__ZN16QCoreApplication25applicationVersionChangedEv(QCoreApplication_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QCoreApplication_SlotProxy::slot_proxy_func__ZN16QCoreApplication23organizationNameChangedEv() {
  if (this->slot_func__ZN16QCoreApplication23organizationNameChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN16QCoreApplication23organizationNameChangedEv(this->rsfptr);
  }
}
extern "C"
void* QCoreApplication_SlotProxy_connect__ZN16QCoreApplication23organizationNameChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QCoreApplication_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN16QCoreApplication23organizationNameChangedEv = (decltype(that->slot_func__ZN16QCoreApplication23organizationNameChangedEv))ffifptr;
  QObject::connect((QCoreApplication*)sender, SIGNAL(organizationNameChanged()), that, SLOT(slot_proxy_func__ZN16QCoreApplication23organizationNameChangedEv()));
  return that;
}
extern "C"
void QCoreApplication_SlotProxy_disconnect__ZN16QCoreApplication23organizationNameChangedEv(QCoreApplication_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QCoreApplication_SlotProxy::slot_proxy_func__ZN16QCoreApplication22applicationNameChangedEv() {
  if (this->slot_func__ZN16QCoreApplication22applicationNameChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN16QCoreApplication22applicationNameChangedEv(this->rsfptr);
  }
}
extern "C"
void* QCoreApplication_SlotProxy_connect__ZN16QCoreApplication22applicationNameChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QCoreApplication_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN16QCoreApplication22applicationNameChangedEv = (decltype(that->slot_func__ZN16QCoreApplication22applicationNameChangedEv))ffifptr;
  QObject::connect((QCoreApplication*)sender, SIGNAL(applicationNameChanged()), that, SLOT(slot_proxy_func__ZN16QCoreApplication22applicationNameChangedEv()));
  return that;
}
extern "C"
void QCoreApplication_SlotProxy_disconnect__ZN16QCoreApplication22applicationNameChangedEv(QCoreApplication_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QCoreApplication_SlotProxy::slot_proxy_func__ZN16QCoreApplication25organizationDomainChangedEv() {
  if (this->slot_func__ZN16QCoreApplication25organizationDomainChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN16QCoreApplication25organizationDomainChangedEv(this->rsfptr);
  }
}
extern "C"
void* QCoreApplication_SlotProxy_connect__ZN16QCoreApplication25organizationDomainChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QCoreApplication_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN16QCoreApplication25organizationDomainChangedEv = (decltype(that->slot_func__ZN16QCoreApplication25organizationDomainChangedEv))ffifptr;
  QObject::connect((QCoreApplication*)sender, SIGNAL(organizationDomainChanged()), that, SLOT(slot_proxy_func__ZN16QCoreApplication25organizationDomainChangedEv()));
  return that;
}
extern "C"
void QCoreApplication_SlotProxy_disconnect__ZN16QCoreApplication25organizationDomainChangedEv(QCoreApplication_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

