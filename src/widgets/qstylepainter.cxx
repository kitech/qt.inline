//  header block begin

// /usr/include/qt/QtWidgets/qstylepainter.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstylepainter.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStylePainter is pure virtual: false false
// QStylePainter has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStylePainter_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStylePainter_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStylePainter_t qt_meta_stringdata_MyQStylePainter = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQStylePainter"
  },
  "MyQStylePainter"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStylePainter[] = {
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
class Q_DECL_EXPORT MyQStylePainter : public QStylePainter {
public:
  virtual ~MyQStylePainter() {}
// void QStylePainter()
MyQStylePainter() : QStylePainter() {}
// void QStylePainter(QWidget *)
MyQStylePainter(QWidget * w) : QStylePainter(w) {}
// void QStylePainter(QPaintDevice *, QWidget *)
MyQStylePainter(QPaintDevice * pd, QWidget * w) : QStylePainter(pd, w) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstylepainter(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylepainter.h:54
// [-2] void QStylePainter() 
// (12)qm3572436832 (22)_ZN13QStylePainterC2Ev
/*void* qm3572436832()*/{
  ;
  this_ =  new QStylePainter();
  this_ =  new MyQStylePainter();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylepainter.h:55
// [-2] void QStylePainter(QWidget *) 
// (11)qm271615742 (30)_ZN13QStylePainterC2EP7QWidget
/*void* qm271615742(QWidget * w)*/{
  QWidget * w = *(QWidget **)this_;
  this_ =  new QStylePainter(w);
  this_ =  new MyQStylePainter(w);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylepainter.h:56
// [-2] void QStylePainter(QPaintDevice *, QWidget *) 
// (12)qm2698646986 (45)_ZN13QStylePainterC2EP12QPaintDeviceP7QWidget
/*void* qm2698646986(QPaintDevice * pd, QWidget * w)*/{
  QPaintDevice * pd = *(QPaintDevice **)this_; QWidget * w = *(QWidget **)this_;
  this_ =  new QStylePainter(pd, w);
  this_ =  new MyQStylePainter(pd, w);
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylepainter.h:57
// [1] bool begin(QWidget *) 
// (12)qm1833125175 (34)_ZN13QStylePainter5beginEP7QWidget
//static
/*void qm1833125175(QWidget * w)*/ {
  QWidget * w = *(QWidget **)this_;
  (void) ((QStylePainter*)this_)->begin(w);
   auto xptr = (bool (QStylePainter::*)(QWidget*) ) &QStylePainter::begin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylepainter.h:58
// [1] bool begin(QPaintDevice *, QWidget *) 
// (12)qm1369711867 (49)_ZN13QStylePainter5beginEP12QPaintDeviceP7QWidget
//static
/*void qm1369711867(QPaintDevice * pd, QWidget * w)*/ {
  QPaintDevice * pd = *(QPaintDevice **)this_; QWidget * w = *(QWidget **)this_;
  (void) ((QStylePainter*)this_)->begin(pd, w);
   auto xptr = (bool (QStylePainter::*)(QPaintDevice*, QWidget*) ) &QStylePainter::begin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylepainter.h:64
// [-2] void drawPrimitive(QStyle::PrimitiveElement, const QStyleOption &) 
// (12)qm2349083681 (77)_ZN13QStylePainter13drawPrimitiveEN6QStyle16PrimitiveElementERK12QStyleOption
//static
/*void qm2349083681(QStyle::PrimitiveElement pe, const QStyleOption & opt)*/ {
  QStyle::PrimitiveElement pe = *(QStyle::PrimitiveElement*)this_; const QStyleOption & opt = *(const QStyleOption *)this_;
  (void) ((QStylePainter*)this_)->drawPrimitive(pe, opt);
   auto xptr = (void (QStylePainter::*)(QStyle::PrimitiveElement, QStyleOption const&) ) &QStylePainter::drawPrimitive;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylepainter.h:65
// [-2] void drawControl(QStyle::ControlElement, const QStyleOption &) 
// (12)qm3291979215 (73)_ZN13QStylePainter11drawControlEN6QStyle14ControlElementERK12QStyleOption
//static
/*void qm3291979215(QStyle::ControlElement ce, const QStyleOption & opt)*/ {
  QStyle::ControlElement ce = *(QStyle::ControlElement*)this_; const QStyleOption & opt = *(const QStyleOption *)this_;
  (void) ((QStylePainter*)this_)->drawControl(ce, opt);
   auto xptr = (void (QStylePainter::*)(QStyle::ControlElement, QStyleOption const&) ) &QStylePainter::drawControl;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylepainter.h:66
// [-2] void drawComplexControl(QStyle::ComplexControl, const QStyleOptionComplex &) 
// (12)qm2325068196 (87)_ZN13QStylePainter18drawComplexControlEN6QStyle14ComplexControlERK19QStyleOptionComplex
//static
/*void qm2325068196(QStyle::ComplexControl cc, const QStyleOptionComplex & opt)*/ {
  QStyle::ComplexControl cc = *(QStyle::ComplexControl*)this_; const QStyleOptionComplex & opt = *(const QStyleOptionComplex *)this_;
  (void) ((QStylePainter*)this_)->drawComplexControl(cc, opt);
   auto xptr = (void (QStylePainter::*)(QStyle::ComplexControl, QStyleOptionComplex const&) ) &QStylePainter::drawComplexControl;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylepainter.h:67
// [-2] void drawItemText(const QRect &, int, const QPalette &, bool, const QString &, QPalette::ColorRole) 
// (12)qm2350322295 (79)_ZN13QStylePainter12drawItemTextERK5QRectiRK8QPalettebRK7QStringNS3_9ColorRoleE
//static
/*void qm2350322295(const QRect & r, int flags, const QPalette & pal, bool enabled, const QString & text, QPalette::ColorRole textRole)*/ {
  const QRect & r = *(const QRect *)this_; int flags = *(int*)this_; const QPalette & pal = *(const QPalette *)this_; bool enabled = *(bool*)this_; const QString & text = *(const QString *)this_; QPalette::ColorRole textRole = *(QPalette::ColorRole*)this_;
  (void) ((QStylePainter*)this_)->drawItemText(r, flags, pal, enabled, text, textRole);
   auto xptr = (void (QStylePainter::*)(QRect const&, int, QPalette const&, bool, QString const&, QPalette::ColorRole) ) &QStylePainter::drawItemText;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylepainter.h:69
// [-2] void drawItemPixmap(const QRect &, int, const QPixmap &) 
// (12)qm1452556741 (54)_ZN13QStylePainter14drawItemPixmapERK5QRectiRK7QPixmap
//static
/*void qm1452556741(const QRect & r, int flags, const QPixmap & pixmap)*/ {
  const QRect & r = *(const QRect *)this_; int flags = *(int*)this_; const QPixmap & pixmap = *(const QPixmap *)this_;
  (void) ((QStylePainter*)this_)->drawItemPixmap(r, flags, pixmap);
   auto xptr = (void (QStylePainter::*)(QRect const&, int, QPixmap const&) ) &QStylePainter::drawItemPixmap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylepainter.h:70
// [8] QStyle * style() const
// (12)qm1489094559 (27)_ZNK13QStylePainter5styleEv
//static
/*void qm1489094559()*/ {
  ;
  (void) ((QStylePainter*)this_)->style();
   auto xptr = (QStyle * (QStylePainter::*)() const ) &QStylePainter::style;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN13QStylePainterD2Ev(void *this_)*/ {
  delete (QStylePainter*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstylepainter
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
