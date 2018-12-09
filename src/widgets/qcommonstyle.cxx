//  header block begin

// /usr/include/qt/QtWidgets/qcommonstyle.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcommonstyle.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QCommonStyle is pure virtual: false
// QCommonStyle has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQCommonStyle_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCommonStyle_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCommonStyle_t qt_meta_stringdata_MyQCommonStyle = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQCommonStyle"
  },
  "MyQCommonStyle"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCommonStyle[] = {
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
class Q_DECL_EXPORT MyQCommonStyle : public QCommonStyle {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QCommonStyle::staticMetaObject,
  qt_meta_stringdata_MyQCommonStyle.data,
  qt_meta_data_MyQCommonStyle,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQCommonStyle.stringdata0))
      return static_cast<void*>(this);
  return QCommonStyle::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QCommonStyle::qt_metacall(_c, _id, _a);
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
  virtual ~MyQCommonStyle() {}
// void QCommonStyle()
MyQCommonStyle() : QCommonStyle() {}
};

extern "C" Q_DECL_EXPORT
void* C_QCommonStyle_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQCommonStyle* qo = (MyQCommonStyle*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:52
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QCommonStyle10metaObjectEv(void *this_) {
  return (void*)((QCommonStyle*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:52
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QCommonStyle11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QCommonStyle*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:52
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN12QCommonStyle11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QCommonStyle*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:52
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QCommonStyle2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCommonStyle::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:52
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QCommonStyle6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCommonStyle::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:55
// [-2] void QCommonStyle()
extern "C" Q_DECL_EXPORT
void* C_ZN12QCommonStyleC2Ev() {
  return  new MyQCommonStyle();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:56
// [-2] void ~QCommonStyle()
extern "C" Q_DECL_EXPORT
void C_ZN12QCommonStyleD2Ev(void *this_) {
  delete (QCommonStyle*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:58
// [-2] void drawPrimitive(QStyle::PrimitiveElement, const QStyleOption *, QPainter *, const QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZNK12QCommonStyle13drawPrimitiveEN6QStyle16PrimitiveElementEPK12QStyleOptionP8QPainterPK7QWidget(void *this_, QStyle::PrimitiveElement pe, const QStyleOption * opt, QPainter * p, const QWidget * w) {
  ((QCommonStyle*)this_)->drawPrimitive(pe, opt, p, w);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:60
// [-2] void drawControl(QStyle::ControlElement, const QStyleOption *, QPainter *, const QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZNK12QCommonStyle11drawControlEN6QStyle14ControlElementEPK12QStyleOptionP8QPainterPK7QWidget(void *this_, QStyle::ControlElement element, const QStyleOption * opt, QPainter * p, const QWidget * w) {
  ((QCommonStyle*)this_)->drawControl(element, opt, p, w);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:62
// [16] QRect subElementRect(QStyle::SubElement, const QStyleOption *, const QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZNK12QCommonStyle14subElementRectEN6QStyle10SubElementEPK12QStyleOptionPK7QWidget(void *this_, QStyle::SubElement r, const QStyleOption * opt, const QWidget * widget) {
  auto rv = ((QCommonStyle*)this_)->subElementRect(r, opt, widget);
return new QRect(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:63
// [-2] void drawComplexControl(QStyle::ComplexControl, const QStyleOptionComplex *, QPainter *, const QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZNK12QCommonStyle18drawComplexControlEN6QStyle14ComplexControlEPK19QStyleOptionComplexP8QPainterPK7QWidget(void *this_, QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QPainter * p, const QWidget * w) {
  ((QCommonStyle*)this_)->drawComplexControl(cc, opt, p, w);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:65
// [4] QStyle::SubControl hitTestComplexControl(QStyle::ComplexControl, const QStyleOptionComplex *, const QPoint &, const QWidget *)
extern "C" Q_DECL_EXPORT
QStyle::SubControl C_ZNK12QCommonStyle21hitTestComplexControlEN6QStyle14ComplexControlEPK19QStyleOptionComplexRK6QPointPK7QWidget(void *this_, QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QPoint* pt, const QWidget * w) {
  return (QStyle::SubControl)((QCommonStyle*)this_)->hitTestComplexControl(cc, opt, *pt, w);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:67
// [16] QRect subControlRect(QStyle::ComplexControl, const QStyleOptionComplex *, QStyle::SubControl, const QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZNK12QCommonStyle14subControlRectEN6QStyle14ComplexControlEPK19QStyleOptionComplexNS0_10SubControlEPK7QWidget(void *this_, QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QStyle::SubControl sc, const QWidget * w) {
  auto rv = ((QCommonStyle*)this_)->subControlRect(cc, opt, sc, w);
return new QRect(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:69
// [8] QSize sizeFromContents(QStyle::ContentsType, const QStyleOption *, const QSize &, const QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZNK12QCommonStyle16sizeFromContentsEN6QStyle12ContentsTypeEPK12QStyleOptionRK5QSizePK7QWidget(void *this_, QStyle::ContentsType ct, const QStyleOption * opt, QSize* contentsSize, const QWidget * widget) {
  auto rv = ((QCommonStyle*)this_)->sizeFromContents(ct, opt, *contentsSize, widget);
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:72
// [4] int pixelMetric(QStyle::PixelMetric, const QStyleOption *, const QWidget *)
extern "C" Q_DECL_EXPORT
int C_ZNK12QCommonStyle11pixelMetricEN6QStyle11PixelMetricEPK12QStyleOptionPK7QWidget(void *this_, QStyle::PixelMetric m, const QStyleOption * opt, const QWidget * widget) {
  return (int)((QCommonStyle*)this_)->pixelMetric(m, opt, widget);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:74
// [4] int styleHint(QStyle::StyleHint, const QStyleOption *, const QWidget *, QStyleHintReturn *)
extern "C" Q_DECL_EXPORT
int C_ZNK12QCommonStyle9styleHintEN6QStyle9StyleHintEPK12QStyleOptionPK7QWidgetP16QStyleHintReturn(void *this_, QStyle::StyleHint sh, const QStyleOption * opt, const QWidget * w, QStyleHintReturn * shret) {
  return (int)((QCommonStyle*)this_)->styleHint(sh, opt, w, shret);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:77
// [8] QIcon standardIcon(QStyle::StandardPixmap, const QStyleOption *, const QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZNK12QCommonStyle12standardIconEN6QStyle14StandardPixmapEPK12QStyleOptionPK7QWidget(void *this_, QStyle::StandardPixmap standardIcon, const QStyleOption * opt, const QWidget * widget) {
  auto rv = ((QCommonStyle*)this_)->standardIcon(standardIcon, opt, widget);
return new QIcon(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:79
// [32] QPixmap standardPixmap(QStyle::StandardPixmap, const QStyleOption *, const QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZNK12QCommonStyle14standardPixmapEN6QStyle14StandardPixmapEPK12QStyleOptionPK7QWidget(void *this_, QStyle::StandardPixmap sp, const QStyleOption * opt, const QWidget * widget) {
  auto rv = ((QCommonStyle*)this_)->standardPixmap(sp, opt, widget);
return new QPixmap(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:82
// [32] QPixmap generatedIconPixmap(QIcon::Mode, const QPixmap &, const QStyleOption *)
extern "C" Q_DECL_EXPORT
void* C_ZNK12QCommonStyle19generatedIconPixmapEN5QIcon4ModeERK7QPixmapPK12QStyleOption(void *this_, QIcon::Mode iconMode, QPixmap* pixmap, const QStyleOption * opt) {
  auto rv = ((QCommonStyle*)this_)->generatedIconPixmap(iconMode, *pixmap, opt);
return new QPixmap(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:84
// [4] int layoutSpacing(QSizePolicy::ControlType, QSizePolicy::ControlType, Qt::Orientation, const QStyleOption *, const QWidget *)
extern "C" Q_DECL_EXPORT
int C_ZNK12QCommonStyle13layoutSpacingEN11QSizePolicy11ControlTypeES1_N2Qt11OrientationEPK12QStyleOptionPK7QWidget(void *this_, QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption * option, const QWidget * widget) {
  return (int)((QCommonStyle*)this_)->layoutSpacing(control1, control2, orientation, option, widget);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:88
// [-2] void polish(QPalette &)
extern "C" Q_DECL_EXPORT
void C_ZN12QCommonStyle6polishER8QPalette(void *this_, QPalette* arg0) {
  ((QCommonStyle*)this_)->polish(*arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:89
// [-2] void polish(QApplication *)
extern "C" Q_DECL_EXPORT
void C_ZN12QCommonStyle6polishEP12QApplication(void *this_, QApplication * app) {
  ((QCommonStyle*)this_)->polish(app);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:90
// [-2] void polish(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN12QCommonStyle6polishEP7QWidget(void *this_, QWidget * widget) {
  ((QCommonStyle*)this_)->polish(widget);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:91
// [-2] void unpolish(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN12QCommonStyle8unpolishEP7QWidget(void *this_, QWidget * widget) {
  ((QCommonStyle*)this_)->unpolish(widget);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:92
// [-2] void unpolish(QApplication *)
extern "C" Q_DECL_EXPORT
void C_ZN12QCommonStyle8unpolishEP12QApplication(void *this_, QApplication * application) {
  ((QCommonStyle*)this_)->unpolish(application);
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
