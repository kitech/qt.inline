//  header block begin

#ifndef QT_MINIMAL
#if QT_CONFIG(progressbar)
// /usr/include/qt/QtWidgets/qprogressbar.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qprogressbar.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QProgressBar is pure virtual: false
// QProgressBar has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQProgressBar_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQProgressBar_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQProgressBar_t qt_meta_stringdata_MyQProgressBar = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQProgressBar"
  },
  "MyQProgressBar"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQProgressBar[] = {
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
class Q_DECL_EXPORT MyQProgressBar : public QProgressBar {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QProgressBar::staticMetaObject,
  qt_meta_stringdata_MyQProgressBar.data,
  qt_meta_data_MyQProgressBar,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQProgressBar.stringdata0))
      return static_cast<void*>(this);
  return QProgressBar::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QProgressBar::qt_metacall(_c, _id, _a);
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
  virtual ~MyQProgressBar() {}
// void QProgressBar(QWidget *)
MyQProgressBar(QWidget * parent) : QProgressBar(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QProgressBar::event(e);
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
    QProgressBar::paintEvent(arg0);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QProgressBar_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQProgressBar* qo = (MyQProgressBar*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:112
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN12QProgressBar5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QProgressBar*)this_)->QProgressBar::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:113
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QProgressBar10paintEventEP11QPaintEvent(void *this_, QPaintEvent * arg0) {
  ((QProgressBar*)this_)->QProgressBar::paintEvent(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QProgressBar10metaObjectEv(void *this_) {
  return (void*)((QProgressBar*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QProgressBar11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QProgressBar*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN12QProgressBar11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QProgressBar*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QProgressBar2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QProgressBar::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QProgressBar6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QProgressBar::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:71
// [-2] void QProgressBar(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QProgressBarC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQProgressBar*)(0);
  return  new MyQProgressBar(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:72
// [-2] void ~QProgressBar()
extern "C" Q_DECL_EXPORT
void C_ZN12QProgressBarD2Ev(void *this_) {
  delete (QProgressBar*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:74
// [4] int minimum()
extern "C" Q_DECL_EXPORT
int C_ZNK12QProgressBar7minimumEv(void *this_) {
  return (int)((QProgressBar*)this_)->minimum();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:75
// [4] int maximum()
extern "C" Q_DECL_EXPORT
int C_ZNK12QProgressBar7maximumEv(void *this_) {
  return (int)((QProgressBar*)this_)->maximum();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:77
// [4] int value()
extern "C" Q_DECL_EXPORT
int C_ZNK12QProgressBar5valueEv(void *this_) {
  return (int)((QProgressBar*)this_)->value();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:79
// [8] QString text()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QProgressBar4textEv(void *this_) {
  auto rv = ((QProgressBar*)this_)->text();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:80
// [-2] void setTextVisible(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QProgressBar14setTextVisibleEb(void *this_, bool visible) {
  ((QProgressBar*)this_)->setTextVisible(visible);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:81
// [1] bool isTextVisible()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QProgressBar13isTextVisibleEv(void *this_) {
  return (bool)((QProgressBar*)this_)->isTextVisible();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:83
// [4] Qt::Alignment alignment()
extern "C" Q_DECL_EXPORT
Qt::Alignment C_ZNK12QProgressBar9alignmentEv(void *this_) {
  return (Qt::Alignment)((QProgressBar*)this_)->alignment();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:84
// [-2] void setAlignment(Qt::Alignment)
extern "C" Q_DECL_EXPORT
void C_ZN12QProgressBar12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QFlags<Qt::AlignmentFlag> alignment) {
  ((QProgressBar*)this_)->setAlignment(alignment);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:86
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QProgressBar8sizeHintEv(void *this_) {
  auto rv = ((QProgressBar*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:87
// [8] QSize minimumSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QProgressBar15minimumSizeHintEv(void *this_) {
  auto rv = ((QProgressBar*)this_)->minimumSizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:89
// [4] Qt::Orientation orientation()
extern "C" Q_DECL_EXPORT
Qt::Orientation C_ZNK12QProgressBar11orientationEv(void *this_) {
  return (Qt::Orientation)((QProgressBar*)this_)->orientation();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:91
// [-2] void setInvertedAppearance(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QProgressBar21setInvertedAppearanceEb(void *this_, bool invert) {
  ((QProgressBar*)this_)->setInvertedAppearance(invert);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:92
// [1] bool invertedAppearance()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QProgressBar18invertedAppearanceEv(void *this_) {
  return (bool)((QProgressBar*)this_)->invertedAppearance();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:93
// [-2] void setTextDirection(QProgressBar::Direction)
extern "C" Q_DECL_EXPORT
void C_ZN12QProgressBar16setTextDirectionENS_9DirectionE(void *this_, QProgressBar::Direction textDirection) {
  ((QProgressBar*)this_)->setTextDirection(textDirection);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:94
// [4] QProgressBar::Direction textDirection()
extern "C" Q_DECL_EXPORT
QProgressBar::Direction C_ZNK12QProgressBar13textDirectionEv(void *this_) {
  return (QProgressBar::Direction)((QProgressBar*)this_)->textDirection();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:96
// [-2] void setFormat(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN12QProgressBar9setFormatERK7QString(void *this_, QString* format) {
  ((QProgressBar*)this_)->setFormat(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:97
// [-2] void resetFormat()
extern "C" Q_DECL_EXPORT
void C_ZN12QProgressBar11resetFormatEv(void *this_) {
  ((QProgressBar*)this_)->resetFormat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:98
// [8] QString format()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QProgressBar6formatEv(void *this_) {
  auto rv = ((QProgressBar*)this_)->format();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:101
// [-2] void reset()
extern "C" Q_DECL_EXPORT
void C_ZN12QProgressBar5resetEv(void *this_) {
  ((QProgressBar*)this_)->reset();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:102
// [-2] void setRange(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN12QProgressBar8setRangeEii(void *this_, int minimum, int maximum) {
  ((QProgressBar*)this_)->setRange(minimum, maximum);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:103
// [-2] void setMinimum(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QProgressBar10setMinimumEi(void *this_, int minimum) {
  ((QProgressBar*)this_)->setMinimum(minimum);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:104
// [-2] void setMaximum(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QProgressBar10setMaximumEi(void *this_, int maximum) {
  ((QProgressBar*)this_)->setMaximum(maximum);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:105
// [-2] void setValue(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QProgressBar8setValueEi(void *this_, int value) {
  ((QProgressBar*)this_)->setValue(value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:106
// [-2] void setOrientation(Qt::Orientation)
extern "C" Q_DECL_EXPORT
void C_ZN12QProgressBar14setOrientationEN2Qt11OrientationE(void *this_, Qt::Orientation arg0) {
  ((QProgressBar*)this_)->setOrientation(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:109
// [-2] void valueChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QProgressBar12valueChangedEi(void *this_, int value) {
  ((QProgressBar*)this_)->valueChanged(value);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(progressbar)
#endif // #ifndef QT_MINIMAL
//  footer block end
