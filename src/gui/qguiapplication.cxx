//  header block begin

// since 0x050000
// /usr/include/qt/QtGui/qguiapplication.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qguiapplication.h>
#include <QtGui>
#include "callback_inherit.h"

// QGuiApplication is pure virtual: false
// QGuiApplication has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGuiApplication_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGuiApplication_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGuiApplication_t qt_meta_stringdata_MyQGuiApplication = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQGuiApplication"
  },
  "MyQGuiApplication"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGuiApplication[] = {
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
class Q_DECL_EXPORT MyQGuiApplication : public QGuiApplication {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QGuiApplication::staticMetaObject,
  qt_meta_stringdata_MyQGuiApplication.data,
  qt_meta_data_MyQGuiApplication,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQGuiApplication.stringdata0))
      return static_cast<void*>(this);
  return QGuiApplication::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QGuiApplication::qt_metacall(_c, _id, _a);
   if (_id < 0 ) return _id;
   if (qt_metacall_fnptr != 0) {
      return qt_metacall_fnptr(this, _c, _id, _a);
   }
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
  void* (*qt_metacast_fnptr)(void*, char*) = nullptr;
  int (*qt_metacall_fnptr)(QObject *, QMetaObject::Call, int, void **) = nullptr;
public:
  virtual ~MyQGuiApplication() {}
// void QGuiApplication(int &, char **, int)
MyQGuiApplication(int & argc, char** argv, int arg2) : QGuiApplication(argc, argv, arg2) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QGuiApplication::event(arg0);
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
    return QGuiApplication::compressEvent(arg0, receiver, arg2);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QGuiApplication_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQGuiApplication* qo = (MyQGuiApplication*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:190
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN15QGuiApplication5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QGuiApplication*)this_)->QGuiApplication::event(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:191
// [1] bool compressEvent(QEvent *, QObject *, QPostEventList *)
extern "C" Q_DECL_EXPORT
bool C_ZN15QGuiApplication13compressEventEP6QEventP7QObjectP14QPostEventList(void *this_, QEvent * arg0, QObject * receiver, QPostEventList * arg2) {
  return (bool)((QGuiApplication*)this_)->QGuiApplication::compressEvent(arg0, receiver, arg2);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:74
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QGuiApplication10metaObjectEv(void *this_) {
  return (void*)((QGuiApplication*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:74
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QGuiApplication11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QGuiApplication*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:74
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN15QGuiApplication11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QGuiApplication*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:74
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QGuiApplication2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGuiApplication::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:74
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QGuiApplication6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGuiApplication::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:87
// [-2] void QGuiApplication(int &, char **, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QGuiApplicationC2ERiPPci(int & argc, char** argv, int arg2) {
  auto _nilp = (MyQGuiApplication*)(0);
  return  new MyQGuiApplication(*(new int(argc)), argv, arg2);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:89
// [-2] void ~QGuiApplication()
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplicationD2Ev(void *this_) {
  delete (QGuiApplication*)(this_);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:91
// [-2] void setApplicationDisplayName(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication25setApplicationDisplayNameERK7QString(QString* name) {
  QGuiApplication::setApplicationDisplayName(*name);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:92
// [8] QString applicationDisplayName()
extern "C" Q_DECL_EXPORT
void* C_ZN15QGuiApplication22applicationDisplayNameEv() {
  auto rv = QGuiApplication::applicationDisplayName();
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:94
// [-2] void setDesktopFileName(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication18setDesktopFileNameERK7QString(QString* name) {
  QGuiApplication::setDesktopFileName(*name);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:95
// [8] QString desktopFileName()
extern "C" Q_DECL_EXPORT
void* C_ZN15QGuiApplication15desktopFileNameEv() {
  auto rv = QGuiApplication::desktopFileName();
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:97
// [-2] QWindowList allWindows()
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication10allWindowsEv() {
  auto rv = QGuiApplication::allWindows();
/*return rv;*/
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:98
// [-2] QWindowList topLevelWindows()
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication15topLevelWindowsEv() {
  auto rv = QGuiApplication::topLevelWindows();
/*return rv;*/
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:99
// [8] QWindow * topLevelAt(const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZN15QGuiApplication10topLevelAtERK6QPoint(QPoint* pos) {
  return (void*)QGuiApplication::topLevelAt(*pos);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:101
// [-2] void setWindowIcon(const QIcon &)
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication13setWindowIconERK5QIcon(QIcon* icon) {
  QGuiApplication::setWindowIcon(*icon);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:102
// [8] QIcon windowIcon()
extern "C" Q_DECL_EXPORT
void* C_ZN15QGuiApplication10windowIconEv() {
  auto rv = QGuiApplication::windowIcon();
return new QIcon(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:104
// [8] QString platformName()
extern "C" Q_DECL_EXPORT
void* C_ZN15QGuiApplication12platformNameEv() {
  auto rv = QGuiApplication::platformName();
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:106
// [8] QWindow * modalWindow()
extern "C" Q_DECL_EXPORT
void* C_ZN15QGuiApplication11modalWindowEv() {
  return (void*)QGuiApplication::modalWindow();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:108
// [8] QWindow * focusWindow()
extern "C" Q_DECL_EXPORT
void* C_ZN15QGuiApplication11focusWindowEv() {
  return (void*)QGuiApplication::focusWindow();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:109
// [8] QObject * focusObject()
extern "C" Q_DECL_EXPORT
void* C_ZN15QGuiApplication11focusObjectEv() {
  return (void*)QGuiApplication::focusObject();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:111
// [8] QScreen * primaryScreen()
extern "C" Q_DECL_EXPORT
void* C_ZN15QGuiApplication13primaryScreenEv() {
  return (void*)QGuiApplication::primaryScreen();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:112
// [-2] QList<QScreen *> screens()
extern "C" Q_DECL_EXPORT
QList<QScreen *>* C_ZN15QGuiApplication7screensEv() {
  auto rv = QGuiApplication::screens();
return new QList<QScreen *>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:113
// [8] qreal devicePixelRatio()
extern "C" Q_DECL_EXPORT
qreal C_ZNK15QGuiApplication16devicePixelRatioEv(void *this_) {
  return (qreal)((QGuiApplication*)this_)->devicePixelRatio();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:116
// [8] QCursor * overrideCursor()
extern "C" Q_DECL_EXPORT
void* C_ZN15QGuiApplication14overrideCursorEv() {
  return (void*)QGuiApplication::overrideCursor();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:117
// [-2] void setOverrideCursor(const QCursor &)
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication17setOverrideCursorERK7QCursor(QCursor* arg0) {
  QGuiApplication::setOverrideCursor(*arg0);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:118
// [-2] void changeOverrideCursor(const QCursor &)
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication20changeOverrideCursorERK7QCursor(QCursor* arg0) {
  QGuiApplication::changeOverrideCursor(*arg0);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:119
// [-2] void restoreOverrideCursor()
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication21restoreOverrideCursorEv() {
  QGuiApplication::restoreOverrideCursor();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:122
// [16] QFont font()
extern "C" Q_DECL_EXPORT
void* C_ZN15QGuiApplication4fontEv() {
  auto rv = QGuiApplication::font();
return new QFont(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:123
// [-2] void setFont(const QFont &)
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication7setFontERK5QFont(QFont* arg0) {
  QGuiApplication::setFont(*arg0);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:126
// [8] QClipboard * clipboard()
extern "C" Q_DECL_EXPORT
void* C_ZN15QGuiApplication9clipboardEv() {
  return (void*)QGuiApplication::clipboard();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:129
// [16] QPalette palette()
extern "C" Q_DECL_EXPORT
void* C_ZN15QGuiApplication7paletteEv() {
  auto rv = QGuiApplication::palette();
return new QPalette(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:130
// [-2] void setPalette(const QPalette &)
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication10setPaletteERK8QPalette(QPalette* pal) {
  QGuiApplication::setPalette(*pal);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:132
// [4] Qt::KeyboardModifiers keyboardModifiers()
extern "C" Q_DECL_EXPORT
Qt::KeyboardModifiers C_ZN15QGuiApplication17keyboardModifiersEv() {
  return (Qt::KeyboardModifiers)QGuiApplication::keyboardModifiers();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:133
// [4] Qt::KeyboardModifiers queryKeyboardModifiers()
extern "C" Q_DECL_EXPORT
Qt::KeyboardModifiers C_ZN15QGuiApplication22queryKeyboardModifiersEv() {
  return (Qt::KeyboardModifiers)QGuiApplication::queryKeyboardModifiers();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:134
// [4] Qt::MouseButtons mouseButtons()
extern "C" Q_DECL_EXPORT
Qt::MouseButtons C_ZN15QGuiApplication12mouseButtonsEv() {
  return (Qt::MouseButtons)QGuiApplication::mouseButtons();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:136
// [-2] void setLayoutDirection(Qt::LayoutDirection)
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication18setLayoutDirectionEN2Qt15LayoutDirectionE(Qt::LayoutDirection direction) {
  QGuiApplication::setLayoutDirection(direction);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:137
// [4] Qt::LayoutDirection layoutDirection()
extern "C" Q_DECL_EXPORT
Qt::LayoutDirection C_ZN15QGuiApplication15layoutDirectionEv() {
  return (Qt::LayoutDirection)QGuiApplication::layoutDirection();
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:139
// [1] bool isRightToLeft()
extern "C" Q_DECL_EXPORT
bool C_ZN15QGuiApplication13isRightToLeftEv() {
  return (bool)QGuiApplication::isRightToLeft();
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:140
// [1] bool isLeftToRight()
extern "C" Q_DECL_EXPORT
bool C_ZN15QGuiApplication13isLeftToRightEv() {
  return (bool)QGuiApplication::isLeftToRight();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:142
// [8] QStyleHints * styleHints()
extern "C" Q_DECL_EXPORT
void* C_ZN15QGuiApplication10styleHintsEv() {
  return (void*)QGuiApplication::styleHints();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:143
// [-2] void setDesktopSettingsAware(bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication23setDesktopSettingsAwareEb(bool on) {
  QGuiApplication::setDesktopSettingsAware(on);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:144
// [1] bool desktopSettingsAware()
extern "C" Q_DECL_EXPORT
bool C_ZN15QGuiApplication20desktopSettingsAwareEv() {
  return (bool)QGuiApplication::desktopSettingsAware();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:146
// [8] QInputMethod * inputMethod()
extern "C" Q_DECL_EXPORT
void* C_ZN15QGuiApplication11inputMethodEv() {
  return (void*)QGuiApplication::inputMethod();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:148
// [8] QPlatformNativeInterface * platformNativeInterface()
extern "C" Q_DECL_EXPORT
void* C_ZN15QGuiApplication23platformNativeInterfaceEv() {
  return (void*)QGuiApplication::platformNativeInterface();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:150
// [8] QFunctionPointer platformFunction(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication16platformFunctionERK10QByteArray(QByteArray* function) {
  auto rv = QGuiApplication::platformFunction(*function);
/*return rv;*/
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:152
// [-2] void setQuitOnLastWindowClosed(bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication25setQuitOnLastWindowClosedEb(bool quit) {
  QGuiApplication::setQuitOnLastWindowClosed(quit);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:153
// [1] bool quitOnLastWindowClosed()
extern "C" Q_DECL_EXPORT
bool C_ZN15QGuiApplication22quitOnLastWindowClosedEv() {
  return (bool)QGuiApplication::quitOnLastWindowClosed();
}

// Public static Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtGui/qguiapplication.h:155
// [4] Qt::ApplicationState applicationState()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
Qt::ApplicationState C_ZN15QGuiApplication16applicationStateEv() {
  return (Qt::ApplicationState)QGuiApplication::applicationState();
}
#endif // QT_VERSION >= 0x050200

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:157
// [4] int exec()
extern "C" Q_DECL_EXPORT
int C_ZN15QGuiApplication4execEv() {
  return (int)QGuiApplication::exec();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:158
// [1] bool notify(QObject *, QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN15QGuiApplication6notifyEP7QObjectP6QEvent(void *this_, QObject * arg0, QEvent * arg1) {
  return (bool)((QGuiApplication*)this_)->notify(arg0, arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:162
// [1] bool isSessionRestored()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QGuiApplication17isSessionRestoredEv(void *this_) {
  return (bool)((QGuiApplication*)this_)->isSessionRestored();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:163
// [8] QString sessionId()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QGuiApplication9sessionIdEv(void *this_) {
  auto rv = ((QGuiApplication*)this_)->sessionId();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:164
// [8] QString sessionKey()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QGuiApplication10sessionKeyEv(void *this_) {
  auto rv = ((QGuiApplication*)this_)->sessionKey();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtGui/qguiapplication.h:165
// [1] bool isSavingSession()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZNK15QGuiApplication15isSavingSessionEv(void *this_) {
  return (bool)((QGuiApplication*)this_)->isSavingSession();
}
#endif // QT_VERSION >= 0x050000

// Public static Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtGui/qguiapplication.h:167
// [1] bool isFallbackSessionManagementEnabled()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
bool C_ZN15QGuiApplication34isFallbackSessionManagementEnabledEv() {
  return (bool)QGuiApplication::isFallbackSessionManagementEnabled();
}
#endif // QT_VERSION >= 0x050600

// Public static Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtGui/qguiapplication.h:168
// [-2] void setFallbackSessionManagementEnabled(bool)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication35setFallbackSessionManagementEnabledEb(bool arg0) {
  QGuiApplication::setFallbackSessionManagementEnabled(arg0);
}
#endif // QT_VERSION >= 0x050600

// Public static Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtGui/qguiapplication.h:171
// [-2] void sync()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication4syncEv() {
  QGuiApplication::sync();
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:173
// [-2] void fontDatabaseChanged()
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication19fontDatabaseChangedEv(void *this_) {
  ((QGuiApplication*)this_)->fontDatabaseChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:174
// [-2] void screenAdded(QScreen *)
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication11screenAddedEP7QScreen(void *this_, QScreen * screen) {
  ((QGuiApplication*)this_)->screenAdded(screen);
}

// Public Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtGui/qguiapplication.h:175
// [-2] void screenRemoved(QScreen *)
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication13screenRemovedEP7QScreen(void *this_, QScreen * screen) {
  ((QGuiApplication*)this_)->screenRemoved(screen);
}
#endif // QT_VERSION >= 0x050400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:176
// [-2] void primaryScreenChanged(QScreen *)
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication20primaryScreenChangedEP7QScreen(void *this_, QScreen * screen) {
  ((QGuiApplication*)this_)->primaryScreenChanged(screen);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:177
// [-2] void lastWindowClosed()
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication16lastWindowClosedEv(void *this_) {
  ((QGuiApplication*)this_)->lastWindowClosed();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:178
// [-2] void focusObjectChanged(QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication18focusObjectChangedEP7QObject(void *this_, QObject * focusObject) {
  ((QGuiApplication*)this_)->focusObjectChanged(focusObject);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:179
// [-2] void focusWindowChanged(QWindow *)
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication18focusWindowChangedEP7QWindow(void *this_, QWindow * focusWindow) {
  ((QGuiApplication*)this_)->focusWindowChanged(focusWindow);
}

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtGui/qguiapplication.h:180
// [-2] void applicationStateChanged(Qt::ApplicationState)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication23applicationStateChangedEN2Qt16ApplicationStateE(void *this_, Qt::ApplicationState state) {
  ((QGuiApplication*)this_)->applicationStateChanged(state);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:181
// [-2] void layoutDirectionChanged(Qt::LayoutDirection)
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication22layoutDirectionChangedEN2Qt15LayoutDirectionE(void *this_, Qt::LayoutDirection direction) {
  ((QGuiApplication*)this_)->layoutDirectionChanged(direction);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qguiapplication.h:183
// [-2] void commitDataRequest(QSessionManager &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication17commitDataRequestER15QSessionManager(void *this_, QSessionManager* sessionManager) {
  ((QGuiApplication*)this_)->commitDataRequest(*sessionManager);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qguiapplication.h:184
// [-2] void saveStateRequest(QSessionManager &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication16saveStateRequestER15QSessionManager(void *this_, QSessionManager* sessionManager) {
  ((QGuiApplication*)this_)->saveStateRequest(*sessionManager);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtGui/qguiapplication.h:186
// [-2] void paletteChanged(const QPalette &)
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication14paletteChangedERK8QPalette(void *this_, QPalette* pal) {
  ((QGuiApplication*)this_)->paletteChanged(*pal);
}
#endif // QT_VERSION >= 0x050400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:187
// [-2] void applicationDisplayNameChanged()
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication29applicationDisplayNameChangedEv(void *this_) {
  ((QGuiApplication*)this_)->applicationDisplayNameChanged();
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
