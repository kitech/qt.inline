//  header block begin

// /usr/include/qt/QtWidgets/qtoolbutton.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtoolbutton.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QToolButton is pure virtual: false
// QToolButton has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQToolButton_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQToolButton_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQToolButton_t qt_meta_stringdata_MyQToolButton = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQToolButton"
  },
  "MyQToolButton"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQToolButton[] = {
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
class Q_DECL_EXPORT MyQToolButton : public QToolButton {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QToolButton::staticMetaObject,
  qt_meta_stringdata_MyQToolButton.data,
  qt_meta_data_MyQToolButton,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQToolButton.stringdata0))
      return static_cast<void*>(this);
  return QToolButton::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QToolButton::qt_metacall(_c, _id, _a);
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
  virtual ~MyQToolButton() {}
// void QToolButton(QWidget *)
MyQToolButton(QWidget * parent) : QToolButton(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QToolButton::event(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mousePressEvent(QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mousePressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QToolButton::mousePressEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseReleaseEvent(QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QToolButton::mouseReleaseEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QToolButton::paintEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void actionEvent(QActionEvent *)
  virtual void actionEvent(QActionEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"actionEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QToolButton::actionEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void enterEvent(QEvent *)
  virtual void enterEvent(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"enterEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QToolButton::enterEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void leaveEvent(QEvent *)
  virtual void leaveEvent(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"leaveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QToolButton::leaveEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void timerEvent(QTimerEvent *)
  virtual void timerEvent(QTimerEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"timerEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QToolButton::timerEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void changeEvent(QEvent *)
  virtual void changeEvent(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"changeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QToolButton::changeEvent(arg0);
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
    return QToolButton::hitButton(pos);
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
    QToolButton::nextCheckState();
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QToolButton_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQToolButton* qo = (MyQToolButton*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:110
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QToolButton5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QToolButton*)this_)->QToolButton::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:111
// [-2] void mousePressEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QToolButton15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QToolButton*)this_)->QToolButton::mousePressEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:112
// [-2] void mouseReleaseEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QToolButton17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QToolButton*)this_)->QToolButton::mouseReleaseEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:113
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QToolButton10paintEventEP11QPaintEvent(void *this_, QPaintEvent * arg0) {
  ((QToolButton*)this_)->QToolButton::paintEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:114
// [-2] void actionEvent(QActionEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QToolButton11actionEventEP12QActionEvent(void *this_, QActionEvent * arg0) {
  ((QToolButton*)this_)->QToolButton::actionEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:116
// [-2] void enterEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QToolButton10enterEventEP6QEvent(void *this_, QEvent * arg0) {
  ((QToolButton*)this_)->QToolButton::enterEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:117
// [-2] void leaveEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QToolButton10leaveEventEP6QEvent(void *this_, QEvent * arg0) {
  ((QToolButton*)this_)->QToolButton::leaveEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:118
// [-2] void timerEvent(QTimerEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QToolButton10timerEventEP11QTimerEvent(void *this_, QTimerEvent * arg0) {
  ((QToolButton*)this_)->QToolButton::timerEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:119
// [-2] void changeEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QToolButton11changeEventEP6QEvent(void *this_, QEvent * arg0) {
  ((QToolButton*)this_)->QToolButton::changeEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:121
// [1] bool hitButton(const QPoint &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QToolButton9hitButtonERK6QPoint(void *this_, QPoint* pos) {
  return (bool)((QToolButton*)this_)->QToolButton::hitButton(*pos);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:122
// [-2] void nextCheckState()
extern "C" Q_DECL_EXPORT
void C_ZN11QToolButton14nextCheckStateEv(void *this_) {
  ((QToolButton*)this_)->QToolButton::nextCheckState();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:58
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QToolButton10metaObjectEv(void *this_) {
  return (void*)((QToolButton*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:58
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QToolButton11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QToolButton*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:58
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QToolButton11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QToolButton*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:58
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QToolButton2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QToolButton::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:58
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QToolButton6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QToolButton::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:75
// [-2] void QToolButton(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QToolButtonC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQToolButton*)(0);
  return  new MyQToolButton(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:76
// [-2] void ~QToolButton()
extern "C" Q_DECL_EXPORT
void C_ZN11QToolButtonD2Ev(void *this_) {
  delete (QToolButton*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:78
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QToolButton8sizeHintEv(void *this_) {
  auto rv = ((QToolButton*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:79
// [8] QSize minimumSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QToolButton15minimumSizeHintEv(void *this_) {
  auto rv = ((QToolButton*)this_)->minimumSizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:81
// [4] Qt::ToolButtonStyle toolButtonStyle()
extern "C" Q_DECL_EXPORT
Qt::ToolButtonStyle C_ZNK11QToolButton15toolButtonStyleEv(void *this_) {
  return (Qt::ToolButtonStyle)((QToolButton*)this_)->toolButtonStyle();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:83
// [4] Qt::ArrowType arrowType()
extern "C" Q_DECL_EXPORT
Qt::ArrowType C_ZNK11QToolButton9arrowTypeEv(void *this_) {
  return (Qt::ArrowType)((QToolButton*)this_)->arrowType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:84
// [-2] void setArrowType(Qt::ArrowType)
extern "C" Q_DECL_EXPORT
void C_ZN11QToolButton12setArrowTypeEN2Qt9ArrowTypeE(void *this_, Qt::ArrowType type_) {
  ((QToolButton*)this_)->setArrowType(type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:87
// [-2] void setMenu(QMenu *)
extern "C" Q_DECL_EXPORT
void C_ZN11QToolButton7setMenuEP5QMenu(void *this_, QMenu * menu) {
  ((QToolButton*)this_)->setMenu(menu);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:88
// [8] QMenu * menu()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QToolButton4menuEv(void *this_) {
  return (void*)((QToolButton*)this_)->menu();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:90
// [-2] void setPopupMode(QToolButton::ToolButtonPopupMode)
extern "C" Q_DECL_EXPORT
void C_ZN11QToolButton12setPopupModeENS_19ToolButtonPopupModeE(void *this_, QToolButton::ToolButtonPopupMode mode) {
  ((QToolButton*)this_)->setPopupMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:91
// [4] QToolButton::ToolButtonPopupMode popupMode()
extern "C" Q_DECL_EXPORT
QToolButton::ToolButtonPopupMode C_ZNK11QToolButton9popupModeEv(void *this_) {
  return (QToolButton::ToolButtonPopupMode)((QToolButton*)this_)->popupMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:94
// [8] QAction * defaultAction()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QToolButton13defaultActionEv(void *this_) {
  return (void*)((QToolButton*)this_)->defaultAction();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:96
// [-2] void setAutoRaise(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QToolButton12setAutoRaiseEb(void *this_, bool enable) {
  ((QToolButton*)this_)->setAutoRaise(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:97
// [1] bool autoRaise()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QToolButton9autoRaiseEv(void *this_) {
  return (bool)((QToolButton*)this_)->autoRaise();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:101
// [-2] void showMenu()
extern "C" Q_DECL_EXPORT
void C_ZN11QToolButton8showMenuEv(void *this_) {
  ((QToolButton*)this_)->showMenu();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:103
// [-2] void setToolButtonStyle(Qt::ToolButtonStyle)
extern "C" Q_DECL_EXPORT
void C_ZN11QToolButton18setToolButtonStyleEN2Qt15ToolButtonStyleE(void *this_, Qt::ToolButtonStyle style) {
  ((QToolButton*)this_)->setToolButtonStyle(style);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:104
// [-2] void setDefaultAction(QAction *)
extern "C" Q_DECL_EXPORT
void C_ZN11QToolButton16setDefaultActionEP7QAction(void *this_, QAction * arg0) {
  ((QToolButton*)this_)->setDefaultAction(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:107
// [-2] void triggered(QAction *)
extern "C" Q_DECL_EXPORT
void C_ZN11QToolButton9triggeredEP7QAction(void *this_, QAction * arg0) {
  ((QToolButton*)this_)->triggered(arg0);
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
