//  header block begin

// since 0x050000
// /usr/include/qt/QtGui/qstylehints.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstylehints.h>
#include <QtGui>
#include "callback_inherit.h"

// QStyleHints is pure virtual: false
// QStyleHints has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStyleHints_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleHints_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleHints_t qt_meta_stringdata_MyQStyleHints = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQStyleHints"
  },
  "MyQStyleHints"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleHints[] = {
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
class Q_DECL_EXPORT MyQStyleHints : public QStyleHints {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QStyleHints::staticMetaObject,
  qt_meta_stringdata_MyQStyleHints.data,
  qt_meta_data_MyQStyleHints,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQStyleHints.stringdata0))
      return static_cast<void*>(this);
  return QStyleHints::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QStyleHints::qt_metacall(_c, _id, _a);
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
  virtual ~MyQStyleHints() {}
};

extern "C" Q_DECL_EXPORT
void* C_QStyleHints_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQStyleHints* qo = (MyQStyleHints*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QStyleHints10metaObjectEv(void *this_) {
  return (void*)((QStyleHints*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:54
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QStyleHints11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QStyleHints*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:54
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QStyleHints11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QStyleHints*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:54
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QStyleHints2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QStyleHints::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:54
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QStyleHints6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QStyleHints::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:79
// [-2] void setMouseDoubleClickInterval(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QStyleHints27setMouseDoubleClickIntervalEi(void *this_, int mouseDoubleClickInterval) {
  ((QStyleHints*)this_)->setMouseDoubleClickInterval(mouseDoubleClickInterval);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:80
// [4] int mouseDoubleClickInterval()
extern "C" Q_DECL_EXPORT
int C_ZNK11QStyleHints24mouseDoubleClickIntervalEv(void *this_) {
  return (int)((QStyleHints*)this_)->mouseDoubleClickInterval();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:81
// [-2] void setMousePressAndHoldInterval(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QStyleHints28setMousePressAndHoldIntervalEi(void *this_, int mousePressAndHoldInterval) {
  ((QStyleHints*)this_)->setMousePressAndHoldInterval(mousePressAndHoldInterval);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:82
// [4] int mousePressAndHoldInterval()
extern "C" Q_DECL_EXPORT
int C_ZNK11QStyleHints25mousePressAndHoldIntervalEv(void *this_) {
  return (int)((QStyleHints*)this_)->mousePressAndHoldInterval();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:83
// [-2] void setStartDragDistance(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QStyleHints20setStartDragDistanceEi(void *this_, int startDragDistance) {
  ((QStyleHints*)this_)->setStartDragDistance(startDragDistance);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:84
// [4] int startDragDistance()
extern "C" Q_DECL_EXPORT
int C_ZNK11QStyleHints17startDragDistanceEv(void *this_) {
  return (int)((QStyleHints*)this_)->startDragDistance();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:85
// [-2] void setStartDragTime(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QStyleHints16setStartDragTimeEi(void *this_, int startDragTime) {
  ((QStyleHints*)this_)->setStartDragTime(startDragTime);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:86
// [4] int startDragTime()
extern "C" Q_DECL_EXPORT
int C_ZNK11QStyleHints13startDragTimeEv(void *this_) {
  return (int)((QStyleHints*)this_)->startDragTime();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:87
// [4] int startDragVelocity()
extern "C" Q_DECL_EXPORT
int C_ZNK11QStyleHints17startDragVelocityEv(void *this_) {
  return (int)((QStyleHints*)this_)->startDragVelocity();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:88
// [-2] void setKeyboardInputInterval(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QStyleHints24setKeyboardInputIntervalEi(void *this_, int keyboardInputInterval) {
  ((QStyleHints*)this_)->setKeyboardInputInterval(keyboardInputInterval);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:89
// [4] int keyboardInputInterval()
extern "C" Q_DECL_EXPORT
int C_ZNK11QStyleHints21keyboardInputIntervalEv(void *this_) {
  return (int)((QStyleHints*)this_)->keyboardInputInterval();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:90
// [4] int keyboardAutoRepeatRate()
extern "C" Q_DECL_EXPORT
int C_ZNK11QStyleHints22keyboardAutoRepeatRateEv(void *this_) {
  return (int)((QStyleHints*)this_)->keyboardAutoRepeatRate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:91
// [-2] void setCursorFlashTime(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QStyleHints18setCursorFlashTimeEi(void *this_, int cursorFlashTime) {
  ((QStyleHints*)this_)->setCursorFlashTime(cursorFlashTime);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:92
// [4] int cursorFlashTime()
extern "C" Q_DECL_EXPORT
int C_ZNK11QStyleHints15cursorFlashTimeEv(void *this_) {
  return (int)((QStyleHints*)this_)->cursorFlashTime();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:93
// [1] bool showIsFullScreen()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QStyleHints16showIsFullScreenEv(void *this_) {
  return (bool)((QStyleHints*)this_)->showIsFullScreen();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:94
// [1] bool showIsMaximized()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QStyleHints15showIsMaximizedEv(void *this_) {
  return (bool)((QStyleHints*)this_)->showIsMaximized();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:95
// [1] bool showShortcutsInContextMenus()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QStyleHints27showShortcutsInContextMenusEv(void *this_) {
  return (bool)((QStyleHints*)this_)->showShortcutsInContextMenus();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:96
// [4] int passwordMaskDelay()
extern "C" Q_DECL_EXPORT
int C_ZNK11QStyleHints17passwordMaskDelayEv(void *this_) {
  return (int)((QStyleHints*)this_)->passwordMaskDelay();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:97
// [2] QChar passwordMaskCharacter()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QStyleHints21passwordMaskCharacterEv(void *this_) {
  auto rv = ((QStyleHints*)this_)->passwordMaskCharacter();
return new QChar(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:98
// [8] qreal fontSmoothingGamma()
extern "C" Q_DECL_EXPORT
qreal C_ZNK11QStyleHints18fontSmoothingGammaEv(void *this_) {
  return (qreal)((QStyleHints*)this_)->fontSmoothingGamma();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:99
// [1] bool useRtlExtensions()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QStyleHints16useRtlExtensionsEv(void *this_) {
  return (bool)((QStyleHints*)this_)->useRtlExtensions();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:100
// [1] bool setFocusOnTouchRelease()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QStyleHints22setFocusOnTouchReleaseEv(void *this_) {
  return (bool)((QStyleHints*)this_)->setFocusOnTouchRelease();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:101
// [4] Qt::TabFocusBehavior tabFocusBehavior()
extern "C" Q_DECL_EXPORT
Qt::TabFocusBehavior C_ZNK11QStyleHints16tabFocusBehaviorEv(void *this_) {
  return (Qt::TabFocusBehavior)((QStyleHints*)this_)->tabFocusBehavior();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:102
// [-2] void setTabFocusBehavior(Qt::TabFocusBehavior)
extern "C" Q_DECL_EXPORT
void C_ZN11QStyleHints19setTabFocusBehaviorEN2Qt16TabFocusBehaviorE(void *this_, Qt::TabFocusBehavior tabFocusBehavior) {
  ((QStyleHints*)this_)->setTabFocusBehavior(tabFocusBehavior);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:103
// [1] bool singleClickActivation()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QStyleHints21singleClickActivationEv(void *this_) {
  return (bool)((QStyleHints*)this_)->singleClickActivation();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:104
// [1] bool useHoverEffects()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QStyleHints15useHoverEffectsEv(void *this_) {
  return (bool)((QStyleHints*)this_)->useHoverEffects();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:105
// [-2] void setUseHoverEffects(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QStyleHints18setUseHoverEffectsEb(void *this_, bool useHoverEffects) {
  ((QStyleHints*)this_)->setUseHoverEffects(useHoverEffects);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:106
// [4] int wheelScrollLines()
extern "C" Q_DECL_EXPORT
int C_ZNK11QStyleHints16wheelScrollLinesEv(void *this_) {
  return (int)((QStyleHints*)this_)->wheelScrollLines();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:107
// [-2] void setWheelScrollLines(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QStyleHints19setWheelScrollLinesEi(void *this_, int scrollLines) {
  ((QStyleHints*)this_)->setWheelScrollLines(scrollLines);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:108
// [-2] void setMouseQuickSelectionThreshold(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QStyleHints31setMouseQuickSelectionThresholdEi(void *this_, int threshold) {
  ((QStyleHints*)this_)->setMouseQuickSelectionThreshold(threshold);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:109
// [4] int mouseQuickSelectionThreshold()
extern "C" Q_DECL_EXPORT
int C_ZNK11QStyleHints28mouseQuickSelectionThresholdEv(void *this_) {
  return (int)((QStyleHints*)this_)->mouseQuickSelectionThreshold();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:112
// [-2] void cursorFlashTimeChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QStyleHints22cursorFlashTimeChangedEi(void *this_, int cursorFlashTime) {
  ((QStyleHints*)this_)->cursorFlashTimeChanged(cursorFlashTime);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:113
// [-2] void keyboardInputIntervalChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QStyleHints28keyboardInputIntervalChangedEi(void *this_, int keyboardInputInterval) {
  ((QStyleHints*)this_)->keyboardInputIntervalChanged(keyboardInputInterval);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:114
// [-2] void mouseDoubleClickIntervalChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QStyleHints31mouseDoubleClickIntervalChangedEi(void *this_, int mouseDoubleClickInterval) {
  ((QStyleHints*)this_)->mouseDoubleClickIntervalChanged(mouseDoubleClickInterval);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:115
// [-2] void mousePressAndHoldIntervalChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QStyleHints32mousePressAndHoldIntervalChangedEi(void *this_, int mousePressAndHoldInterval) {
  ((QStyleHints*)this_)->mousePressAndHoldIntervalChanged(mousePressAndHoldInterval);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:116
// [-2] void startDragDistanceChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QStyleHints24startDragDistanceChangedEi(void *this_, int startDragDistance) {
  ((QStyleHints*)this_)->startDragDistanceChanged(startDragDistance);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:117
// [-2] void startDragTimeChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QStyleHints20startDragTimeChangedEi(void *this_, int startDragTime) {
  ((QStyleHints*)this_)->startDragTimeChanged(startDragTime);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:118
// [-2] void tabFocusBehaviorChanged(Qt::TabFocusBehavior)
extern "C" Q_DECL_EXPORT
void C_ZN11QStyleHints23tabFocusBehaviorChangedEN2Qt16TabFocusBehaviorE(void *this_, Qt::TabFocusBehavior tabFocusBehavior) {
  ((QStyleHints*)this_)->tabFocusBehaviorChanged(tabFocusBehavior);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:119
// [-2] void useHoverEffectsChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QStyleHints22useHoverEffectsChangedEb(void *this_, bool useHoverEffects) {
  ((QStyleHints*)this_)->useHoverEffectsChanged(useHoverEffects);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:120
// [-2] void wheelScrollLinesChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QStyleHints23wheelScrollLinesChangedEi(void *this_, int scrollLines) {
  ((QStyleHints*)this_)->wheelScrollLinesChanged(scrollLines);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:121
// [-2] void mouseQuickSelectionThresholdChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QStyleHints35mouseQuickSelectionThresholdChangedEi(void *this_, int threshold) {
  ((QStyleHints*)this_)->mouseQuickSelectionThresholdChanged(threshold);
}


extern "C" Q_DECL_EXPORT
void C_ZN11QStyleHintsD2Ev(void *this_) {
  delete (QStyleHints*)(this_);
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
