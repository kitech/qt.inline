//  header block begin

// /usr/include/qt/QtWidgets/qstyle.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyle.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyle is pure virtual: true true
// QStyle has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStyle_t {
  QByteArrayData data[1];
  char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyle_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyle_t qt_meta_stringdata_MyQStyle = {
   {
  QT_MOC_LITERAL(0, 0, 8), // "MyQStyle"
  },
  "MyQStyle"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyle[] = {
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
class Q_DECL_EXPORT MyQStyle : public QStyle {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QStyle::staticMetaObject,
  qt_meta_stringdata_MyQStyle.data,
  qt_meta_data_MyQStyle,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQStyle.stringdata0))
      return static_cast<void*>(this);
  return QStyle::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QStyle::qt_metacall(_c, _id, _a);
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
  virtual ~MyQStyle() {}
// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void drawPrimitive(QStyle::PrimitiveElement, const QStyleOption *, QPainter *, const QWidget *)
  virtual void drawPrimitive(QStyle::PrimitiveElement pe, const QStyleOption * opt, QPainter * p, const QWidget * w) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"drawPrimitive", &handled, 4, (uint64_t)pe, (uint64_t)opt, (uint64_t)p, (uint64_t)w, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QStyle::drawPrimitive(pe, opt, p, w);
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void drawControl(QStyle::ControlElement, const QStyleOption *, QPainter *, const QWidget *)
  virtual void drawControl(QStyle::ControlElement element, const QStyleOption * opt, QPainter * p, const QWidget * w) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"drawControl", &handled, 4, (uint64_t)element, (uint64_t)opt, (uint64_t)p, (uint64_t)w, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QStyle::drawControl(element, opt, p, w);
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [16] QRect subElementRect(QStyle::SubElement, const QStyleOption *, const QWidget *)
  virtual QRect subElementRect(QStyle::SubElement subElement, const QStyleOption * option, const QWidget * widget) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"subElementRect", &handled, 3, (uint64_t)subElement, (uint64_t)option, (uint64_t)widget, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QRect){};}
    auto prv = (QRect*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QRect
    } else {
    return (QRect){};
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void drawComplexControl(QStyle::ComplexControl, const QStyleOptionComplex *, QPainter *, const QWidget *)
  virtual void drawComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QPainter * p, const QWidget * widget) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"drawComplexControl", &handled, 4, (uint64_t)cc, (uint64_t)opt, (uint64_t)p, (uint64_t)widget, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QStyle::drawComplexControl(cc, opt, p, widget);
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] QStyle::SubControl hitTestComplexControl(QStyle::ComplexControl, const QStyleOptionComplex *, const QPoint &, const QWidget *)
  virtual QStyle::SubControl hitTestComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex * opt, const QPoint & pt, const QWidget * widget) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"hitTestComplexControl", &handled, 4, (uint64_t)cc, (uint64_t)opt, (uint64_t)&pt, (uint64_t)widget, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QStyle::SubControl)(int)(irv);
      // Enum Enum QStyle::SubControl
    } else {
    return (QStyle::SubControl){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [16] QRect subControlRect(QStyle::ComplexControl, const QStyleOptionComplex *, QStyle::SubControl, const QWidget *)
  virtual QRect subControlRect(QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QStyle::SubControl sc, const QWidget * widget) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"subControlRect", &handled, 4, (uint64_t)cc, (uint64_t)opt, (uint64_t)sc, (uint64_t)widget, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QRect){};}
    auto prv = (QRect*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QRect
    } else {
    return (QRect){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] int pixelMetric(QStyle::PixelMetric, const QStyleOption *, const QWidget *)
  virtual int pixelMetric(QStyle::PixelMetric metric, const QStyleOption * option, const QWidget * widget) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"pixelMetric", &handled, 3, (uint64_t)metric, (uint64_t)option, (uint64_t)widget, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [8] QSize sizeFromContents(QStyle::ContentsType, const QStyleOption *, const QSize &, const QWidget *)
  virtual QSize sizeFromContents(QStyle::ContentsType ct, const QStyleOption * opt, const QSize & contentsSize, const QWidget * w) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sizeFromContents", &handled, 4, (uint64_t)ct, (uint64_t)opt, (uint64_t)&contentsSize, (uint64_t)w, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QSize){};}
    auto prv = (QSize*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QSize
    } else {
    return (QSize){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] int styleHint(QStyle::StyleHint, const QStyleOption *, const QWidget *, QStyleHintReturn *)
  virtual int styleHint(QStyle::StyleHint stylehint, const QStyleOption * opt, const QWidget * widget, QStyleHintReturn * returnData) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"styleHint", &handled, 4, (uint64_t)stylehint, (uint64_t)opt, (uint64_t)widget, (uint64_t)returnData, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [32] QPixmap standardPixmap(QStyle::StandardPixmap, const QStyleOption *, const QWidget *)
  virtual QPixmap standardPixmap(QStyle::StandardPixmap standardPixmap, const QStyleOption * opt, const QWidget * widget) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"standardPixmap", &handled, 3, (uint64_t)standardPixmap, (uint64_t)opt, (uint64_t)widget, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QPixmap){};}
    auto prv = (QPixmap*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QPixmap
    } else {
    return (QPixmap){};
  }
  }

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [8] QIcon standardIcon(QStyle::StandardPixmap, const QStyleOption *, const QWidget *)
  virtual QIcon standardIcon(QStyle::StandardPixmap standardIcon, const QStyleOption * option, const QWidget * widget) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"standardIcon", &handled, 3, (uint64_t)standardIcon, (uint64_t)option, (uint64_t)widget, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QIcon){};}
    auto prv = (QIcon*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QIcon
    } else {
    return (QIcon){};
  }
  }

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [32] QPixmap generatedIconPixmap(QIcon::Mode, const QPixmap &, const QStyleOption *)
  virtual QPixmap generatedIconPixmap(QIcon::Mode iconMode, const QPixmap & pixmap, const QStyleOption * opt) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"generatedIconPixmap", &handled, 3, (uint64_t)iconMode, (uint64_t)&pixmap, (uint64_t)opt, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QPixmap){};}
    auto prv = (QPixmap*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QPixmap
    } else {
    return (QPixmap){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] int layoutSpacing(QSizePolicy::ControlType, QSizePolicy::ControlType, Qt::Orientation, const QStyleOption *, const QWidget *)
  virtual int layoutSpacing(QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption * option, const QWidget * widget) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"layoutSpacing", &handled, 5, (uint64_t)control1, (uint64_t)control2, (uint64_t)orientation, (uint64_t)option, (uint64_t)widget, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// void QStyle()
MyQStyle() : QStyle() {}
};

extern "C" Q_DECL_EXPORT
void* C_QStyle_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQStyle* qo = (MyQStyle*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyle(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:66
// [8] QString tr(const char *, const char *, int) 
// (11)qm156927329 (21)_ZN6QStyle2trEPKcS1_i
//static
/*void qm156927329(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QStyle::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QStyle::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN6QStyleD2Ev(void *this_)*/ {
  delete (QStyle*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyle
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
