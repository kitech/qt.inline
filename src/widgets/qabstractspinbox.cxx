//  header block begin
// /usr/include/qt/QtWidgets/qabstractspinbox.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractspinbox.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QAbstractSpinBox is pure virtual: true
// QAbstractSpinBox has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQAbstractSpinBox_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAbstractSpinBox_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAbstractSpinBox_t qt_meta_stringdata_MyQAbstractSpinBox = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQAbstractSpinBox"
  },
  "MyQAbstractSpinBox"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAbstractSpinBox[] = {
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
class Q_DECL_EXPORT MyQAbstractSpinBox : public QAbstractSpinBox {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QAbstractSpinBox::staticMetaObject,
  qt_meta_stringdata_MyQAbstractSpinBox.data,
  qt_meta_data_MyQAbstractSpinBox,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQAbstractSpinBox.stringdata0))
      return static_cast<void*>(this);
  return QAbstractSpinBox::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QAbstractSpinBox::qt_metacall(_c, _id, _a);
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
  virtual ~MyQAbstractSpinBox() {}
// void QAbstractSpinBox(QWidget *)
MyQAbstractSpinBox(QWidget * parent) : QAbstractSpinBox(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractSpinBox::resizeEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void keyPressEvent(QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyPressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractSpinBox::keyPressEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void keyReleaseEvent(QKeyEvent *)
  virtual void keyReleaseEvent(QKeyEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyReleaseEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractSpinBox::keyReleaseEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void wheelEvent(QWheelEvent *)
  virtual void wheelEvent(QWheelEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"wheelEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractSpinBox::wheelEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void focusInEvent(QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusInEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractSpinBox::focusInEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void focusOutEvent(QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusOutEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractSpinBox::focusOutEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void contextMenuEvent(QContextMenuEvent *)
  virtual void contextMenuEvent(QContextMenuEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"contextMenuEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractSpinBox::contextMenuEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void changeEvent(QEvent *)
  virtual void changeEvent(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"changeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractSpinBox::changeEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void closeEvent(QCloseEvent *)
  virtual void closeEvent(QCloseEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"closeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractSpinBox::closeEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void hideEvent(QHideEvent *)
  virtual void hideEvent(QHideEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"hideEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractSpinBox::hideEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mousePressEvent(QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mousePressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractSpinBox::mousePressEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseReleaseEvent(QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractSpinBox::mouseReleaseEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseMoveEvent(QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractSpinBox::mouseMoveEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void timerEvent(QTimerEvent *)
  virtual void timerEvent(QTimerEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"timerEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractSpinBox::timerEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractSpinBox::paintEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void showEvent(QShowEvent *)
  virtual void showEvent(QShowEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"showEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractSpinBox::showEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [4] QAbstractSpinBox::StepEnabled stepEnabled()
  virtual QAbstractSpinBox::StepEnabled stepEnabled() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"stepEnabled", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAbstractSpinBox::StepEnabled)(int)(irv);
      // Typedef Record QFlags<QAbstractSpinBox::StepEnabledFlag>
    } else {
    return QAbstractSpinBox::stepEnabled();
  }
  }

};

extern "C" Q_DECL_EXPORT
void C_QAbstractSpinBox_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQAbstractSpinBox* qo = (MyQAbstractSpinBox*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:136
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN16QAbstractSpinBox11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * event) {
  ((QAbstractSpinBox*)this_)->QAbstractSpinBox::resizeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:137
// [-2] void keyPressEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN16QAbstractSpinBox13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * event) {
  ((QAbstractSpinBox*)this_)->QAbstractSpinBox::keyPressEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:138
// [-2] void keyReleaseEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN16QAbstractSpinBox15keyReleaseEventEP9QKeyEvent(void *this_, QKeyEvent * event) {
  ((QAbstractSpinBox*)this_)->QAbstractSpinBox::keyReleaseEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:140
// [-2] void wheelEvent(QWheelEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN16QAbstractSpinBox10wheelEventEP11QWheelEvent(void *this_, QWheelEvent * event) {
  ((QAbstractSpinBox*)this_)->QAbstractSpinBox::wheelEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:142
// [-2] void focusInEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN16QAbstractSpinBox12focusInEventEP11QFocusEvent(void *this_, QFocusEvent * event) {
  ((QAbstractSpinBox*)this_)->QAbstractSpinBox::focusInEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:143
// [-2] void focusOutEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN16QAbstractSpinBox13focusOutEventEP11QFocusEvent(void *this_, QFocusEvent * event) {
  ((QAbstractSpinBox*)this_)->QAbstractSpinBox::focusOutEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:145
// [-2] void contextMenuEvent(QContextMenuEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN16QAbstractSpinBox16contextMenuEventEP17QContextMenuEvent(void *this_, QContextMenuEvent * event) {
  ((QAbstractSpinBox*)this_)->QAbstractSpinBox::contextMenuEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:147
// [-2] void changeEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN16QAbstractSpinBox11changeEventEP6QEvent(void *this_, QEvent * event) {
  ((QAbstractSpinBox*)this_)->QAbstractSpinBox::changeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:148
// [-2] void closeEvent(QCloseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN16QAbstractSpinBox10closeEventEP11QCloseEvent(void *this_, QCloseEvent * event) {
  ((QAbstractSpinBox*)this_)->QAbstractSpinBox::closeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:149
// [-2] void hideEvent(QHideEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN16QAbstractSpinBox9hideEventEP10QHideEvent(void *this_, QHideEvent * event) {
  ((QAbstractSpinBox*)this_)->QAbstractSpinBox::hideEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:150
// [-2] void mousePressEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN16QAbstractSpinBox15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * event) {
  ((QAbstractSpinBox*)this_)->QAbstractSpinBox::mousePressEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:151
// [-2] void mouseReleaseEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN16QAbstractSpinBox17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * event) {
  ((QAbstractSpinBox*)this_)->QAbstractSpinBox::mouseReleaseEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:152
// [-2] void mouseMoveEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN16QAbstractSpinBox14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * event) {
  ((QAbstractSpinBox*)this_)->QAbstractSpinBox::mouseMoveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:153
// [-2] void timerEvent(QTimerEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN16QAbstractSpinBox10timerEventEP11QTimerEvent(void *this_, QTimerEvent * event) {
  ((QAbstractSpinBox*)this_)->QAbstractSpinBox::timerEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:154
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN16QAbstractSpinBox10paintEventEP11QPaintEvent(void *this_, QPaintEvent * event) {
  ((QAbstractSpinBox*)this_)->QAbstractSpinBox::paintEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:155
// [-2] void showEvent(QShowEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN16QAbstractSpinBox9showEventEP10QShowEvent(void *this_, QShowEvent * event) {
  ((QAbstractSpinBox*)this_)->QAbstractSpinBox::showEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:161
// [4] QAbstractSpinBox::StepEnabled stepEnabled()
extern "C" Q_DECL_EXPORT
QAbstractSpinBox::StepEnabled* C_ZNK16QAbstractSpinBox11stepEnabledEv(void *this_) {
  auto rv = ((QAbstractSpinBox*)this_)->QAbstractSpinBox::stepEnabled();
return new QAbstractSpinBox::StepEnabled(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:58
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QAbstractSpinBox10metaObjectEv(void *this_) {
  return (void*)((QAbstractSpinBox*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:58
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QAbstractSpinBox11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAbstractSpinBox*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:58
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN16QAbstractSpinBox11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAbstractSpinBox*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:58
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QAbstractSpinBox2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractSpinBox::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:58
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QAbstractSpinBox6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractSpinBox::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:73
// [-2] void QAbstractSpinBox(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QAbstractSpinBoxC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQAbstractSpinBox*)(0);
  return  new MyQAbstractSpinBox(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:74
// [-2] void ~QAbstractSpinBox()
extern "C" Q_DECL_EXPORT
void C_ZN16QAbstractSpinBoxD2Ev(void *this_) {
  delete (QAbstractSpinBox*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:83
// [4] QAbstractSpinBox::ButtonSymbols buttonSymbols()
extern "C" Q_DECL_EXPORT
QAbstractSpinBox::ButtonSymbols C_ZNK16QAbstractSpinBox13buttonSymbolsEv(void *this_) {
  return (QAbstractSpinBox::ButtonSymbols)((QAbstractSpinBox*)this_)->buttonSymbols();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:84
// [-2] void setButtonSymbols(QAbstractSpinBox::ButtonSymbols)
extern "C" Q_DECL_EXPORT
void C_ZN16QAbstractSpinBox16setButtonSymbolsENS_13ButtonSymbolsE(void *this_, QAbstractSpinBox::ButtonSymbols bs) {
  ((QAbstractSpinBox*)this_)->setButtonSymbols(bs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:89
// [-2] void setCorrectionMode(QAbstractSpinBox::CorrectionMode)
extern "C" Q_DECL_EXPORT
void C_ZN16QAbstractSpinBox17setCorrectionModeENS_14CorrectionModeE(void *this_, QAbstractSpinBox::CorrectionMode cm) {
  ((QAbstractSpinBox*)this_)->setCorrectionMode(cm);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:90
// [4] QAbstractSpinBox::CorrectionMode correctionMode()
extern "C" Q_DECL_EXPORT
QAbstractSpinBox::CorrectionMode C_ZNK16QAbstractSpinBox14correctionModeEv(void *this_) {
  return (QAbstractSpinBox::CorrectionMode)((QAbstractSpinBox*)this_)->correctionMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:92
// [1] bool hasAcceptableInput()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QAbstractSpinBox18hasAcceptableInputEv(void *this_) {
  return (bool)((QAbstractSpinBox*)this_)->hasAcceptableInput();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:93
// [8] QString text()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QAbstractSpinBox4textEv(void *this_) {
  auto rv = ((QAbstractSpinBox*)this_)->text();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:95
// [8] QString specialValueText()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QAbstractSpinBox16specialValueTextEv(void *this_) {
  auto rv = ((QAbstractSpinBox*)this_)->specialValueText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:96
// [-2] void setSpecialValueText(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QAbstractSpinBox19setSpecialValueTextERK7QString(void *this_, QString* txt) {
  ((QAbstractSpinBox*)this_)->setSpecialValueText(*txt);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:98
// [1] bool wrapping()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QAbstractSpinBox8wrappingEv(void *this_) {
  return (bool)((QAbstractSpinBox*)this_)->wrapping();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:99
// [-2] void setWrapping(bool)
extern "C" Q_DECL_EXPORT
void C_ZN16QAbstractSpinBox11setWrappingEb(void *this_, bool w) {
  ((QAbstractSpinBox*)this_)->setWrapping(w);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:101
// [-2] void setReadOnly(bool)
extern "C" Q_DECL_EXPORT
void C_ZN16QAbstractSpinBox11setReadOnlyEb(void *this_, bool r) {
  ((QAbstractSpinBox*)this_)->setReadOnly(r);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:102
// [1] bool isReadOnly()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QAbstractSpinBox10isReadOnlyEv(void *this_) {
  return (bool)((QAbstractSpinBox*)this_)->isReadOnly();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:104
// [-2] void setKeyboardTracking(bool)
extern "C" Q_DECL_EXPORT
void C_ZN16QAbstractSpinBox19setKeyboardTrackingEb(void *this_, bool kt) {
  ((QAbstractSpinBox*)this_)->setKeyboardTracking(kt);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:105
// [1] bool keyboardTracking()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QAbstractSpinBox16keyboardTrackingEv(void *this_) {
  return (bool)((QAbstractSpinBox*)this_)->keyboardTracking();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:107
// [-2] void setAlignment(Qt::Alignment)
extern "C" Q_DECL_EXPORT
void C_ZN16QAbstractSpinBox12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QFlags<Qt::AlignmentFlag> flag) {
  ((QAbstractSpinBox*)this_)->setAlignment(flag);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:108
// [4] Qt::Alignment alignment()
extern "C" Q_DECL_EXPORT
Qt::Alignment C_ZNK16QAbstractSpinBox9alignmentEv(void *this_) {
  return (Qt::Alignment)((QAbstractSpinBox*)this_)->alignment();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:110
// [-2] void setFrame(bool)
extern "C" Q_DECL_EXPORT
void C_ZN16QAbstractSpinBox8setFrameEb(void *this_, bool arg0) {
  ((QAbstractSpinBox*)this_)->setFrame(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:111
// [1] bool hasFrame()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QAbstractSpinBox8hasFrameEv(void *this_) {
  return (bool)((QAbstractSpinBox*)this_)->hasFrame();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:113
// [-2] void setAccelerated(bool)
extern "C" Q_DECL_EXPORT
void C_ZN16QAbstractSpinBox14setAcceleratedEb(void *this_, bool on) {
  ((QAbstractSpinBox*)this_)->setAccelerated(on);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:114
// [1] bool isAccelerated()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QAbstractSpinBox13isAcceleratedEv(void *this_) {
  return (bool)((QAbstractSpinBox*)this_)->isAccelerated();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:116
// [-2] void setGroupSeparatorShown(bool)
extern "C" Q_DECL_EXPORT
void C_ZN16QAbstractSpinBox22setGroupSeparatorShownEb(void *this_, bool shown) {
  ((QAbstractSpinBox*)this_)->setGroupSeparatorShown(shown);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:117
// [1] bool isGroupSeparatorShown()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QAbstractSpinBox21isGroupSeparatorShownEv(void *this_) {
  return (bool)((QAbstractSpinBox*)this_)->isGroupSeparatorShown();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:119
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QAbstractSpinBox8sizeHintEv(void *this_) {
  auto rv = ((QAbstractSpinBox*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:120
// [8] QSize minimumSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QAbstractSpinBox15minimumSizeHintEv(void *this_) {
  auto rv = ((QAbstractSpinBox*)this_)->minimumSizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:121
// [-2] void interpretText()
extern "C" Q_DECL_EXPORT
void C_ZN16QAbstractSpinBox13interpretTextEv(void *this_) {
  ((QAbstractSpinBox*)this_)->interpretText();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:122
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN16QAbstractSpinBox5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QAbstractSpinBox*)this_)->event(event);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:124
// [16] QVariant inputMethodQuery(Qt::InputMethodQuery)
extern "C" Q_DECL_EXPORT
void* C_ZNK16QAbstractSpinBox16inputMethodQueryEN2Qt16InputMethodQueryE(void *this_, Qt::InputMethodQuery arg0) {
  auto rv = ((QAbstractSpinBox*)this_)->inputMethodQuery(arg0);
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:126
// [4] QValidator::State validate(QString &, int &)
extern "C" Q_DECL_EXPORT
QValidator::State C_ZNK16QAbstractSpinBox8validateER7QStringRi(void *this_, QString* input, int & pos) {
  return (QValidator::State)((QAbstractSpinBox*)this_)->validate(*input, pos);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:127
// [-2] void fixup(QString &)
extern "C" Q_DECL_EXPORT
void C_ZNK16QAbstractSpinBox5fixupER7QString(void *this_, QString* input) {
  ((QAbstractSpinBox*)this_)->fixup(*input);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:129
// [-2] void stepBy(int)
extern "C" Q_DECL_EXPORT
void C_ZN16QAbstractSpinBox6stepByEi(void *this_, int steps) {
  ((QAbstractSpinBox*)this_)->stepBy(steps);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:131
// [-2] void stepUp()
extern "C" Q_DECL_EXPORT
void C_ZN16QAbstractSpinBox6stepUpEv(void *this_) {
  ((QAbstractSpinBox*)this_)->stepUp();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:132
// [-2] void stepDown()
extern "C" Q_DECL_EXPORT
void C_ZN16QAbstractSpinBox8stepDownEv(void *this_) {
  ((QAbstractSpinBox*)this_)->stepDown();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:133
// [-2] void selectAll()
extern "C" Q_DECL_EXPORT
void C_ZN16QAbstractSpinBox9selectAllEv(void *this_) {
  ((QAbstractSpinBox*)this_)->selectAll();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:134
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN16QAbstractSpinBox5clearEv(void *this_) {
  ((QAbstractSpinBox*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:163
// [-2] void editingFinished()
extern "C" Q_DECL_EXPORT
void C_ZN16QAbstractSpinBox15editingFinishedEv(void *this_) {
  ((QAbstractSpinBox*)this_)->editingFinished();
}

//  main block end
