//  header block begin
// /usr/include/qt/QtWidgets/qabstractbutton.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractbutton.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QAbstractButton is pure virtual: true
// QAbstractButton has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQAbstractButton_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAbstractButton_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAbstractButton_t qt_meta_stringdata_MyQAbstractButton = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQAbstractButton"
  },
  "MyQAbstractButton"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAbstractButton[] = {
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
class Q_DECL_EXPORT MyQAbstractButton : public QAbstractButton {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QAbstractButton::staticMetaObject,
  qt_meta_stringdata_MyQAbstractButton.data,
  qt_meta_data_MyQAbstractButton,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQAbstractButton.stringdata0))
      return static_cast<void*>(this);
  return QAbstractButton::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QAbstractButton::qt_metacall(_c, _id, _a);
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
  virtual ~MyQAbstractButton() {}
// void QAbstractButton(QWidget *)
MyQAbstractButton(QWidget * parent) : QAbstractButton(parent) {}
// Protected purevirtual virtual Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractButton::paintEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool hitButton(const QPoint &)
  virtual bool hitButton(const QPoint & pos) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"hitButton", &handled, 1, (uint64_t)&pos, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QAbstractButton::hitButton(pos);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void checkStateSet()
  virtual void checkStateSet()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"checkStateSet", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractButton::checkStateSet();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void nextCheckState()
  virtual void nextCheckState()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"nextCheckState", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractButton::nextCheckState();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QAbstractButton::event(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void keyPressEvent(QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyPressEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractButton::keyPressEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void keyReleaseEvent(QKeyEvent *)
  virtual void keyReleaseEvent(QKeyEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyReleaseEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractButton::keyReleaseEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mousePressEvent(QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mousePressEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractButton::mousePressEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseReleaseEvent(QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractButton::mouseReleaseEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseMoveEvent(QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractButton::mouseMoveEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void focusInEvent(QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusInEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractButton::focusInEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void focusOutEvent(QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusOutEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractButton::focusOutEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void changeEvent(QEvent *)
  virtual void changeEvent(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"changeEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractButton::changeEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void timerEvent(QTimerEvent *)
  virtual void timerEvent(QTimerEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"timerEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractButton::timerEvent(e);
  }
  }

};

extern "C" Q_DECL_EXPORT
void C_QAbstractButton_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQAbstractButton* qo = (MyQAbstractButton*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
}

// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:129
// [-2] void paintEvent(QPaintEvent *)
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:130
// [1] bool hitButton(const QPoint &)
extern "C" Q_DECL_EXPORT
bool C_ZNK15QAbstractButton9hitButtonERK6QPoint(void *this_, QPoint* pos) {
  return (bool)((QAbstractButton*)this_)->QAbstractButton::hitButton(*pos);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:131
// [-2] void checkStateSet()
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton13checkStateSetEv(void *this_) {
  ((QAbstractButton*)this_)->QAbstractButton::checkStateSet();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:132
// [-2] void nextCheckState()
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton14nextCheckStateEv(void *this_) {
  ((QAbstractButton*)this_)->QAbstractButton::nextCheckState();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:134
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN15QAbstractButton5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QAbstractButton*)this_)->QAbstractButton::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:135
// [-2] void keyPressEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * e) {
  ((QAbstractButton*)this_)->QAbstractButton::keyPressEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:136
// [-2] void keyReleaseEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton15keyReleaseEventEP9QKeyEvent(void *this_, QKeyEvent * e) {
  ((QAbstractButton*)this_)->QAbstractButton::keyReleaseEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:137
// [-2] void mousePressEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * e) {
  ((QAbstractButton*)this_)->QAbstractButton::mousePressEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:138
// [-2] void mouseReleaseEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * e) {
  ((QAbstractButton*)this_)->QAbstractButton::mouseReleaseEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:139
// [-2] void mouseMoveEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * e) {
  ((QAbstractButton*)this_)->QAbstractButton::mouseMoveEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:140
// [-2] void focusInEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton12focusInEventEP11QFocusEvent(void *this_, QFocusEvent * e) {
  ((QAbstractButton*)this_)->QAbstractButton::focusInEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:141
// [-2] void focusOutEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton13focusOutEventEP11QFocusEvent(void *this_, QFocusEvent * e) {
  ((QAbstractButton*)this_)->QAbstractButton::focusOutEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:142
// [-2] void changeEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton11changeEventEP6QEvent(void *this_, QEvent * e) {
  ((QAbstractButton*)this_)->QAbstractButton::changeEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:143
// [-2] void timerEvent(QTimerEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton10timerEventEP11QTimerEvent(void *this_, QTimerEvent * e) {
  ((QAbstractButton*)this_)->QAbstractButton::timerEvent(e);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:58
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QAbstractButton10metaObjectEv(void *this_) {
  return (void*)((QAbstractButton*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:58
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QAbstractButton11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAbstractButton*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:58
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN15QAbstractButton11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAbstractButton*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:58
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QAbstractButton2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractButton::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:58
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QAbstractButton6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractButton::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:75
// [-2] void QAbstractButton(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QAbstractButtonC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQAbstractButton*)(0);
  return  new MyQAbstractButton(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:76
// [-2] void ~QAbstractButton()
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButtonD2Ev(void *this_) {
  delete (QAbstractButton*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:78
// [-2] void setText(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton7setTextERK7QString(void *this_, QString* text) {
  ((QAbstractButton*)this_)->setText(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:79
// [8] QString text()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QAbstractButton4textEv(void *this_) {
  auto rv = ((QAbstractButton*)this_)->text();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:81
// [-2] void setIcon(const QIcon &)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton7setIconERK5QIcon(void *this_, QIcon* icon) {
  ((QAbstractButton*)this_)->setIcon(*icon);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:82
// [8] QIcon icon()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QAbstractButton4iconEv(void *this_) {
  auto rv = ((QAbstractButton*)this_)->icon();
return new QIcon(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:84
// [8] QSize iconSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QAbstractButton8iconSizeEv(void *this_) {
  auto rv = ((QAbstractButton*)this_)->iconSize();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:87
// [-2] void setShortcut(const QKeySequence &)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton11setShortcutERK12QKeySequence(void *this_, QKeySequence* key) {
  ((QAbstractButton*)this_)->setShortcut(*key);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:88
// [8] QKeySequence shortcut()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QAbstractButton8shortcutEv(void *this_) {
  auto rv = ((QAbstractButton*)this_)->shortcut();
return new QKeySequence(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:91
// [-2] void setCheckable(bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton12setCheckableEb(void *this_, bool arg0) {
  ((QAbstractButton*)this_)->setCheckable(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:92
// [1] bool isCheckable()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QAbstractButton11isCheckableEv(void *this_) {
  return (bool)((QAbstractButton*)this_)->isCheckable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:94
// [1] bool isChecked()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QAbstractButton9isCheckedEv(void *this_) {
  return (bool)((QAbstractButton*)this_)->isChecked();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:96
// [-2] void setDown(bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton7setDownEb(void *this_, bool arg0) {
  ((QAbstractButton*)this_)->setDown(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:97
// [1] bool isDown()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QAbstractButton6isDownEv(void *this_) {
  return (bool)((QAbstractButton*)this_)->isDown();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:99
// [-2] void setAutoRepeat(bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton13setAutoRepeatEb(void *this_, bool arg0) {
  ((QAbstractButton*)this_)->setAutoRepeat(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:100
// [1] bool autoRepeat()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QAbstractButton10autoRepeatEv(void *this_) {
  return (bool)((QAbstractButton*)this_)->autoRepeat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:102
// [-2] void setAutoRepeatDelay(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton18setAutoRepeatDelayEi(void *this_, int arg0) {
  ((QAbstractButton*)this_)->setAutoRepeatDelay(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:103
// [4] int autoRepeatDelay()
extern "C" Q_DECL_EXPORT
int C_ZNK15QAbstractButton15autoRepeatDelayEv(void *this_) {
  return (int)((QAbstractButton*)this_)->autoRepeatDelay();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:105
// [-2] void setAutoRepeatInterval(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton21setAutoRepeatIntervalEi(void *this_, int arg0) {
  ((QAbstractButton*)this_)->setAutoRepeatInterval(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:106
// [4] int autoRepeatInterval()
extern "C" Q_DECL_EXPORT
int C_ZNK15QAbstractButton18autoRepeatIntervalEv(void *this_) {
  return (int)((QAbstractButton*)this_)->autoRepeatInterval();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:108
// [-2] void setAutoExclusive(bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton16setAutoExclusiveEb(void *this_, bool arg0) {
  ((QAbstractButton*)this_)->setAutoExclusive(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:109
// [1] bool autoExclusive()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QAbstractButton13autoExclusiveEv(void *this_) {
  return (bool)((QAbstractButton*)this_)->autoExclusive();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:112
// [8] QButtonGroup * group()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QAbstractButton5groupEv(void *this_) {
  return (void*)((QAbstractButton*)this_)->group();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:116
// [-2] void setIconSize(const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton11setIconSizeERK5QSize(void *this_, QSize* size) {
  ((QAbstractButton*)this_)->setIconSize(*size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:117
// [-2] void animateClick(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton12animateClickEi(void *this_, int msec) {
  ((QAbstractButton*)this_)->animateClick(msec);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:118
// [-2] void click()
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton5clickEv(void *this_) {
  ((QAbstractButton*)this_)->click();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:119
// [-2] void toggle()
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton6toggleEv(void *this_) {
  ((QAbstractButton*)this_)->toggle();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:120
// [-2] void setChecked(bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton10setCheckedEb(void *this_, bool arg0) {
  ((QAbstractButton*)this_)->setChecked(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:123
// [-2] void pressed()
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton7pressedEv(void *this_) {
  ((QAbstractButton*)this_)->pressed();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:124
// [-2] void released()
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton8releasedEv(void *this_) {
  ((QAbstractButton*)this_)->released();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:125
// [-2] void clicked(bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton7clickedEb(void *this_, bool checked) {
  ((QAbstractButton*)this_)->clicked(checked);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:126
// [-2] void toggled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton7toggledEb(void *this_, bool checked) {
  ((QAbstractButton*)this_)->toggled(checked);
}

//  main block end
