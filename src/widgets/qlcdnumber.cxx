//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(lcdnumber)
// /usr/include/qt/QtWidgets/qlcdnumber.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qlcdnumber.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QLCDNumber is pure virtual: false
// QLCDNumber has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQLCDNumber_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQLCDNumber_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQLCDNumber_t qt_meta_stringdata_MyQLCDNumber = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQLCDNumber"
  },
  "MyQLCDNumber"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQLCDNumber[] = {
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
class Q_DECL_EXPORT MyQLCDNumber : public QLCDNumber {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QLCDNumber::staticMetaObject,
  qt_meta_stringdata_MyQLCDNumber.data,
  qt_meta_data_MyQLCDNumber,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQLCDNumber.stringdata0))
      return static_cast<void*>(this);
  return QLCDNumber::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QLCDNumber::qt_metacall(_c, _id, _a);
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
  virtual ~MyQLCDNumber() {}
// void QLCDNumber(QWidget *)
MyQLCDNumber(QWidget * parent) : QLCDNumber(parent) {}
// void QLCDNumber(uint, QWidget *)
MyQLCDNumber(uint numDigits, QWidget * parent) : QLCDNumber(numDigits, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QLCDNumber::event(e);
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
    QLCDNumber::paintEvent(arg0);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QLCDNumber_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQLCDNumber* qo = (MyQLCDNumber*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:107
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN10QLCDNumber5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QLCDNumber*)this_)->QLCDNumber::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:108
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QLCDNumber10paintEventEP11QPaintEvent(void *this_, QPaintEvent * arg0) {
  ((QLCDNumber*)this_)->QLCDNumber::paintEvent(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QLCDNumber10metaObjectEv(void *this_) {
  return (void*)((QLCDNumber*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QLCDNumber11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QLCDNumber*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN10QLCDNumber11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QLCDNumber*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QLCDNumber2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QLCDNumber::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QLCDNumber6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QLCDNumber::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:62
// [-2] void QLCDNumber(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QLCDNumberC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQLCDNumber*)(0);
  return  new MyQLCDNumber(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:63
// [-2] void QLCDNumber(uint, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QLCDNumberC2EjP7QWidget(uint numDigits, QWidget * parent) {
  auto _nilp = (MyQLCDNumber*)(0);
  return  new MyQLCDNumber(numDigits, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:64
// [-2] void ~QLCDNumber()
extern "C" Q_DECL_EXPORT
void C_ZN10QLCDNumberD2Ev(void *this_) {
  delete (QLCDNumber*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:75
// [1] bool smallDecimalPoint()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QLCDNumber17smallDecimalPointEv(void *this_) {
  return (bool)((QLCDNumber*)this_)->smallDecimalPoint();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:76
// [4] int digitCount()
extern "C" Q_DECL_EXPORT
int C_ZNK10QLCDNumber10digitCountEv(void *this_) {
  return (int)((QLCDNumber*)this_)->digitCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:77
// [-2] void setDigitCount(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QLCDNumber13setDigitCountEi(void *this_, int nDigits) {
  ((QLCDNumber*)this_)->setDigitCount(nDigits);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:79
// [1] bool checkOverflow(double)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QLCDNumber13checkOverflowEd(void *this_, double num) {
  return (bool)((QLCDNumber*)this_)->checkOverflow(num);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:80
// [1] bool checkOverflow(int)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QLCDNumber13checkOverflowEi(void *this_, int num) {
  return (bool)((QLCDNumber*)this_)->checkOverflow(num);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:82
// [4] QLCDNumber::Mode mode()
extern "C" Q_DECL_EXPORT
QLCDNumber::Mode C_ZNK10QLCDNumber4modeEv(void *this_) {
  return (QLCDNumber::Mode)((QLCDNumber*)this_)->mode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:83
// [-2] void setMode(QLCDNumber::Mode)
extern "C" Q_DECL_EXPORT
void C_ZN10QLCDNumber7setModeENS_4ModeE(void *this_, QLCDNumber::Mode arg0) {
  ((QLCDNumber*)this_)->setMode(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:85
// [4] QLCDNumber::SegmentStyle segmentStyle()
extern "C" Q_DECL_EXPORT
QLCDNumber::SegmentStyle C_ZNK10QLCDNumber12segmentStyleEv(void *this_) {
  return (QLCDNumber::SegmentStyle)((QLCDNumber*)this_)->segmentStyle();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:86
// [-2] void setSegmentStyle(QLCDNumber::SegmentStyle)
extern "C" Q_DECL_EXPORT
void C_ZN10QLCDNumber15setSegmentStyleENS_12SegmentStyleE(void *this_, QLCDNumber::SegmentStyle arg0) {
  ((QLCDNumber*)this_)->setSegmentStyle(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:88
// [8] double value()
extern "C" Q_DECL_EXPORT
double C_ZNK10QLCDNumber5valueEv(void *this_) {
  return (double)((QLCDNumber*)this_)->value();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:89
// [4] int intValue()
extern "C" Q_DECL_EXPORT
int C_ZNK10QLCDNumber8intValueEv(void *this_) {
  return (int)((QLCDNumber*)this_)->intValue();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:91
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QLCDNumber8sizeHintEv(void *this_) {
  auto rv = ((QLCDNumber*)this_)->sizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:94
// [-2] void display(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN10QLCDNumber7displayERK7QString(void *this_, QString* str) {
  ((QLCDNumber*)this_)->display(*str);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:95
// [-2] void display(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QLCDNumber7displayEi(void *this_, int num) {
  ((QLCDNumber*)this_)->display(num);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:96
// [-2] void display(double)
extern "C" Q_DECL_EXPORT
void C_ZN10QLCDNumber7displayEd(void *this_, double num) {
  ((QLCDNumber*)this_)->display(num);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:97
// [-2] void setHexMode()
extern "C" Q_DECL_EXPORT
void C_ZN10QLCDNumber10setHexModeEv(void *this_) {
  ((QLCDNumber*)this_)->setHexMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:98
// [-2] void setDecMode()
extern "C" Q_DECL_EXPORT
void C_ZN10QLCDNumber10setDecModeEv(void *this_) {
  ((QLCDNumber*)this_)->setDecMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:99
// [-2] void setOctMode()
extern "C" Q_DECL_EXPORT
void C_ZN10QLCDNumber10setOctModeEv(void *this_) {
  ((QLCDNumber*)this_)->setOctMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:100
// [-2] void setBinMode()
extern "C" Q_DECL_EXPORT
void C_ZN10QLCDNumber10setBinModeEv(void *this_) {
  ((QLCDNumber*)this_)->setBinMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:101
// [-2] void setSmallDecimalPoint(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QLCDNumber20setSmallDecimalPointEb(void *this_, bool arg0) {
  ((QLCDNumber*)this_)->setSmallDecimalPoint(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:104
// [-2] void overflow()
extern "C" Q_DECL_EXPORT
void C_ZN10QLCDNumber8overflowEv(void *this_) {
  ((QLCDNumber*)this_)->overflow();
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(lcdnumber)
#endif // #ifndef QT_MINIMAL
//  footer block end
