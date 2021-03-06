//  header block begin

// /usr/include/qt/QtWidgets/qapplication.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qapplication.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QApplication is pure virtual: false
// QApplication has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQApplication_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQApplication_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQApplication_t qt_meta_stringdata_MyQApplication = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQApplication"
  },
  "MyQApplication"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQApplication[] = {
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
class Q_DECL_EXPORT MyQApplication : public QApplication {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QApplication::staticMetaObject,
  qt_meta_stringdata_MyQApplication.data,
  qt_meta_data_MyQApplication,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQApplication.stringdata0))
      return static_cast<void*>(this);
  return QApplication::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QApplication::qt_metacall(_c, _id, _a);
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
  virtual ~MyQApplication() {}
// void QApplication(int &, char **, int)
MyQApplication(int & argc, char** argv, int arg2) : QApplication(argc, argv, arg2) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QApplication::event(arg0);
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
    return QApplication::compressEvent(arg0, receiver, arg2);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QApplication_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQApplication* qo = (MyQApplication*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:204
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN12QApplication5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QApplication*)this_)->QApplication::event(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:205
// [1] bool compressEvent(QEvent *, QObject *, QPostEventList *)
extern "C" Q_DECL_EXPORT
bool C_ZN12QApplication13compressEventEP6QEventP7QObjectP14QPostEventList(void *this_, QEvent * arg0, QObject * receiver, QPostEventList * arg2) {
  return (bool)((QApplication*)this_)->QApplication::compressEvent(arg0, receiver, arg2);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:74
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QApplication10metaObjectEv(void *this_) {
  return (void*)((QApplication*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:74
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QApplication11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QApplication*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:74
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN12QApplication11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QApplication*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:74
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QApplication2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QApplication::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:74
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QApplication6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QApplication::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:94
// [-2] void QApplication(int &, char **, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QApplicationC2ERiPPci(int & argc, char** argv, int arg2) {
  auto _nilp = (MyQApplication*)(0);
  return  new MyQApplication(*(new int(argc)), argv, arg2);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:96
// [-2] void ~QApplication()
extern "C" Q_DECL_EXPORT
void C_ZN12QApplicationD2Ev(void *this_) {
  delete (QApplication*)(this_);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:98
// [8] QStyle * style()
extern "C" Q_DECL_EXPORT
void* C_ZN12QApplication5styleEv() {
  return (void*)QApplication::style();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:99
// [-2] void setStyle(QStyle *)
extern "C" Q_DECL_EXPORT
void C_ZN12QApplication8setStyleEP6QStyle(QStyle * arg0) {
  QApplication::setStyle(arg0);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:100
// [8] QStyle * setStyle(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QApplication8setStyleERK7QString(QString* arg0) {
  return (void*)QApplication::setStyle(*arg0);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:103
// [4] int colorSpec()
extern "C" Q_DECL_EXPORT
int C_ZN12QApplication9colorSpecEv() {
  return (int)QApplication::colorSpec();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:104
// [-2] void setColorSpec(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QApplication12setColorSpecEi(int arg0) {
  QApplication::setColorSpec(arg0);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:111
// [16] QPalette palette(const QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QApplication7paletteEPK7QWidget(const QWidget * arg0) {
  auto rv = QApplication::palette(arg0);
return new QPalette(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:112
// [16] QPalette palette(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QApplication7paletteEPKc(const char * className) {
  auto rv = QApplication::palette(className);
return new QPalette(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:113
// [-2] void setPalette(const QPalette &, const char *)
extern "C" Q_DECL_EXPORT
void C_ZN12QApplication10setPaletteERK8QPalettePKc(QPalette* arg0, const char * className) {
  QApplication::setPalette(*arg0, className);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:114
// [16] QFont font()
extern "C" Q_DECL_EXPORT
void* C_ZN12QApplication4fontEv() {
  auto rv = QApplication::font();
return new QFont(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:115
// [16] QFont font(const QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QApplication4fontEPK7QWidget(const QWidget * arg0) {
  auto rv = QApplication::font(arg0);
return new QFont(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:116
// [16] QFont font(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QApplication4fontEPKc(const char * className) {
  auto rv = QApplication::font(className);
return new QFont(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:117
// [-2] void setFont(const QFont &, const char *)
extern "C" Q_DECL_EXPORT
void C_ZN12QApplication7setFontERK5QFontPKc(QFont* arg0, const char * className) {
  QApplication::setFont(*arg0, className);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:118
// [8] QFontMetrics fontMetrics()
extern "C" Q_DECL_EXPORT
void* C_ZN12QApplication11fontMetricsEv() {
  auto rv = QApplication::fontMetrics();
return new QFontMetrics(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:121
// [-2] void setWindowIcon(const QIcon &)
extern "C" Q_DECL_EXPORT
void C_ZN12QApplication13setWindowIconERK5QIcon(QIcon* icon) {
  QApplication::setWindowIcon(*icon);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:122
// [8] QIcon windowIcon()
extern "C" Q_DECL_EXPORT
void* C_ZN12QApplication10windowIconEv() {
  auto rv = QApplication::windowIcon();
return new QIcon(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:125
// [-2] QWidgetList allWidgets()
extern "C" Q_DECL_EXPORT
void C_ZN12QApplication10allWidgetsEv() {
  auto rv = QApplication::allWidgets();
/*return rv;*/
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:126
// [-2] QWidgetList topLevelWidgets()
extern "C" Q_DECL_EXPORT
void C_ZN12QApplication15topLevelWidgetsEv() {
  auto rv = QApplication::topLevelWidgets();
/*return rv;*/
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:128
// [8] QDesktopWidget * desktop()
extern "C" Q_DECL_EXPORT
void* C_ZN12QApplication7desktopEv() {
  return (void*)QApplication::desktop();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:130
// [8] QWidget * activePopupWidget()
extern "C" Q_DECL_EXPORT
void* C_ZN12QApplication17activePopupWidgetEv() {
  return (void*)QApplication::activePopupWidget();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:131
// [8] QWidget * activeModalWidget()
extern "C" Q_DECL_EXPORT
void* C_ZN12QApplication17activeModalWidgetEv() {
  return (void*)QApplication::activeModalWidget();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:132
// [8] QWidget * focusWidget()
extern "C" Q_DECL_EXPORT
void* C_ZN12QApplication11focusWidgetEv() {
  return (void*)QApplication::focusWidget();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:134
// [8] QWidget * activeWindow()
extern "C" Q_DECL_EXPORT
void* C_ZN12QApplication12activeWindowEv() {
  return (void*)QApplication::activeWindow();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:135
// [-2] void setActiveWindow(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN12QApplication15setActiveWindowEP7QWidget(QWidget * act) {
  QApplication::setActiveWindow(act);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:137
// [8] QWidget * widgetAt(const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QApplication8widgetAtERK6QPoint(QPoint* p) {
  return (void*)QApplication::widgetAt(*p);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:138
// [8] QWidget * widgetAt(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QApplication8widgetAtEii(int x, int y) {
  return (void*)QApplication::widgetAt(x, y);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:139
// [8] QWidget * topLevelAt(const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QApplication10topLevelAtERK6QPoint(QPoint* p) {
  return (void*)QApplication::topLevelAt(*p);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:140
// [8] QWidget * topLevelAt(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QApplication10topLevelAtEii(int x, int y) {
  return (void*)QApplication::topLevelAt(x, y);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:145
// [-2] void beep()
extern "C" Q_DECL_EXPORT
void C_ZN12QApplication4beepEv() {
  QApplication::beep();
}

// Public static Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qapplication.h:146
// [-2] void alert(QWidget *, int)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN12QApplication5alertEP7QWidgeti(QWidget * widget, int duration) {
  QApplication::alert(widget, duration);
}
#endif // QT_VERSION >= 0x040300

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:148
// [-2] void setCursorFlashTime(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QApplication18setCursorFlashTimeEi(int arg0) {
  QApplication::setCursorFlashTime(arg0);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:149
// [4] int cursorFlashTime()
extern "C" Q_DECL_EXPORT
int C_ZN12QApplication15cursorFlashTimeEv() {
  return (int)QApplication::cursorFlashTime();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:151
// [-2] void setDoubleClickInterval(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QApplication22setDoubleClickIntervalEi(int arg0) {
  QApplication::setDoubleClickInterval(arg0);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:152
// [4] int doubleClickInterval()
extern "C" Q_DECL_EXPORT
int C_ZN12QApplication19doubleClickIntervalEv() {
  return (int)QApplication::doubleClickInterval();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:154
// [-2] void setKeyboardInputInterval(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QApplication24setKeyboardInputIntervalEi(int arg0) {
  QApplication::setKeyboardInputInterval(arg0);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:155
// [4] int keyboardInputInterval()
extern "C" Q_DECL_EXPORT
int C_ZN12QApplication21keyboardInputIntervalEv() {
  return (int)QApplication::keyboardInputInterval();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:158
// [-2] void setWheelScrollLines(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QApplication19setWheelScrollLinesEi(int arg0) {
  QApplication::setWheelScrollLines(arg0);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:159
// [4] int wheelScrollLines()
extern "C" Q_DECL_EXPORT
int C_ZN12QApplication16wheelScrollLinesEv() {
  return (int)QApplication::wheelScrollLines();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:161
// [-2] void setGlobalStrut(const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN12QApplication14setGlobalStrutERK5QSize(QSize* arg0) {
  QApplication::setGlobalStrut(*arg0);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:162
// [8] QSize globalStrut()
extern "C" Q_DECL_EXPORT
void* C_ZN12QApplication11globalStrutEv() {
  auto rv = QApplication::globalStrut();
return new QSize(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:164
// [-2] void setStartDragTime(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QApplication16setStartDragTimeEi(int ms) {
  QApplication::setStartDragTime(ms);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:165
// [4] int startDragTime()
extern "C" Q_DECL_EXPORT
int C_ZN12QApplication13startDragTimeEv() {
  return (int)QApplication::startDragTime();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:166
// [-2] void setStartDragDistance(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QApplication20setStartDragDistanceEi(int l) {
  QApplication::setStartDragDistance(l);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:167
// [4] int startDragDistance()
extern "C" Q_DECL_EXPORT
int C_ZN12QApplication17startDragDistanceEv() {
  return (int)QApplication::startDragDistance();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:169
// [1] bool isEffectEnabled(Qt::UIEffect)
extern "C" Q_DECL_EXPORT
bool C_ZN12QApplication15isEffectEnabledEN2Qt8UIEffectE(Qt::UIEffect arg0) {
  return (bool)QApplication::isEffectEnabled(arg0);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:170
// [-2] void setEffectEnabled(Qt::UIEffect, bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QApplication16setEffectEnabledEN2Qt8UIEffectEb(Qt::UIEffect arg0, bool enable) {
  QApplication::setEffectEnabled(arg0, enable);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:179
// [4] int exec()
extern "C" Q_DECL_EXPORT
int C_ZN12QApplication4execEv() {
  return (int)QApplication::exec();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:180
// [1] bool notify(QObject *, QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN12QApplication6notifyEP7QObjectP6QEvent(void *this_, QObject * arg0, QEvent * arg1) {
  return (bool)((QApplication*)this_)->notify(arg0, arg1);
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qapplication.h:190
// [-2] void focusChanged(QWidget *, QWidget *)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN12QApplication12focusChangedEP7QWidgetS1_(void *this_, QWidget * old, QWidget * now) {
  ((QApplication*)this_)->focusChanged(old, now);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:193
// [8] QString styleSheet()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QApplication10styleSheetEv(void *this_) {
  auto rv = ((QApplication*)this_)->styleSheet();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:196
// [-2] void setStyleSheet(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN12QApplication13setStyleSheetERK7QString(void *this_, QString* sheet) {
  ((QApplication*)this_)->setStyleSheet(*sheet);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:198
// [-2] void setAutoSipEnabled(const bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QApplication17setAutoSipEnabledEb(void *this_, const bool enabled) {
  ((QApplication*)this_)->setAutoSipEnabled(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:199
// [1] bool autoSipEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QApplication14autoSipEnabledEv(void *this_) {
  return (bool)((QApplication*)this_)->autoSipEnabled();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:200
// [-2] void closeAllWindows()
extern "C" Q_DECL_EXPORT
void C_ZN12QApplication15closeAllWindowsEv() {
  QApplication::closeAllWindows();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:201
// [-2] void aboutQt()
extern "C" Q_DECL_EXPORT
void C_ZN12QApplication7aboutQtEv() {
  QApplication::aboutQt();
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
