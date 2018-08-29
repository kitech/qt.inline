//  header block begin
// /usr/include/qt/QtCore/qcoreapplication.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcoreapplication.h>
#include <QtCore>
#include "callback_inherit.h"

// QCoreApplication is pure virtual: false
// QCoreApplication has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQCoreApplication_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCoreApplication_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCoreApplication_t qt_meta_stringdata_MyQCoreApplication = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQCoreApplication"
  },
  "MyQCoreApplication"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCoreApplication[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQCoreApplication : public QCoreApplication {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QCoreApplication::staticMetaObject,
  qt_meta_stringdata_MyQCoreApplication.data,
  qt_meta_data_MyQCoreApplication,
  qt_static_metacall, nullptr, nullptr
}};
virtual const QMetaObject *metaObject() const override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metaObject", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (QMetaObject*)irv; }
  return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject; 
}
virtual void *qt_metacast(const char *_clname) override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacast", &handled, 1, (uint64_t)_clname, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (void*)irv; }
  if (!_clname) return nullptr;
  if (!strcmp(_clname, qt_meta_stringdata_MyQCoreApplication.stringdata0))
      return static_cast<void*>(this);
  return QCoreApplication::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QCoreApplication::qt_metacall(_c, _id, _a);
   int handled = 0;
   auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacall", &handled, 3, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (int)irv; }
   return _id;
  }
/*static*/ inline QString tr(const char *s, const char *c = nullptr, int n = -1)
{ return staticMetaObject.tr(s, c, n); }
/*static*/ inline QString trUtf8(const char *s, const char *c = nullptr, int n = -1)
 { return staticMetaObject.tr(s, c, n); }
Q_DECL_HIDDEN_STATIC_METACALL static void qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a){
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)_o, (char*)"qt_static_metacall", &handled, 4, (uint64_t)_o, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0);
}
private: struct QPrivateSignal {};

public:
  virtual ~MyQCoreApplication() {}
// void QCoreApplication(int &, char **, int)
MyQCoreApplication(int & argc, char** argv, int arg2) : QCoreApplication(argc, argv, arg2) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QCoreApplication::event(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool compressEvent(QEvent *, QObject *, QPostEventList *)
  virtual bool compressEvent(QEvent * arg0, QObject * receiver, QPostEventList * arg2)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"compressEvent", &handled, 3, (uint64_t)arg0, (uint64_t)receiver, (uint64_t)arg2, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QCoreApplication::compressEvent(arg0, receiver, arg2);
  }
  }

};
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:190
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN16QCoreApplication5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QCoreApplication*)this_)->QCoreApplication::event(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:192
// [1] bool compressEvent(QEvent *, QObject *, QPostEventList *)
extern "C" Q_DECL_EXPORT
bool C_ZN16QCoreApplication13compressEventEP6QEventP7QObjectP14QPostEventList(void *this_, QEvent * arg0, QObject * receiver, QPostEventList * arg2) {
  return (bool)((QCoreApplication*)this_)->QCoreApplication::compressEvent(arg0, receiver, arg2);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:78
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QCoreApplication10metaObjectEv(void *this_) {
  return (void*)((QCoreApplication*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:78
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QCoreApplication11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QCoreApplication*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:78
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN16QCoreApplication11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QCoreApplication*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:78
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QCoreApplication2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCoreApplication::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:78
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QCoreApplication6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCoreApplication::trUtf8(s, c, n);
return new QString(rv);
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
// [-2] void setAttribute(Qt::ApplicationAttribute, bool)
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
// [-2] void setOrganizationDomain(const QString &)
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
// [-2] void setOrganizationName(const QString &)
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
// [-2] void setApplicationName(const QString &)
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
// [-2] void setApplicationVersion(const QString &)
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
// [-2] void setSetuidAllowed(bool)
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
// [-2] void processEvents(QEventLoop::ProcessEventsFlags)
extern "C" Q_DECL_EXPORT
void C_ZN16QCoreApplication13processEventsE6QFlagsIN10QEventLoop17ProcessEventsFlagEE(QFlags<QEventLoop::ProcessEventsFlag> flags) {
  QCoreApplication::processEvents(flags);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:121
// [-2] void processEvents(QEventLoop::ProcessEventsFlags, int)
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
// [1] bool sendEvent(QObject *, QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN16QCoreApplication9sendEventEP7QObjectP6QEvent(QObject * receiver, QEvent * event) {
  return (bool)QCoreApplication::sendEvent(receiver, event);
}

// Public static Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtCore/qcoreapplication.h:125
// [-2] void postEvent(QObject *, QEvent *, int)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN16QCoreApplication9postEventEP7QObjectP6QEventi(QObject * receiver, QEvent * event, int priority) {
  QCoreApplication::postEvent(receiver, event, priority);
}
#endif // QT_VERSION >= 0x040300

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:126
// [-2] void sendPostedEvents(QObject *, int)
extern "C" Q_DECL_EXPORT
void C_ZN16QCoreApplication16sendPostedEventsEP7QObjecti(QObject * receiver, int event_type) {
  QCoreApplication::sendPostedEvents(receiver, event_type);
}

// Public static Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtCore/qcoreapplication.h:127
// [-2] void removePostedEvents(QObject *, int)
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
// [-2] void setEventDispatcher(QAbstractEventDispatcher *)
extern "C" Q_DECL_EXPORT
void C_ZN16QCoreApplication18setEventDispatcherEP24QAbstractEventDispatcher(QAbstractEventDispatcher * eventDispatcher) {
  QCoreApplication::setEventDispatcher(eventDispatcher);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:134
// [1] bool notify(QObject *, QEvent *)
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
// [-2] void setLibraryPaths(const QStringList &)
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
// [-2] void addLibraryPath(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QCoreApplication14addLibraryPathERK7QString(QString* arg0) {
  QCoreApplication::addLibraryPath(*arg0);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:148
// [-2] void removeLibraryPath(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QCoreApplication17removeLibraryPathERK7QString(QString* arg0) {
  QCoreApplication::removeLibraryPath(*arg0);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:152
// [1] bool installTranslator(QTranslator *)
extern "C" Q_DECL_EXPORT
bool C_ZN16QCoreApplication17installTranslatorEP11QTranslator(QTranslator * messageFile) {
  return (bool)QCoreApplication::installTranslator(messageFile);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:153
// [1] bool removeTranslator(QTranslator *)
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
// [-2] void installNativeEventFilter(QAbstractNativeEventFilter *)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN16QCoreApplication24installNativeEventFilterEP26QAbstractNativeEventFilter(void *this_, QAbstractNativeEventFilter * filterObj) {
  ((QCoreApplication*)this_)->installNativeEventFilter(filterObj);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qcoreapplication.h:173
// [-2] void removeNativeEventFilter(QAbstractNativeEventFilter *)
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
// [-2] void setQuitLockEnabled(bool)
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
// /usr/include/qt/QtCore/qcoreapplication.h:182
// [-2] void aboutToQuit(QCoreApplication::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN16QCoreApplication11aboutToQuitENS_14QPrivateSignalE(void *this_, QCoreApplication::QPrivateSignal* arg0) {
  ((QCoreApplication*)this_)->aboutToQuit(*arg0);
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
