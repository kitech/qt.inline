//  header block begin

// /usr/include/qt/QtGui/qpalette.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpalette.h>
#include <QtGui>
#include "callback_inherit.h"

// QPalette is pure virtual: false false
// QPalette has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQPalette_t {
  QByteArrayData data[1];
  char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQPalette_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQPalette_t qt_meta_stringdata_MyQPalette = {
   {
  QT_MOC_LITERAL(0, 0, 10), // "MyQPalette"
  },
  "MyQPalette"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQPalette[] = {
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
class Q_DECL_EXPORT MyQPalette : public QPalette {
public:
  virtual ~MyQPalette() {}
// void QPalette()
MyQPalette() : QPalette() {}
// void QPalette(const QColor &)
MyQPalette(const QColor & button) : QPalette(button) {}
// void QPalette(Qt::GlobalColor)
MyQPalette(Qt::GlobalColor button) : QPalette(button) {}
// void QPalette(const QColor &, const QColor &)
MyQPalette(const QColor & button, const QColor & window) : QPalette(button, window) {}
// void QPalette(const QBrush &, const QBrush &, const QBrush &, const QBrush &, const QBrush &, const QBrush &, const QBrush &, const QBrush &, const QBrush &)
MyQPalette(const QBrush & windowText, const QBrush & button, const QBrush & light, const QBrush & dark, const QBrush & mid, const QBrush & text, const QBrush & bright_text, const QBrush & base, const QBrush & window) : QPalette(windowText, button, light, dark, mid, text, bright_text, base, window) {}
// void QPalette(const QColor &, const QColor &, const QColor &, const QColor &, const QColor &, const QColor &, const QColor &)
MyQPalette(const QColor & windowText, const QColor & window, const QColor & light, const QColor & dark, const QColor & mid, const QColor & text, const QColor & base) : QPalette(windowText, window, light, dark, mid, text, base) {}
// void QPalette(const QPalette &)
MyQPalette(const QPalette & palette) : QPalette(palette) {}
// void QPalette(QPalette &&)
MyQPalette(QPalette && other) : QPalette(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qpalette(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:70
// [-2] void QPalette(QPalette &&) 
// (12)qm2925666921 (18)_ZN8QPaletteC2EOS_
/*void* qm2925666921(QPalette && other)*/{
  QPalette && other =  static_cast<QPalette &&>(*(QPalette *)this_);
  this_ =  new QPalette(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:73
// [16] QPalette & operator=(QPalette &&) 
// (12)qm1079302313 (18)_ZN8QPaletteaSEOS_
//static
/*void qm1079302313(QPalette && other)*/ {
  QPalette && other =  static_cast<QPalette &&>(*(QPalette *)this_);
  (void) ((QPalette*)this_)->operator=(other);
  // auto xptr = (QPalette & (QPalette::*)(QPalette&&) ) &QPalette::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:79
// [-2] void swap(QPalette &) 
// (12)qm1935247638 (21)_ZN8QPalette4swapERS_
//static
/*void qm1935247638(QPalette & other)*/ {
  QPalette & other = *(QPalette *)this_;
  (void) ((QPalette*)this_)->swap(other);
   auto xptr = (void (QPalette::*)(QPalette&) ) &QPalette::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:106
// [4] QPalette::ColorGroup currentColorGroup() const
// (11)qm140604248 (34)_ZNK8QPalette17currentColorGroupEv
//static
/*void qm140604248()*/ {
  ;
  (void) ((QPalette*)this_)->currentColorGroup();
   auto xptr = (QPalette::ColorGroup (QPalette::*)() const ) &QPalette::currentColorGroup;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:107
// [-2] void setCurrentColorGroup(QPalette::ColorGroup) 
// (12)qm2575365650 (51)_ZN8QPalette20setCurrentColorGroupENS_10ColorGroupE
//static
/*void qm2575365650(QPalette::ColorGroup cg)*/ {
  QPalette::ColorGroup cg = *(QPalette::ColorGroup*)this_;
  (void) ((QPalette*)this_)->setCurrentColorGroup(cg);
   auto xptr = (void (QPalette::*)(QPalette::ColorGroup) ) &QPalette::setCurrentColorGroup;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:109
// [16] const QColor & color(QPalette::ColorGroup, QPalette::ColorRole) const
// (12)qm2907919547 (50)_ZNK8QPalette5colorENS_10ColorGroupENS_9ColorRoleE
//static
/*void qm2907919547(QPalette::ColorGroup cg, QPalette::ColorRole cr)*/ {
  QPalette::ColorGroup cg = *(QPalette::ColorGroup*)this_; QPalette::ColorRole cr = *(QPalette::ColorRole*)this_;
  (void) ((QPalette*)this_)->color(cg, cr);
   auto xptr = (const QColor & (QPalette::*)(QPalette::ColorGroup, QPalette::ColorRole) const ) &QPalette::color;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:112
// [-2] void setColor(QPalette::ColorGroup, QPalette::ColorRole, const QColor &) 
// (12)qm3367236524 (61)_ZN8QPalette8setColorENS_10ColorGroupENS_9ColorRoleERK6QColor
//static
/*void qm3367236524(QPalette::ColorGroup cg, QPalette::ColorRole cr, const QColor & color)*/ {
  QPalette::ColorGroup cg = *(QPalette::ColorGroup*)this_; QPalette::ColorRole cr = *(QPalette::ColorRole*)this_; const QColor & color = *(const QColor *)this_;
  (void) ((QPalette*)this_)->setColor(cg, cr, color);
   auto xptr = (void (QPalette::*)(QPalette::ColorGroup, QPalette::ColorRole, QColor const&) ) &QPalette::setColor;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:113
// [-2] void setColor(QPalette::ColorRole, const QColor &) 
// (10)qm20127936 (45)_ZN8QPalette8setColorENS_9ColorRoleERK6QColor
//static
/*void qm20127936(QPalette::ColorRole cr, const QColor & color)*/ {
  QPalette::ColorRole cr = *(QPalette::ColorRole*)this_; const QColor & color = *(const QColor *)this_;
  (void) ((QPalette*)this_)->setColor(cr, color);
   auto xptr = (void (QPalette::*)(QPalette::ColorRole, QColor const&) ) &QPalette::setColor;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:114
// [-2] void setBrush(QPalette::ColorRole, const QBrush &) 
// (11)qm666388383 (45)_ZN8QPalette8setBrushENS_9ColorRoleERK6QBrush
//static
/*void qm666388383(QPalette::ColorRole cr, const QBrush & brush)*/ {
  QPalette::ColorRole cr = *(QPalette::ColorRole*)this_; const QBrush & brush = *(const QBrush *)this_;
  (void) ((QPalette*)this_)->setBrush(cr, brush);
   auto xptr = (void (QPalette::*)(QPalette::ColorRole, QBrush const&) ) &QPalette::setBrush;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:123
// [16] const QColor & color(QPalette::ColorRole) const
// (12)qm3526401366 (34)_ZNK8QPalette5colorENS_9ColorRoleE
//static
/*void qm3526401366(QPalette::ColorRole cr)*/ {
  QPalette::ColorRole cr = *(QPalette::ColorRole*)this_;
  (void) ((QPalette*)this_)->color(cr);
   auto xptr = (const QColor & (QPalette::*)(QPalette::ColorRole) const ) &QPalette::color;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:124
// [8] const QBrush & brush(QPalette::ColorRole) const
// (12)qm3577953358 (34)_ZNK8QPalette5brushENS_9ColorRoleE
//static
/*void qm3577953358(QPalette::ColorRole cr)*/ {
  QPalette::ColorRole cr = *(QPalette::ColorRole*)this_;
  (void) ((QPalette*)this_)->brush(cr);
   auto xptr = (const QBrush & (QPalette::*)(QPalette::ColorRole) const ) &QPalette::brush;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:125
// [8] const QBrush & windowText() const
// (12)qm1145350256 (27)_ZNK8QPalette10windowTextEv
//static
/*void qm1145350256()*/ {
  ;
  (void) ((QPalette*)this_)->windowText();
   auto xptr = (const QBrush & (QPalette::*)() const ) &QPalette::windowText;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:126
// [8] const QBrush & button() const
// (11)qm736265663 (22)_ZNK8QPalette6buttonEv
//static
/*void qm736265663()*/ {
  ;
  (void) ((QPalette*)this_)->button();
   auto xptr = (const QBrush & (QPalette::*)() const ) &QPalette::button;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:127
// [8] const QBrush & light() const
// (11)qm390936111 (21)_ZNK8QPalette5lightEv
//static
/*void qm390936111()*/ {
  ;
  (void) ((QPalette*)this_)->light();
   auto xptr = (const QBrush & (QPalette::*)() const ) &QPalette::light;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:128
// [8] const QBrush & dark() const
// (12)qm2478481798 (20)_ZNK8QPalette4darkEv
//static
/*void qm2478481798()*/ {
  ;
  (void) ((QPalette*)this_)->dark();
   auto xptr = (const QBrush & (QPalette::*)() const ) &QPalette::dark;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:129
// [8] const QBrush & mid() const
// (12)qm3320423939 (19)_ZNK8QPalette3midEv
//static
/*void qm3320423939()*/ {
  ;
  (void) ((QPalette*)this_)->mid();
   auto xptr = (const QBrush & (QPalette::*)() const ) &QPalette::mid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:130
// [8] const QBrush & text() const
// (11)qm489357812 (20)_ZNK8QPalette4textEv
//static
/*void qm489357812()*/ {
  ;
  (void) ((QPalette*)this_)->text();
   auto xptr = (const QBrush & (QPalette::*)() const ) &QPalette::text;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:131
// [8] const QBrush & base() const
// (12)qm4156623092 (20)_ZNK8QPalette4baseEv
//static
/*void qm4156623092()*/ {
  ;
  (void) ((QPalette*)this_)->base();
   auto xptr = (const QBrush & (QPalette::*)() const ) &QPalette::base;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:132
// [8] const QBrush & alternateBase() const
// (12)qm2776534739 (30)_ZNK8QPalette13alternateBaseEv
//static
/*void qm2776534739()*/ {
  ;
  (void) ((QPalette*)this_)->alternateBase();
   auto xptr = (const QBrush & (QPalette::*)() const ) &QPalette::alternateBase;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:133
// [8] const QBrush & toolTipBase() const
// (12)qm4270523121 (28)_ZNK8QPalette11toolTipBaseEv
//static
/*void qm4270523121()*/ {
  ;
  (void) ((QPalette*)this_)->toolTipBase();
   auto xptr = (const QBrush & (QPalette::*)() const ) &QPalette::toolTipBase;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:134
// [8] const QBrush & toolTipText() const
// (11)qm341904369 (28)_ZNK8QPalette11toolTipTextEv
//static
/*void qm341904369()*/ {
  ;
  (void) ((QPalette*)this_)->toolTipText();
   auto xptr = (const QBrush & (QPalette::*)() const ) &QPalette::toolTipText;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:135
// [8] const QBrush & window() const
// (12)qm1855808202 (22)_ZNK8QPalette6windowEv
//static
/*void qm1855808202()*/ {
  ;
  (void) ((QPalette*)this_)->window();
   auto xptr = (const QBrush & (QPalette::*)() const ) &QPalette::window;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:136
// [8] const QBrush & midlight() const
// (12)qm3232273153 (24)_ZNK8QPalette8midlightEv
//static
/*void qm3232273153()*/ {
  ;
  (void) ((QPalette*)this_)->midlight();
   auto xptr = (const QBrush & (QPalette::*)() const ) &QPalette::midlight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:137
// [8] const QBrush & brightText() const
// (12)qm3176416555 (27)_ZNK8QPalette10brightTextEv
//static
/*void qm3176416555()*/ {
  ;
  (void) ((QPalette*)this_)->brightText();
   auto xptr = (const QBrush & (QPalette::*)() const ) &QPalette::brightText;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:138
// [8] const QBrush & buttonText() const
// (11)qm437907165 (27)_ZNK8QPalette10buttonTextEv
//static
/*void qm437907165()*/ {
  ;
  (void) ((QPalette*)this_)->buttonText();
   auto xptr = (const QBrush & (QPalette::*)() const ) &QPalette::buttonText;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:139
// [8] const QBrush & shadow() const
// (12)qm3187070289 (22)_ZNK8QPalette6shadowEv
//static
/*void qm3187070289()*/ {
  ;
  (void) ((QPalette*)this_)->shadow();
   auto xptr = (const QBrush & (QPalette::*)() const ) &QPalette::shadow;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:140
// [8] const QBrush & highlight() const
// (12)qm1794746917 (25)_ZNK8QPalette9highlightEv
//static
/*void qm1794746917()*/ {
  ;
  (void) ((QPalette*)this_)->highlight();
   auto xptr = (const QBrush & (QPalette::*)() const ) &QPalette::highlight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:141
// [8] const QBrush & highlightedText() const
// (12)qm3436231574 (32)_ZNK8QPalette15highlightedTextEv
//static
/*void qm3436231574()*/ {
  ;
  (void) ((QPalette*)this_)->highlightedText();
   auto xptr = (const QBrush & (QPalette::*)() const ) &QPalette::highlightedText;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:142
// [8] const QBrush & link() const
// (12)qm1431732237 (20)_ZNK8QPalette4linkEv
//static
/*void qm1431732237()*/ {
  ;
  (void) ((QPalette*)this_)->link();
   auto xptr = (const QBrush & (QPalette::*)() const ) &QPalette::link;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:143
// [8] const QBrush & linkVisited() const
// (12)qm1915071351 (28)_ZNK8QPalette11linkVisitedEv
//static
/*void qm1915071351()*/ {
  ;
  (void) ((QPalette*)this_)->linkVisited();
   auto xptr = (const QBrush & (QPalette::*)() const ) &QPalette::linkVisited;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:144
// [8] const QBrush & placeholderText() const
// (11)qm769438529 (32)_ZNK8QPalette15placeholderTextEv
//static
/*void qm769438529()*/ {
  ;
  (void) ((QPalette*)this_)->placeholderText();
   auto xptr = (const QBrush & (QPalette::*)() const ) &QPalette::placeholderText;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:153
// [1] bool operator!=(const QPalette &) const
// (11)qm760711547 (20)_ZNK8QPaletteneERKS_
//static
/*void qm760711547(const QPalette & p)*/ {
  const QPalette & p = *(const QPalette *)this_;
  (void) ((QPalette*)this_)->operator!=(p);
  // auto xptr = (bool (QPalette::*)(QPalette const&) const ) &QPalette::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:162
// [4] uint resolve() const
// (12)qm3182790110 (23)_ZNK8QPalette7resolveEv
//static
/*void qm3182790110()*/ {
  ;
  (void) ((QPalette*)this_)->resolve();
   auto xptr = (unsigned int (QPalette::*)() const ) &QPalette::resolve;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:163
// [-2] void resolve(uint) 
// (11)qm949696841 (22)_ZN8QPalette7resolveEj
//static
/*void qm949696841(unsigned int mask)*/ {
  unsigned int mask = *(unsigned int*)this_;
  (void) ((QPalette*)this_)->resolve(mask);
   auto xptr = (void (QPalette::*)(unsigned int) ) &QPalette::resolve;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN8QPaletteD2Ev(void *this_)*/ {
  delete (QPalette*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qpalette
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
