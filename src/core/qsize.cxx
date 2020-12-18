//  header block begin

// /usr/include/qt/QtCore/qsize.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsize.h>
#include <QtCore>
#include "callback_inherit.h"

// QSize is pure virtual: false false
// QSize has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSize_t {
  QByteArrayData data[1];
  char stringdata0[8];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSize_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSize_t qt_meta_stringdata_MyQSize = {
   {
  QT_MOC_LITERAL(0, 0, 7), // "MyQSize"
  },
  "MyQSize"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSize[] = {
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
class Q_DECL_EXPORT MyQSize : public QSize {
public:
  virtual ~MyQSize() {}
// void QSize()
MyQSize() : QSize() {}
// void QSize(int, int)
MyQSize(int w, int h) : QSize(w, h) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsize(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:56
// [-2] void QSize() 
// (12)qm1019591398 (13)_ZN5QSizeC2Ev
/*void* qm1019591398()*/{
  ;
  this_ =  new QSize();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:57
// [-2] void QSize(int, int) 
// (12)qm1650702872 (14)_ZN5QSizeC2Eii
/*void* qm1650702872(int w, int h)*/{
  int w = *(int*)this_; int h = *(int*)this_;
  this_ =  new QSize(w, h);
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:59
// [1] bool isNull() const
// (11)qm156698094 (19)_ZNK5QSize6isNullEv
//static
/*void qm156698094()*/ {
  ;
  (void) ((QSize*)this_)->isNull();
   auto xptr = (bool (QSize::*)() const ) &QSize::isNull;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:60
// [1] bool isEmpty() const
// (12)qm3342360827 (20)_ZNK5QSize7isEmptyEv
//static
/*void qm3342360827()*/ {
  ;
  (void) ((QSize*)this_)->isEmpty();
   auto xptr = (bool (QSize::*)() const ) &QSize::isEmpty;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:61
// [1] bool isValid() const
// (12)qm4115784497 (20)_ZNK5QSize7isValidEv
//static
/*void qm4115784497()*/ {
  ;
  (void) ((QSize*)this_)->isValid();
   auto xptr = (bool (QSize::*)() const ) &QSize::isValid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:63
// [4] int width() const
// (11)qm978481712 (18)_ZNK5QSize5widthEv
//static
/*void qm978481712()*/ {
  ;
  (void) ((QSize*)this_)->width();
   auto xptr = (int (QSize::*)() const ) &QSize::width;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:64
// [4] int height() const
// (12)qm1546467447 (19)_ZNK5QSize6heightEv
//static
/*void qm1546467447()*/ {
  ;
  (void) ((QSize*)this_)->height();
   auto xptr = (int (QSize::*)() const ) &QSize::height;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:65
// [-2] void setWidth(int) 
// (11)qm254343116 (20)_ZN5QSize8setWidthEi
//static
/*void qm254343116(int w)*/ {
  int w = *(int*)this_;
  (void) ((QSize*)this_)->setWidth(w);
   auto xptr = (void (QSize::*)(int) ) &QSize::setWidth;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:66
// [-2] void setHeight(int) 
// (11)qm174690052 (21)_ZN5QSize9setHeightEi
//static
/*void qm174690052(int h)*/ {
  int h = *(int*)this_;
  (void) ((QSize*)this_)->setHeight(h);
   auto xptr = (void (QSize::*)(int) ) &QSize::setHeight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:68
// [8] QSize transposed() const
// (12)qm3515168846 (24)_ZNK5QSize10transposedEv
//static
/*void qm3515168846()*/ {
  ;
  (void) ((QSize*)this_)->transposed();
   auto xptr = (QSize (QSize::*)() const ) &QSize::transposed;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:70
// [-2] void scale(int, int, Qt::AspectRatioMode) 
// (12)qm2348694517 (40)_ZN5QSize5scaleEiiN2Qt15AspectRatioModeE
//static
/*void qm2348694517(int w, int h, Qt::AspectRatioMode mode)*/ {
  int w = *(int*)this_; int h = *(int*)this_; Qt::AspectRatioMode mode = *(Qt::AspectRatioMode*)this_;
  (void) ((QSize*)this_)->scale(w, h, mode);
   auto xptr = (void (QSize::*)(int, int, Qt::AspectRatioMode) ) &QSize::scale;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:71
// [-2] void scale(const QSize &, Qt::AspectRatioMode) 
// (12)qm1861345935 (42)_ZN5QSize5scaleERKS_N2Qt15AspectRatioModeE
//static
/*void qm1861345935(const QSize & s, Qt::AspectRatioMode mode)*/ {
  const QSize & s = *(const QSize *)this_; Qt::AspectRatioMode mode = *(Qt::AspectRatioMode*)this_;
  (void) ((QSize*)this_)->scale(s, mode);
   auto xptr = (void (QSize::*)(QSize const&, Qt::AspectRatioMode) ) &QSize::scale;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:72
// [8] QSize scaled(int, int, Qt::AspectRatioMode) const
// (12)qm4217783182 (42)_ZNK5QSize6scaledEiiN2Qt15AspectRatioModeE
//static
/*void qm4217783182(int w, int h, Qt::AspectRatioMode mode)*/ {
  int w = *(int*)this_; int h = *(int*)this_; Qt::AspectRatioMode mode = *(Qt::AspectRatioMode*)this_;
  (void) ((QSize*)this_)->scaled(w, h, mode);
   auto xptr = (QSize (QSize::*)(int, int, Qt::AspectRatioMode) const ) &QSize::scaled;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:75
// [8] QSize expandedTo(const QSize &) const
// (12)qm3470430242 (27)_ZNK5QSize10expandedToERKS_
//static
/*void qm3470430242(const QSize & arg0)*/ {
  const QSize & arg0 = *(const QSize *)this_;
  (void) ((QSize*)this_)->expandedTo(arg0);
   auto xptr = (QSize (QSize::*)(QSize const&) const ) &QSize::expandedTo;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:76
// [8] QSize boundedTo(const QSize &) const
// (11)qm498360319 (25)_ZNK5QSize9boundedToERKS_
//static
/*void qm498360319(const QSize & arg0)*/ {
  const QSize & arg0 = *(const QSize *)this_;
  (void) ((QSize*)this_)->boundedTo(arg0);
   auto xptr = (QSize (QSize::*)(QSize const&) const ) &QSize::boundedTo;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:78
// [8] QSize grownBy(QMargins) const
// (12)qm3342915315 (28)_ZNK5QSize7grownByE8QMargins
//static
/*void qm3342915315(QMargins m)*/ {
  QMargins m = *(QMargins*)this_;
  (void) ((QSize*)this_)->grownBy(m);
   auto xptr = (QSize (QSize::*)(QMargins) const ) &QSize::grownBy;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:80
// [8] QSize shrunkBy(QMargins) const
// (12)qm2946472739 (29)_ZNK5QSize8shrunkByE8QMargins
//static
/*void qm2946472739(QMargins m)*/ {
  QMargins m = *(QMargins*)this_;
  (void) ((QSize*)this_)->shrunkBy(m);
   auto xptr = (QSize (QSize::*)(QMargins) const ) &QSize::shrunkBy;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:83
// [4] int & rwidth() 
// (12)qm1400378653 (18)_ZN5QSize6rwidthEv
//static
/*void qm1400378653()*/ {
  ;
  (void) ((QSize*)this_)->rwidth();
   auto xptr = (int & (QSize::*)() ) &QSize::rwidth;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:84
// [4] int & rheight() 
// (12)qm3486783902 (19)_ZN5QSize7rheightEv
//static
/*void qm3486783902()*/ {
  ;
  (void) ((QSize*)this_)->rheight();
   auto xptr = (int & (QSize::*)() ) &QSize::rheight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:86
// [8] QSize & operator+=(const QSize &) 
// (11)qm913624821 (16)_ZN5QSizepLERKS_
//static
/*void qm913624821(const QSize & arg0)*/ {
  const QSize & arg0 = *(const QSize *)this_;
  (void) ((QSize*)this_)->operator+=(arg0);
  // auto xptr = (QSize & (QSize::*)(QSize const&) ) &QSize::operator+=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:87
// [8] QSize & operator-=(const QSize &) 
// (12)qm1622188616 (16)_ZN5QSizemIERKS_
//static
/*void qm1622188616(const QSize & arg0)*/ {
  const QSize & arg0 = *(const QSize *)this_;
  (void) ((QSize*)this_)->operator-=(arg0);
  // auto xptr = (QSize & (QSize::*)(QSize const&) ) &QSize::operator-=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:88
// [8] QSize & operator*=(qreal) 
// (12)qm3523106553 (13)_ZN5QSizemLEd
//static
/*void qm3523106553(double c)*/ {
  double c = *(double*)this_;
  (void) ((QSize*)this_)->operator*=(c);
  // auto xptr = (QSize & (QSize::*)(double) ) &QSize::operator*=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:89
// [8] QSize & operator/=(qreal) 
// (12)qm3175563221 (13)_ZN5QSizedVEd
//static
/*void qm3175563221(double c)*/ {
  double c = *(double*)this_;
  (void) ((QSize*)this_)->operator/=(c);
  // auto xptr = (QSize & (QSize::*)(double) ) &QSize::operator/=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN5QSizeD2Ev(void *this_)*/ {
  delete (QSize*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsize
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
