//  header block begin

// /usr/include/qt/QtCore/qstring.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstring.h>
#include <QtCore>
#include "callback_inherit.h"

// QString is pure virtual: false false
// QString has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQString_t {
  QByteArrayData data[1];
  char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQString_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQString_t qt_meta_stringdata_MyQString = {
   {
  QT_MOC_LITERAL(0, 0, 9), // "MyQString"
  },
  "MyQString"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQString[] = {
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
class Q_DECL_EXPORT MyQString : public QString {
public:
  virtual ~MyQString() {}
// void QString()
MyQString() : QString() {}
// void QString(const QChar *, int)
MyQString(const QChar * unicode, int size) : QString(unicode, size) {}
// void QString(QChar)
MyQString(QChar c) : QString(c) {}
// void QString(int, QChar)
MyQString(int size, QChar c) : QString(size, c) {}
// void QString(QLatin1String)
MyQString(QLatin1String latin1) : QString(latin1) {}
// void QString(const QString &)
MyQString(const QString & arg0) : QString(arg0) {}
// void QString(QString &&)
MyQString(QString && other) : QString(other) {}
// void QString(const char *)
MyQString(const char * ch) : QString(ch) {}
// void QString(const QByteArray &)
MyQString(const QByteArray & a) : QString(a) {}
// void QString(const QString::Null &)
MyQString(const QString::Null & arg0) : QString(arg0) {}
// void QString(int, Qt::Initialization)
MyQString(int size, Qt::Initialization arg1) : QString(size, arg1) {}
// void QString(QStringDataPtr)
MyQString(QStringDataPtr dd) : QString(dd) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstring(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:263
// [-2] void QString() 
// (12)qm3941149024 (15)_ZN7QStringC2Ev
/*void* qm3941149024()*/{
  ;
  this_ =  new QString();
  this_ =  new MyQString();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:264
// [-2] void QString(const QChar *, int) 
// (12)qm2246409334 (23)_ZN7QStringC2EPK5QChari
/*void* qm2246409334(const QChar * unicode, int size)*/{
  const QChar * unicode = *(const QChar **)this_; int size = *(int*)this_;
  this_ =  new QString(unicode, size);
  this_ =  new MyQString(unicode, size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:265
// [-2] void QString(QChar) 
// (10)qm29305257 (20)_ZN7QStringC2E5QChar
/*void* qm29305257(QChar c)*/{
  QChar c = *(QChar*)this_;
  this_ =  new QString(c);
  this_ =  new MyQString(c);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:266
// [-2] void QString(int, QChar) 
// (12)qm3074360247 (21)_ZN7QStringC2Ei5QChar
/*void* qm3074360247(int size, QChar c)*/{
  int size = *(int*)this_; QChar c = *(QChar*)this_;
  this_ =  new QString(size, c);
  this_ =  new MyQString(size, c);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:267
// [-2] void QString(QLatin1String) 
// (12)qm1670260114 (29)_ZN7QStringC2E13QLatin1String
/*void* qm1670260114(QLatin1String latin1)*/{
  QLatin1String latin1 = *(QLatin1String*)this_;
  this_ =  new QString(latin1);
  this_ =  new MyQString(latin1);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:268
// [-2] void QString(const QString &) 
// (11)qm333172565 (18)_ZN7QStringC2ERKS_
/*void* qm333172565(const QString & arg0)*/{
  const QString & arg0 = *(const QString *)this_;
  this_ =  new QString(arg0);
  this_ =  new MyQString(arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:269
// [-2] void ~QString() 
// (12)qm2000556505 (15)_ZN7QStringD2Ev
/*void qm2000556505 (void *this_)*/ {
  delete (QString*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:273
// [-2] void QString(QString &&) 
// (11)qm661559088 (17)_ZN7QStringC2EOS_
/*void* qm661559088(QString && other)*/{
  QString && other =  static_cast<QString &&>(*(QString *)this_);
  this_ =  new QString(other);
  this_ =  new MyQString(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:274
// [8] QString & operator=(QString &&) 
// (12)qm3378015728 (17)_ZN7QStringaSEOS_
//static
/*void qm3378015728(QString && other)*/ {
  QString && other =  static_cast<QString &&>(*(QString *)this_);
  (void) ((QString*)this_)->operator=(other);
  // auto xptr = (QString & (QString::*)(QString&&) ) &QString::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:276
// [-2] void swap(QString &) 
// (12)qm2150664822 (20)_ZN7QString4swapERS_
//static
/*void qm2150664822(QString & other)*/ {
  QString & other = *(QString *)this_;
  (void) ((QString*)this_)->swap(other);
   auto xptr = (void (QString::*)(QString&) ) &QString::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:277
// [4] int size() const
// (12)qm2841820721 (19)_ZNK7QString4sizeEv
//static
/*void qm2841820721()*/ {
  ;
  (void) ((QString*)this_)->size();
   auto xptr = (int (QString::*)() const ) &QString::size;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:278
// [4] int count() const
// (12)qm3282951178 (20)_ZNK7QString5countEv
//static
/*void qm3282951178()*/ {
  ;
  (void) ((QString*)this_)->count();
   auto xptr = (int (QString::*)() const ) &QString::count;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:279
// [4] int length() const
// (12)qm1867525835 (21)_ZNK7QString6lengthEv
//static
/*void qm1867525835()*/ {
  ;
  (void) ((QString*)this_)->length();
   auto xptr = (int (QString::*)() const ) &QString::length;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:280
// [1] bool isEmpty() const
// (11)qm575151980 (22)_ZNK7QString7isEmptyEv
//static
/*void qm575151980()*/ {
  ;
  (void) ((QString*)this_)->isEmpty();
   auto xptr = (bool (QString::*)() const ) &QString::isEmpty;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:288
// [4] int capacity() const
// (11)qm358737250 (23)_ZNK7QString8capacityEv
//static
/*void qm358737250()*/ {
  ;
  (void) ((QString*)this_)->capacity();
   auto xptr = (int (QString::*)() const ) &QString::capacity;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:289
// [-2] void reserve(int) 
// (12)qm2459462189 (21)_ZN7QString7reserveEi
//static
/*void qm2459462189(int size)*/ {
  int size = *(int*)this_;
  (void) ((QString*)this_)->reserve(size);
   auto xptr = (void (QString::*)(int) ) &QString::reserve;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:290
// [-2] void squeeze() 
// (11)qm199003482 (21)_ZN7QString7squeezeEv
//static
/*void qm199003482()*/ {
  ;
  (void) ((QString*)this_)->squeeze();
   auto xptr = (void (QString::*)() ) &QString::squeeze;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:292
// [8] const QChar * unicode() const
// (11)qm444642739 (22)_ZNK7QString7unicodeEv
//static
/*void qm444642739()*/ {
  ;
  (void) ((QString*)this_)->unicode();
   auto xptr = (const QChar * (QString::*)() const ) &QString::unicode;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:293
// [8] QChar * data() 
// (11)qm975920561 (18)_ZN7QString4dataEv
//static
/*void qm975920561()*/ {
  ;
  (void) ((QString*)this_)->data();
   auto xptr = (QChar * (QString::*)() ) &QString::data;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:294
// [8] const QChar * data() const
// (12)qm1612126268 (19)_ZNK7QString4dataEv
//static
/*void qm1612126268()*/ {
  ;
  (void) ((QString*)this_)->data();
   auto xptr = (const QChar * (QString::*)() const ) &QString::data;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:295
// [8] const QChar * constData() const
// (12)qm2670950135 (24)_ZNK7QString9constDataEv
//static
/*void qm2670950135()*/ {
  ;
  (void) ((QString*)this_)->constData();
   auto xptr = (const QChar * (QString::*)() const ) &QString::constData;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:297
// [-2] void detach() 
// (12)qm3572336416 (20)_ZN7QString6detachEv
//static
/*void qm3572336416()*/ {
  ;
  (void) ((QString*)this_)->detach();
   auto xptr = (void (QString::*)() ) &QString::detach;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:298
// [1] bool isDetached() const
// (12)qm2187738159 (26)_ZNK7QString10isDetachedEv
//static
/*void qm2187738159()*/ {
  ;
  (void) ((QString*)this_)->isDetached();
   auto xptr = (bool (QString::*)() const ) &QString::isDetached;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:299
// [1] bool isSharedWith(const QString &) const
// (12)qm2086391364 (31)_ZNK7QString12isSharedWithERKS_
//static
/*void qm2086391364(const QString & other)*/ {
  const QString & other = *(const QString *)this_;
  (void) ((QString*)this_)->isSharedWith(other);
   auto xptr = (bool (QString::*)(QString const&) const ) &QString::isSharedWith;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:300
// [-2] void clear() 
// (12)qm3932460570 (19)_ZN7QString5clearEv
//static
/*void qm3932460570()*/ {
  ;
  (void) ((QString*)this_)->clear();
   auto xptr = (void (QString::*)() ) &QString::clear;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:302
// [2] const QChar at(int) const
// (12)qm4275634503 (17)_ZNK7QString2atEi
//static
/*void qm4275634503(int i)*/ {
  int i = *(int*)this_;
  (void) ((QString*)this_)->at(i);
   auto xptr = (const QChar (QString::*)(int) const ) &QString::at;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:303
// [2] const QChar operator[](int) const
// (12)qm4178459354 (16)_ZNK7QStringixEi
//static
/*void qm4178459354(int i)*/ {
  int i = *(int*)this_;
  (void) ((QString*)this_)->operator[](i);
  // auto xptr = (const QChar (QString::*)(int) const ) &QString::operator[];
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:304
// [16] QCharRef operator[](int) 
// (12)qm3580060633 (15)_ZN7QStringixEi
//static
/*void qm3580060633(int i)*/ {
  int i = *(int*)this_;
  (void) ((QString*)this_)->operator[](i);
  // auto xptr = (QCharRef (QString::*)(int) ) &QString::operator[];
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:305
// [2] const QChar operator[](uint) const
// (12)qm1611098976 (16)_ZNK7QStringixEj
//static
/*void qm1611098976(unsigned int i)*/ {
  unsigned int i = *(unsigned int*)this_;
  (void) ((QString*)this_)->operator[](i);
  // auto xptr = (const QChar (QString::*)(unsigned int) const ) &QString::operator[];
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:306
// [16] QCharRef operator[](uint) 
// (12)qm1282028131 (15)_ZN7QStringixEj
//static
/*void qm1282028131(unsigned int i)*/ {
  unsigned int i = *(unsigned int*)this_;
  (void) ((QString*)this_)->operator[](i);
  // auto xptr = (QCharRef (QString::*)(unsigned int) ) &QString::operator[];
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:308
// [2] QChar front() const
// (10)qm76377547 (20)_ZNK7QString5frontEv
//static
/*void qm76377547()*/ {
  ;
  (void) ((QString*)this_)->front();
   auto xptr = (QChar (QString::*)() const ) &QString::front;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:309
// [16] QCharRef front() 
// (12)qm2547953171 (19)_ZN7QString5frontEv
//static
/*void qm2547953171()*/ {
  ;
  (void) ((QString*)this_)->front();
   auto xptr = (QCharRef (QString::*)() ) &QString::front;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:310
// [2] QChar back() const
// (12)qm1981223377 (19)_ZNK7QString4backEv
//static
/*void qm1981223377()*/ {
  ;
  (void) ((QString*)this_)->back();
   auto xptr = (QChar (QString::*)() const ) &QString::back;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:311
// [16] QCharRef back() 
// (11)qm741037148 (18)_ZN7QString4backEv
//static
/*void qm741037148()*/ {
  ;
  (void) ((QString*)this_)->back();
   auto xptr = (QCharRef (QString::*)() ) &QString::back;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:317
// [8] QString arg(long, int, int, QChar) const
// (12)qm1335968273 (26)_ZNK7QString3argElii5QChar
//static
/*void qm1335968273(long a, int fieldwidth, int base, QChar fillChar)*/ {
  long a = *(long*)this_; int fieldwidth = *(int*)this_; int base = *(int*)this_; QChar fillChar = *(QChar*)this_;
  (void) ((QString*)this_)->arg(a, fieldwidth, base, fillChar);
   auto xptr = (QString (QString::*)(long, int, int, QChar) const ) &QString::arg;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:319
// [8] QString arg(ulong, int, int, QChar) const
// (12)qm1490703954 (26)_ZNK7QString3argEmii5QChar
//static
/*void qm1490703954(unsigned long a, int fieldwidth, int base, QChar fillChar)*/ {
  unsigned long a = *(unsigned long*)this_; int fieldwidth = *(int*)this_; int base = *(int*)this_; QChar fillChar = *(QChar*)this_;
  (void) ((QString*)this_)->arg(a, fieldwidth, base, fillChar);
   auto xptr = (QString (QString::*)(unsigned long, int, int, QChar) const ) &QString::arg;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:321
// [8] QString arg(int, int, int, QChar) const
// (10)qm87426910 (26)_ZNK7QString3argEiii5QChar
//static
/*void qm87426910(int a, int fieldWidth, int base, QChar fillChar)*/ {
  int a = *(int*)this_; int fieldWidth = *(int*)this_; int base = *(int*)this_; QChar fillChar = *(QChar*)this_;
  (void) ((QString*)this_)->arg(a, fieldWidth, base, fillChar);
   auto xptr = (QString (QString::*)(int, int, int, QChar) const ) &QString::arg;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:323
// [8] QString arg(uint, int, int, QChar) const
// (12)qm1018903451 (26)_ZNK7QString3argEjii5QChar
//static
/*void qm1018903451(unsigned int a, int fieldWidth, int base, QChar fillChar)*/ {
  unsigned int a = *(unsigned int*)this_; int fieldWidth = *(int*)this_; int base = *(int*)this_; QChar fillChar = *(QChar*)this_;
  (void) ((QString*)this_)->arg(a, fieldWidth, base, fillChar);
   auto xptr = (QString (QString::*)(unsigned int, int, int, QChar) const ) &QString::arg;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:325
// [8] QString arg(short, int, int, QChar) const
// (12)qm1020841905 (26)_ZNK7QString3argEsii5QChar
//static
/*void qm1020841905(short a, int fieldWidth, int base, QChar fillChar)*/ {
  short a = *(short*)this_; int fieldWidth = *(int*)this_; int base = *(int*)this_; QChar fillChar = *(QChar*)this_;
  (void) ((QString*)this_)->arg(a, fieldWidth, base, fillChar);
   auto xptr = (QString (QString::*)(short, int, int, QChar) const ) &QString::arg;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:327
// [8] QString arg(ushort, int, int, QChar) const
// (12)qm1488560760 (26)_ZNK7QString3argEtii5QChar
//static
/*void qm1488560760(unsigned short a, int fieldWidth, int base, QChar fillChar)*/ {
  unsigned short a = *(unsigned short*)this_; int fieldWidth = *(int*)this_; int base = *(int*)this_; QChar fillChar = *(QChar*)this_;
  (void) ((QString*)this_)->arg(a, fieldWidth, base, fillChar);
   auto xptr = (QString (QString::*)(unsigned short, int, int, QChar) const ) &QString::arg;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:344
// [8] QString arg(const QString &, const QString &) const
// (12)qm3487476068 (24)_ZNK7QString3argERKS_S1_
//static
/*void qm3487476068(const QString & a1, const QString & a2)*/ {
  const QString & a1 = *(const QString *)this_; const QString & a2 = *(const QString *)this_;
  (void) ((QString*)this_)->arg(a1, a2);
   auto xptr = (QString (QString::*)(QString const&, QString const&) const ) &QString::arg;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:345
// [8] QString arg(const QString &, const QString &, const QString &) const
// (12)qm4249000300 (27)_ZNK7QString3argERKS_S1_S1_
//static
/*void qm4249000300(const QString & a1, const QString & a2, const QString & a3)*/ {
  const QString & a1 = *(const QString *)this_; const QString & a2 = *(const QString *)this_; const QString & a3 = *(const QString *)this_;
  (void) ((QString*)this_)->arg(a1, a2, a3);
   auto xptr = (QString (QString::*)(QString const&, QString const&, QString const&) const ) &QString::arg;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:346
// [8] QString arg(const QString &, const QString &, const QString &, const QString &) const
// (12)qm3584958842 (30)_ZNK7QString3argERKS_S1_S1_S1_
//static
/*void qm3584958842(const QString & a1, const QString & a2, const QString & a3, const QString & a4)*/ {
  const QString & a1 = *(const QString *)this_; const QString & a2 = *(const QString *)this_; const QString & a3 = *(const QString *)this_; const QString & a4 = *(const QString *)this_;
  (void) ((QString*)this_)->arg(a1, a2, a3, a4);
   auto xptr = (QString (QString::*)(QString const&, QString const&, QString const&, QString const&) const ) &QString::arg;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:348
// [8] QString arg(const QString &, const QString &, const QString &, const QString &, const QString &) const
// (12)qm1218802803 (33)_ZNK7QString3argERKS_S1_S1_S1_S1_
//static
/*void qm1218802803(const QString & a1, const QString & a2, const QString & a3, const QString & a4, const QString & a5)*/ {
  const QString & a1 = *(const QString *)this_; const QString & a2 = *(const QString *)this_; const QString & a3 = *(const QString *)this_; const QString & a4 = *(const QString *)this_; const QString & a5 = *(const QString *)this_;
  (void) ((QString*)this_)->arg(a1, a2, a3, a4, a5);
   auto xptr = (QString (QString::*)(QString const&, QString const&, QString const&, QString const&, QString const&) const ) &QString::arg;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:350
// [8] QString arg(const QString &, const QString &, const QString &, const QString &, const QString &, const QString &) const
// (11)qm392839160 (36)_ZNK7QString3argERKS_S1_S1_S1_S1_S1_
//static
/*void qm392839160(const QString & a1, const QString & a2, const QString & a3, const QString & a4, const QString & a5, const QString & a6)*/ {
  const QString & a1 = *(const QString *)this_; const QString & a2 = *(const QString *)this_; const QString & a3 = *(const QString *)this_; const QString & a4 = *(const QString *)this_; const QString & a5 = *(const QString *)this_; const QString & a6 = *(const QString *)this_;
  (void) ((QString*)this_)->arg(a1, a2, a3, a4, a5, a6);
   auto xptr = (QString (QString::*)(QString const&, QString const&, QString const&, QString const&, QString const&, QString const&) const ) &QString::arg;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:352
// [8] QString arg(const QString &, const QString &, const QString &, const QString &, const QString &, const QString &, const QString &) const
// (12)qm3797713449 (39)_ZNK7QString3argERKS_S1_S1_S1_S1_S1_S1_
//static
/*void qm3797713449(const QString & a1, const QString & a2, const QString & a3, const QString & a4, const QString & a5, const QString & a6, const QString & a7)*/ {
  const QString & a1 = *(const QString *)this_; const QString & a2 = *(const QString *)this_; const QString & a3 = *(const QString *)this_; const QString & a4 = *(const QString *)this_; const QString & a5 = *(const QString *)this_; const QString & a6 = *(const QString *)this_; const QString & a7 = *(const QString *)this_;
  (void) ((QString*)this_)->arg(a1, a2, a3, a4, a5, a6, a7);
   auto xptr = (QString (QString::*)(QString const&, QString const&, QString const&, QString const&, QString const&, QString const&, QString const&) const ) &QString::arg;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:355
// [8] QString arg(const QString &, const QString &, const QString &, const QString &, const QString &, const QString &, const QString &, const QString &) const
// (12)qm4039547063 (42)_ZNK7QString3argERKS_S1_S1_S1_S1_S1_S1_S1_
//static
/*void qm4039547063(const QString & a1, const QString & a2, const QString & a3, const QString & a4, const QString & a5, const QString & a6, const QString & a7, const QString & a8)*/ {
  const QString & a1 = *(const QString *)this_; const QString & a2 = *(const QString *)this_; const QString & a3 = *(const QString *)this_; const QString & a4 = *(const QString *)this_; const QString & a5 = *(const QString *)this_; const QString & a6 = *(const QString *)this_; const QString & a7 = *(const QString *)this_; const QString & a8 = *(const QString *)this_;
  (void) ((QString*)this_)->arg(a1, a2, a3, a4, a5, a6, a7, a8);
   auto xptr = (QString (QString::*)(QString const&, QString const&, QString const&, QString const&, QString const&, QString const&, QString const&, QString const&) const ) &QString::arg;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:358
// [8] QString arg(const QString &, const QString &, const QString &, const QString &, const QString &, const QString &, const QString &, const QString &, const QString &) const
// (12)qm2814152158 (45)_ZNK7QString3argERKS_S1_S1_S1_S1_S1_S1_S1_S1_
//static
/*void qm2814152158(const QString & a1, const QString & a2, const QString & a3, const QString & a4, const QString & a5, const QString & a6, const QString & a7, const QString & a8, const QString & a9)*/ {
  const QString & a1 = *(const QString *)this_; const QString & a2 = *(const QString *)this_; const QString & a3 = *(const QString *)this_; const QString & a4 = *(const QString *)this_; const QString & a5 = *(const QString *)this_; const QString & a6 = *(const QString *)this_; const QString & a7 = *(const QString *)this_; const QString & a8 = *(const QString *)this_; const QString & a9 = *(const QString *)this_;
  (void) ((QString*)this_)->arg(a1, a2, a3, a4, a5, a6, a7, a8, a9);
   auto xptr = (QString (QString::*)(QString const&, QString const&, QString const&, QString const&, QString const&, QString const&, QString const&, QString const&, QString const&) const ) &QString::arg;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:416
// [1] bool contains(QChar, Qt::CaseSensitivity) const
// (12)qm2674476673 (50)_ZNK7QString8containsE5QCharN2Qt15CaseSensitivityE
//static
/*void qm2674476673(QChar c, Qt::CaseSensitivity cs)*/ {
  QChar c = *(QChar*)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) ((QString*)this_)->contains(c, cs);
   auto xptr = (bool (QString::*)(QChar, Qt::CaseSensitivity) const ) &QString::contains;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:418
// [1] bool contains(const QString &, Qt::CaseSensitivity) const
// (12)qm2101687579 (48)_ZNK7QString8containsERKS_N2Qt15CaseSensitivityE
//static
/*void qm2101687579(const QString & s, Qt::CaseSensitivity cs)*/ {
  const QString & s = *(const QString *)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) ((QString*)this_)->contains(s, cs);
   auto xptr = (bool (QString::*)(QString const&, Qt::CaseSensitivity) const ) &QString::contains;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:419
// [1] bool contains(const QStringRef &, Qt::CaseSensitivity) const
// (12)qm1465228445 (58)_ZNK7QString8containsERK10QStringRefN2Qt15CaseSensitivityE
//static
/*void qm1465228445(const QStringRef & s, Qt::CaseSensitivity cs)*/ {
  const QStringRef & s = *(const QStringRef *)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) ((QString*)this_)->contains(s, cs);
   auto xptr = (bool (QString::*)(QStringRef const&, Qt::CaseSensitivity) const ) &QString::contains;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:421
// [1] bool contains(QLatin1String, Qt::CaseSensitivity) const
// (12)qm2715544278 (59)_ZNK7QString8containsE13QLatin1StringN2Qt15CaseSensitivityE
//static
/*void qm2715544278(QLatin1String s, Qt::CaseSensitivity cs)*/ {
  QLatin1String s = *(QLatin1String*)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) ((QString*)this_)->contains(s, cs);
   auto xptr = (bool (QString::*)(QLatin1String, Qt::CaseSensitivity) const ) &QString::contains;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:430
// [1] bool contains(const QRegExp &) const
// (12)qm1505074835 (32)_ZNK7QString8containsERK7QRegExp
//static
/*void qm1505074835(const QRegExp & rx)*/ {
  const QRegExp & rx = *(const QRegExp *)this_;
  (void) ((QString*)this_)->contains(rx);
   auto xptr = (bool (QString::*)(QRegExp const&) const ) &QString::contains;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:435
// [1] bool contains(QRegExp &) const
// (12)qm2050393499 (31)_ZNK7QString8containsER7QRegExp
//static
/*void qm2050393499(QRegExp & rx)*/ {
  QRegExp & rx = *(QRegExp *)this_;
  (void) ((QString*)this_)->contains(rx);
   auto xptr = (bool (QString::*)(QRegExp&) const ) &QString::contains;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:457
// [8] QString section(QChar, int, int, QString::SectionFlags) const
// (11)qm172705713 (55)_ZNK7QString7sectionE5QCharii6QFlagsINS_11SectionFlagEE
//static
/*void qm172705713(QChar sep, int start, int end_, QFlags<QString::SectionFlag> flags)*/ {
  QChar sep = *(QChar*)this_; int start = *(int*)this_; int end_ = *(int*)this_; QFlags<QString::SectionFlag> flags = *(QFlags<QString::SectionFlag>*)this_;
  (void) ((QString*)this_)->section(sep, start, end_, flags);
   auto xptr = (QString (QString::*)(QChar, int, int, QFlags<QString::SectionFlag>) const ) &QString::section;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:468
// [8] QString chopped(int) const
// (11)qm862044724 (22)_ZNK7QString7choppedEi
//static
/*void qm862044724(int n)*/ {
  int n = *(int*)this_;
  (void) ((QString*)this_)->chopped(n);
   auto xptr = (QString (QString::*)(int) const ) &QString::chopped;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:508
// [8] QString toLower() const
// (12)qm2256355314 (23)_ZNKR7QString7toLowerEv
//static
/*void qm2256355314()*/ {
  ;
  (void) ((QString*)this_)->toLower();
   auto xptr = (QString (QString::*)() const & ) &QString::toLower;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:510
// [8] QString toLower() 
// (11)qm859534367 (22)_ZNO7QString7toLowerEv
//static
/*void qm859534367()*/ {
  ;
  (void) ((QString*)this_)->toLower();
  (void) (QString{}).toLower();
   auto xptr = (QString (QString::*)() && ) &QString::toLower;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:512
// [8] QString toUpper() const
// (11)qm882608817 (23)_ZNKR7QString7toUpperEv
//static
/*void qm882608817()*/ {
  ;
  (void) ((QString*)this_)->toUpper();
   auto xptr = (QString (QString::*)() const & ) &QString::toUpper;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:514
// [8] QString toUpper() 
// (12)qm2178793820 (22)_ZNO7QString7toUpperEv
//static
/*void qm2178793820()*/ {
  ;
  (void) ((QString*)this_)->toUpper();
  (void) (QString{}).toUpper();
   auto xptr = (QString (QString::*)() && ) &QString::toUpper;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:516
// [8] QString toCaseFolded() const
// (12)qm2344632948 (29)_ZNKR7QString12toCaseFoldedEv
//static
/*void qm2344632948()*/ {
  ;
  (void) ((QString*)this_)->toCaseFolded();
   auto xptr = (QString (QString::*)() const & ) &QString::toCaseFolded;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:518
// [8] QString toCaseFolded() 
// (12)qm1943214186 (28)_ZNO7QString12toCaseFoldedEv
//static
/*void qm1943214186()*/ {
  ;
  (void) ((QString*)this_)->toCaseFolded();
  (void) (QString{}).toCaseFolded();
   auto xptr = (QString (QString::*)() && ) &QString::toCaseFolded;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:520
// [8] QString trimmed() const
// (12)qm2205547737 (23)_ZNKR7QString7trimmedEv
//static
/*void qm2205547737()*/ {
  ;
  (void) ((QString*)this_)->trimmed();
   auto xptr = (QString (QString::*)() const & ) &QString::trimmed;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:522
// [8] QString trimmed() 
// (11)qm909358900 (22)_ZNO7QString7trimmedEv
//static
/*void qm909358900()*/ {
  ;
  (void) ((QString*)this_)->trimmed();
  (void) (QString{}).trimmed();
   auto xptr = (QString (QString::*)() && ) &QString::trimmed;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:524
// [8] QString simplified() const
// (12)qm3384648692 (27)_ZNKR7QString10simplifiedEv
//static
/*void qm3384648692()*/ {
  ;
  (void) ((QString*)this_)->simplified();
   auto xptr = (QString (QString::*)() const & ) &QString::simplified;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:526
// [8] QString simplified() 
// (12)qm2354050992 (26)_ZNO7QString10simplifiedEv
//static
/*void qm2354050992()*/ {
  ;
  (void) ((QString*)this_)->simplified();
  (void) (QString{}).simplified();
   auto xptr = (QString (QString::*)() && ) &QString::simplified;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:542
// [8] QString & insert(int, const QString &) 
// (12)qm2290747954 (24)_ZN7QString6insertEiRKS_
//static
/*void qm2290747954(int i, const QString & s)*/ {
  int i = *(int*)this_; const QString & s = *(const QString *)this_;
  (void) ((QString*)this_)->insert(i, s);
   auto xptr = (QString & (QString::*)(int, QString const&) ) &QString::insert;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:543
// [8] QString & insert(int, const QStringRef &) 
// (12)qm1449798395 (34)_ZN7QString6insertEiRK10QStringRef
//static
/*void qm1449798395(int i, const QStringRef & s)*/ {
  int i = *(int*)this_; const QStringRef & s = *(const QStringRef *)this_;
  (void) ((QString*)this_)->insert(i, s);
   auto xptr = (QString & (QString::*)(int, QStringRef const&) ) &QString::insert;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:553
// [8] QString & prepend(QChar) 
// (12)qm1651916169 (26)_ZN7QString7prependE5QChar
//static
/*void qm1651916169(QChar c)*/ {
  QChar c = *(QChar*)this_;
  (void) ((QString*)this_)->prepend(c);
   auto xptr = (QString & (QString::*)(QChar) ) &QString::prepend;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:554
// [8] QString & prepend(const QChar *, int) 
// (12)qm1908316084 (29)_ZN7QString7prependEPK5QChari
//static
/*void qm1908316084(const QChar * uc, int len_)*/ {
  const QChar * uc = *(const QChar **)this_; int len_ = *(int*)this_;
  (void) ((QString*)this_)->prepend(uc, len_);
   auto xptr = (QString & (QString::*)(QChar const*, int) ) &QString::prepend;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:555
// [8] QString & prepend(const QString &) 
// (12)qm3518450531 (24)_ZN7QString7prependERKS_
//static
/*void qm3518450531(const QString & s)*/ {
  const QString & s = *(const QString *)this_;
  (void) ((QString*)this_)->prepend(s);
   auto xptr = (QString & (QString::*)(QString const&) ) &QString::prepend;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:556
// [8] QString & prepend(const QStringRef &) 
// (12)qm1641036289 (34)_ZN7QString7prependERK10QStringRef
//static
/*void qm1641036289(const QStringRef & s)*/ {
  const QStringRef & s = *(const QStringRef *)this_;
  (void) ((QString*)this_)->prepend(s);
   auto xptr = (QString & (QString::*)(QStringRef const&) ) &QString::prepend;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:557
// [8] QString & prepend(QLatin1String) 
// (12)qm3463135052 (35)_ZN7QString7prependE13QLatin1String
//static
/*void qm3463135052(QLatin1String s)*/ {
  QLatin1String s = *(QLatin1String*)this_;
  (void) ((QString*)this_)->prepend(s);
   auto xptr = (QString & (QString::*)(QLatin1String) ) &QString::prepend;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:560
// [8] QString & operator+=(QChar) 
// (12)qm2950256156 (20)_ZN7QStringpLE5QChar
//static
/*void qm2950256156(QChar c)*/ {
  QChar c = *(QChar*)this_;
  (void) ((QString*)this_)->operator+=(c);
  // auto xptr = (QString & (QString::*)(QChar) ) &QString::operator+=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:568
// [8] QString & operator+=(QChar::SpecialCharacter) 
// (12)qm1912191841 (40)_ZN7QStringpLEN5QChar16SpecialCharacterE
//static
/*void qm1912191841(QChar::SpecialCharacter c)*/ {
  QChar::SpecialCharacter c = *(QChar::SpecialCharacter*)this_;
  (void) ((QString*)this_)->operator+=(c);
  // auto xptr = (QString & (QString::*)(QChar::SpecialCharacter) ) &QString::operator+=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:569
// [8] QString & operator+=(const QString &) 
// (12)qm3145210923 (18)_ZN7QStringpLERKS_
//static
/*void qm3145210923(const QString & s)*/ {
  const QString & s = *(const QString *)this_;
  (void) ((QString*)this_)->operator+=(s);
  // auto xptr = (QString & (QString::*)(QString const&) ) &QString::operator+=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:570
// [8] QString & operator+=(const QStringRef &) 
// (12)qm1993218010 (28)_ZN7QStringpLERK10QStringRef
//static
/*void qm1993218010(const QStringRef & s)*/ {
  const QStringRef & s = *(const QStringRef *)this_;
  (void) ((QString*)this_)->operator+=(s);
  // auto xptr = (QString & (QString::*)(QStringRef const&) ) &QString::operator+=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:571
// [8] QString & operator+=(QLatin1String) 
// (12)qm3749521981 (29)_ZN7QStringpLE13QLatin1String
//static
/*void qm3749521981(QLatin1String s)*/ {
  QLatin1String s = *(QLatin1String*)this_;
  (void) ((QString*)this_)->operator+=(s);
  // auto xptr = (QString & (QString::*)(QLatin1String) ) &QString::operator+=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:592
// [8] QString & remove(const QRegExp &) 
// (12)qm3485184343 (29)_ZN7QString6removeERK7QRegExp
//static
/*void qm3485184343(const QRegExp & rx)*/ {
  const QRegExp & rx = *(const QRegExp *)this_;
  (void) ((QString*)this_)->remove(rx);
   auto xptr = (QString & (QString::*)(QRegExp const&) ) &QString::remove;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:597
// [8] QString & remove(const QRegularExpression &) 
// (11)qm564906886 (41)_ZN7QString6removeERK18QRegularExpression
//static
/*void qm564906886(const QRegularExpression & re)*/ {
  const QRegularExpression & re = *(const QRegularExpression *)this_;
  (void) ((QString*)this_)->remove(re);
   auto xptr = (QString & (QString::*)(QRegularExpression const&) ) &QString::remove;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:679
// [8] QByteArray toLatin1() const
// (10)qm95324196 (24)_ZNKR7QString8toLatin1Ev
//static
/*void qm95324196()*/ {
  ;
  (void) ((QString*)this_)->toLatin1();
   auto xptr = (QByteArray (QString::*)() const & ) &QString::toLatin1;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:681
// [8] QByteArray toLatin1() 
// (12)qm3684716714 (23)_ZNO7QString8toLatin1Ev
//static
/*void qm3684716714()*/ {
  ;
  (void) ((QString*)this_)->toLatin1();
  (void) (QString{}).toLatin1();
   auto xptr = (QByteArray (QString::*)() && ) &QString::toLatin1;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:683
// [8] QByteArray toUtf8() const
// (11)qm637795128 (22)_ZNKR7QString6toUtf8Ev
//static
/*void qm637795128()*/ {
  ;
  (void) ((QString*)this_)->toUtf8();
   auto xptr = (QByteArray (QString::*)() const & ) &QString::toUtf8;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:685
// [8] QByteArray toUtf8() 
// (12)qm2961647493 (21)_ZNO7QString6toUtf8Ev
//static
/*void qm2961647493()*/ {
  ;
  (void) ((QString*)this_)->toUtf8();
  (void) (QString{}).toUtf8();
   auto xptr = (QByteArray (QString::*)() && ) &QString::toUtf8;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:687
// [8] QByteArray toLocal8Bit() const
// (12)qm1883040184 (28)_ZNKR7QString11toLocal8BitEv
//static
/*void qm1883040184()*/ {
  ;
  (void) ((QString*)this_)->toLocal8Bit();
   auto xptr = (QByteArray (QString::*)() const & ) &QString::toLocal8Bit;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:689
// [8] QByteArray toLocal8Bit() 
// (10)qm29924965 (27)_ZNO7QString11toLocal8BitEv
//static
/*void qm29924965()*/ {
  ;
  (void) ((QString*)this_)->toLocal8Bit();
  (void) (QString{}).toLocal8Bit();
   auto xptr = (QByteArray (QString::*)() && ) &QString::toLocal8Bit;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:699
// [8] QString fromLatin1(const char *, int) 
// (11)qm431606324 (28)_ZN7QString10fromLatin1EPKci
//static
/*void qm431606324(const char * str, int size)*/ {
  const char * str = *(const char **)this_; int size = *(int*)this_;
  (void) QString::fromLatin1(str, size);
   auto xptr = (QString (*)(char const*, int) ) &QString::fromLatin1;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:704
// [8] QString fromUtf8(const char *, int) 
// (12)qm2549669065 (25)_ZN7QString8fromUtf8EPKci
//static
/*void qm2549669065(const char * str, int size)*/ {
  const char * str = *(const char **)this_; int size = *(int*)this_;
  (void) QString::fromUtf8(str, size);
   auto xptr = (QString (*)(char const*, int) ) &QString::fromUtf8;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:708
// [8] QString fromLocal8Bit(const char *, int) 
// (12)qm1810832180 (31)_ZN7QString13fromLocal8BitEPKci
//static
/*void qm1810832180(const char * str, int size)*/ {
  const char * str = *(const char **)this_; int size = *(int*)this_;
  (void) QString::fromLocal8Bit(str, size);
   auto xptr = (QString (*)(char const*, int) ) &QString::fromLocal8Bit;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:712
// [8] QString fromLatin1(const QByteArray &) 
// (12)qm1426400479 (38)_ZN7QString10fromLatin1ERK10QByteArray
//static
/*void qm1426400479(const QByteArray & str)*/ {
  const QByteArray & str = *(const QByteArray *)this_;
  (void) QString::fromLatin1(str);
   auto xptr = (QString (*)(QByteArray const&) ) &QString::fromLatin1;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:714
// [8] QString fromUtf8(const QByteArray &) 
// (12)qm1383287761 (35)_ZN7QString8fromUtf8ERK10QByteArray
//static
/*void qm1383287761(const QByteArray & str)*/ {
  const QByteArray & str = *(const QByteArray *)this_;
  (void) QString::fromUtf8(str);
   auto xptr = (QString (*)(QByteArray const&) ) &QString::fromUtf8;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:716
// [8] QString fromLocal8Bit(const QByteArray &) 
// (12)qm3200731878 (41)_ZN7QString13fromLocal8BitERK10QByteArray
//static
/*void qm3200731878(const QByteArray & str)*/ {
  const QByteArray & str = *(const QByteArray *)this_;
  (void) QString::fromLocal8Bit(str);
   auto xptr = (QString (*)(QByteArray const&) ) &QString::fromLocal8Bit;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:723
// [8] QString fromUtf16(const char16_t *, int) 
// (12)qm2573706211 (27)_ZN7QString9fromUtf16EPKDsi
//static
/*void qm2573706211(const char16_t * str, int size)*/ {
  const char16_t * str = *(const char16_t **)this_; int size = *(int*)this_;
  (void) QString::fromUtf16(str, size);
   auto xptr = (QString (*)(char16_t const*, int) ) &QString::fromUtf16;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:725
// [8] QString fromUcs4(const char32_t *, int) 
// (10)qm35364447 (26)_ZN7QString8fromUcs4EPKDii
//static
/*void qm35364447(const char32_t * str, int size)*/ {
  const char32_t * str = *(const char32_t **)this_; int size = *(int*)this_;
  (void) QString::fromUcs4(str, size);
   auto xptr = (QString (*)(char32_t const*, int) ) &QString::fromUcs4;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:738
// [4] int toWCharArray(wchar_t *) const
// (12)qm1980358981 (29)_ZNK7QString12toWCharArrayEPw
//static
/*void qm1980358981(wchar_t * array)*/ {
  wchar_t * array = *(wchar_t **)this_;
  (void) ((QString*)this_)->toWCharArray(array);
   auto xptr = (int (QString::*)(wchar_t*) const ) &QString::toWCharArray;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:739
// [8] QString fromWCharArray(const wchar_t *, int) 
// (12)qm3462192335 (32)_ZN7QString14fromWCharArrayEPKwi
//static
/*void qm3462192335(const wchar_t * string, int size)*/ {
  const wchar_t * string = *(const wchar_t **)this_; int size = *(int*)this_;
  (void) QString::fromWCharArray(string, size);
   auto xptr = (QString (*)(wchar_t const*, int) ) &QString::fromWCharArray;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:743
// [8] QString & setUtf16(const ushort *, int) 
// (12)qm3259817561 (25)_ZN7QString8setUtf16EPKti
//static
/*void qm3259817561(const unsigned short * utf16, int size)*/ {
  const unsigned short * utf16 = *(const unsigned short **)this_; int size = *(int*)this_;
  (void) ((QString*)this_)->setUtf16(utf16, size);
   auto xptr = (QString & (QString::*)(unsigned short const*, int) ) &QString::setUtf16;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:747
// [4] int compare(const QStringRef &, Qt::CaseSensitivity) const
// (11)qm711110107 (57)_ZNK7QString7compareERK10QStringRefN2Qt15CaseSensitivityE
//static
/*void qm711110107(const QStringRef & s, Qt::CaseSensitivity cs)*/ {
  const QStringRef & s = *(const QStringRef *)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) ((QString*)this_)->compare(s, cs);
   auto xptr = (int (QString::*)(QStringRef const&, Qt::CaseSensitivity) const ) &QString::compare;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:751
// [4] int compare(QChar, Qt::CaseSensitivity) const
// (12)qm1114492932 (49)_ZNK7QString7compareE5QCharN2Qt15CaseSensitivityE
//static
/*void qm1114492932(QChar ch, Qt::CaseSensitivity cs)*/ {
  QChar ch = *(QChar*)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) ((QString*)this_)->compare(ch, cs);
   auto xptr = (int (QString::*)(QChar, Qt::CaseSensitivity) const ) &QString::compare;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:754
// [4] int compare(const QString &, const QString &, Qt::CaseSensitivity) 
// (11)qm828113699 (49)_ZN7QString7compareERKS_S1_N2Qt15CaseSensitivityE
//static
/*void qm828113699(const QString & s1, const QString & s2, Qt::CaseSensitivity cs)*/ {
  const QString & s1 = *(const QString *)this_; const QString & s2 = *(const QString *)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) QString::compare(s1, s2, cs);
   auto xptr = (int (*)(QString const&, QString const&, Qt::CaseSensitivity) ) &QString::compare;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:758
// [4] int compare(const QString &, QLatin1String, Qt::CaseSensitivity) 
// (12)qm3436506041 (61)_ZN7QString7compareERKS_13QLatin1StringN2Qt15CaseSensitivityE
//static
/*void qm3436506041(const QString & s1, QLatin1String s2, Qt::CaseSensitivity cs)*/ {
  const QString & s1 = *(const QString *)this_; QLatin1String s2 = *(QLatin1String*)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) QString::compare(s1, s2, cs);
   auto xptr = (int (*)(QString const&, QLatin1String, Qt::CaseSensitivity) ) &QString::compare;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:761
// [4] int compare(QLatin1String, const QString &, Qt::CaseSensitivity) 
// (12)qm3428124720 (61)_ZN7QString7compareE13QLatin1StringRKS_N2Qt15CaseSensitivityE
//static
/*void qm3428124720(QLatin1String s1, const QString & s2, Qt::CaseSensitivity cs)*/ {
  QLatin1String s1 = *(QLatin1String*)this_; const QString & s2 = *(const QString *)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) QString::compare(s1, s2, cs);
   auto xptr = (int (*)(QLatin1String, QString const&, Qt::CaseSensitivity) ) &QString::compare;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:765
// [4] int compare(const QString &, const QStringRef &, Qt::CaseSensitivity) 
// (12)qm2242910344 (60)_ZN7QString7compareERKS_RK10QStringRefN2Qt15CaseSensitivityE
//static
/*void qm2242910344(const QString & s1, const QStringRef & s2, Qt::CaseSensitivity arg2)*/ {
  const QString & s1 = *(const QString *)this_; const QStringRef & s2 = *(const QStringRef *)this_; Qt::CaseSensitivity arg2 = *(Qt::CaseSensitivity*)this_;
  (void) QString::compare(s1, s2, arg2);
   auto xptr = (int (*)(QString const&, QStringRef const&, Qt::CaseSensitivity) ) &QString::compare;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:769
// [4] int localeAwareCompare(const QString &, const QString &) 
// (12)qm3143506618 (39)_ZN7QString18localeAwareCompareERKS_S1_
//static
/*void qm3143506618(const QString & s1, const QString & s2)*/ {
  const QString & s1 = *(const QString *)this_; const QString & s2 = *(const QString *)this_;
  (void) QString::localeAwareCompare(s1, s2);
   auto xptr = (int (*)(QString const&, QString const&) ) &QString::localeAwareCompare;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:772
// [4] int localeAwareCompare(const QStringRef &) const
// (12)qm1558254779 (47)_ZNK7QString18localeAwareCompareERK10QStringRef
//static
/*void qm1558254779(const QStringRef & s)*/ {
  const QStringRef & s = *(const QStringRef *)this_;
  (void) ((QString*)this_)->localeAwareCompare(s);
   auto xptr = (int (QString::*)(QStringRef const&) const ) &QString::localeAwareCompare;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:773
// [4] int localeAwareCompare(const QString &, const QStringRef &) 
// (11)qm285339385 (50)_ZN7QString18localeAwareCompareERKS_RK10QStringRef
//static
/*void qm285339385(const QString & s1, const QStringRef & s2)*/ {
  const QString & s1 = *(const QString *)this_; const QStringRef & s2 = *(const QStringRef *)this_;
  (void) QString::localeAwareCompare(s1, s2);
   auto xptr = (int (*)(QString const&, QStringRef const&) ) &QString::localeAwareCompare;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:787
// [8] QString & setNum(short, int) 
// (12)qm1183057200 (21)_ZN7QString6setNumEsi
//static
/*void qm1183057200(short arg0, int base)*/ {
  short arg0 = *(short*)this_; int base = *(int*)this_;
  (void) ((QString*)this_)->setNum(arg0, base);
   auto xptr = (QString & (QString::*)(short, int) ) &QString::setNum;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:788
// [8] QString & setNum(ushort, int) 
// (11)qm163943415 (21)_ZN7QString6setNumEti
//static
/*void qm163943415(unsigned short arg0, int base)*/ {
  unsigned short arg0 = *(unsigned short*)this_; int base = *(int*)this_;
  (void) ((QString*)this_)->setNum(arg0, base);
   auto xptr = (QString & (QString::*)(unsigned short, int) ) &QString::setNum;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:789
// [8] QString & setNum(int, int) 
// (12)qm4138336235 (21)_ZN7QString6setNumEii
//static
/*void qm4138336235(int arg0, int base)*/ {
  int arg0 = *(int*)this_; int base = *(int*)this_;
  (void) ((QString*)this_)->setNum(arg0, base);
   auto xptr = (QString & (QString::*)(int, int) ) &QString::setNum;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:790
// [8] QString & setNum(uint, int) 
// (12)qm3716459560 (21)_ZN7QString6setNumEji
//static
/*void qm3716459560(unsigned int arg0, int base)*/ {
  unsigned int arg0 = *(unsigned int*)this_; int base = *(int*)this_;
  (void) ((QString*)this_)->setNum(arg0, base);
   auto xptr = (QString & (QString::*)(unsigned int, int) ) &QString::setNum;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:791
// [8] QString & setNum(long, int) 
// (12)qm2346585006 (21)_ZN7QString6setNumEli
//static
/*void qm2346585006(long arg0, int base)*/ {
  long arg0 = *(long*)this_; int base = *(int*)this_;
  (void) ((QString*)this_)->setNum(arg0, base);
   auto xptr = (QString & (QString::*)(long, int) ) &QString::setNum;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:792
// [8] QString & setNum(ulong, int) 
// (12)qm2462399215 (21)_ZN7QString6setNumEmi
//static
/*void qm2462399215(unsigned long arg0, int base)*/ {
  unsigned long arg0 = *(unsigned long*)this_; int base = *(int*)this_;
  (void) ((QString*)this_)->setNum(arg0, base);
   auto xptr = (QString & (QString::*)(unsigned long, int) ) &QString::setNum;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:795
// [8] QString & setNum(float, char, int) 
// (11)qm552668105 (22)_ZN7QString6setNumEfci
//static
/*void qm552668105(float arg0, char f, int prec)*/ {
  float arg0 = *(float*)this_; char f = *(char*)this_; int prec = *(int*)this_;
  (void) ((QString*)this_)->setNum(arg0, f, prec);
   auto xptr = (QString & (QString::*)(float, char, int) ) &QString::setNum;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:816
// [1] bool operator!=(QLatin1String) const
// (12)qm1877195327 (30)_ZNK7QStringneE13QLatin1String
//static
/*void qm1877195327(QLatin1String s)*/ {
  QLatin1String s = *(QLatin1String*)this_;
  (void) ((QString*)this_)->operator!=(s);
  // auto xptr = (bool (QString::*)(QLatin1String) const ) &QString::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:817
// [1] bool operator<=(QLatin1String) const
// (12)qm1782043068 (30)_ZNK7QStringleE13QLatin1String
//static
/*void qm1782043068(QLatin1String s)*/ {
  QLatin1String s = *(QLatin1String*)this_;
  (void) ((QString*)this_)->operator<=(s);
  // auto xptr = (bool (QString::*)(QLatin1String) const ) &QString::operator<=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:818
// [1] bool operator>=(QLatin1String) const
// (12)qm2548081362 (30)_ZNK7QStringgeE13QLatin1String
//static
/*void qm2548081362(QLatin1String s)*/ {
  QLatin1String s = *(QLatin1String*)this_;
  (void) ((QString*)this_)->operator>=(s);
  // auto xptr = (bool (QString::*)(QLatin1String) const ) &QString::operator>=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:835
// [-2] void QString(const char *) 
// (12)qm2640353187 (17)_ZN7QStringC2EPKc
/*void* qm2640353187(const char * ch)*/{
  const char * ch = *(const char **)this_;
  this_ =  new QString(ch);
  this_ =  new MyQString(ch);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:838
// [-2] void QString(const QByteArray &) 
// (11)qm579962272 (28)_ZN7QStringC2ERK10QByteArray
/*void* qm579962272(const QByteArray & a)*/{
  const QByteArray & a = *(const QByteArray *)this_;
  this_ =  new QString(a);
  this_ =  new MyQString(a);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:841
// [8] QString & operator=(const char *) 
// (12)qm1935043939 (17)_ZN7QStringaSEPKc
//static
/*void qm1935043939(const char * ch)*/ {
  const char * ch = *(const char **)this_;
  (void) ((QString*)this_)->operator=(ch);
  // auto xptr = (QString & (QString::*)(char const*) ) &QString::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:843
// [8] QString & operator=(const QByteArray &) 
// (12)qm1327971211 (28)_ZN7QStringaSERK10QByteArray
//static
/*void qm1327971211(const QByteArray & a)*/ {
  const QByteArray & a = *(const QByteArray *)this_;
  (void) ((QString*)this_)->operator=(a);
  // auto xptr = (QString & (QString::*)(QByteArray const&) ) &QString::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:845
// [8] QString & operator=(char) 
// (12)qm3290041129 (15)_ZN7QStringaSEc
//static
/*void qm3290041129(char c)*/ {
  char c = *(char*)this_;
  (void) ((QString*)this_)->operator=(c);
  // auto xptr = (QString & (QString::*)(char) ) &QString::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:849
// [8] QString & prepend(const char *) 
// (11)qm639305247 (23)_ZN7QString7prependEPKc
//static
/*void qm639305247(const char * s)*/ {
  const char * s = *(const char **)this_;
  (void) ((QString*)this_)->prepend(s);
   auto xptr = (QString & (QString::*)(char const*) ) &QString::prepend;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:851
// [8] QString & prepend(const QByteArray &) 
// (12)qm2684558794 (34)_ZN7QString7prependERK10QByteArray
//static
/*void qm2684558794(const QByteArray & s)*/ {
  const QByteArray & s = *(const QByteArray *)this_;
  (void) ((QString*)this_)->prepend(s);
   auto xptr = (QString & (QString::*)(QByteArray const&) ) &QString::prepend;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:853
// [8] QString & append(const char *) 
// (12)qm1432514561 (22)_ZN7QString6appendEPKc
//static
/*void qm1432514561(const char * s)*/ {
  const char * s = *(const char **)this_;
  (void) ((QString*)this_)->append(s);
   auto xptr = (QString & (QString::*)(char const*) ) &QString::append;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:855
// [8] QString & append(const QByteArray &) 
// (12)qm3641435173 (33)_ZN7QString6appendERK10QByteArray
//static
/*void qm3641435173(const QByteArray & s)*/ {
  const QByteArray & s = *(const QByteArray *)this_;
  (void) ((QString*)this_)->append(s);
   auto xptr = (QString & (QString::*)(QByteArray const&) ) &QString::append;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:857
// [8] QString & insert(int, const char *) 
// (12)qm2825338979 (23)_ZN7QString6insertEiPKc
//static
/*void qm2825338979(int i, const char * s)*/ {
  int i = *(int*)this_; const char * s = *(const char **)this_;
  (void) ((QString*)this_)->insert(i, s);
   auto xptr = (QString & (QString::*)(int, char const*) ) &QString::insert;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:859
// [8] QString & insert(int, const QByteArray &) 
// (12)qm2545487152 (34)_ZN7QString6insertEiRK10QByteArray
//static
/*void qm2545487152(int i, const QByteArray & s)*/ {
  int i = *(int*)this_; const QByteArray & s = *(const QByteArray *)this_;
  (void) ((QString*)this_)->insert(i, s);
   auto xptr = (QString & (QString::*)(int, QByteArray const&) ) &QString::insert;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:861
// [8] QString & operator+=(const char *) 
// (12)qm1500298254 (17)_ZN7QStringpLEPKc
//static
/*void qm1500298254(const char * s)*/ {
  const char * s = *(const char **)this_;
  (void) ((QString*)this_)->operator+=(s);
  // auto xptr = (QString & (QString::*)(char const*) ) &QString::operator+=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:863
// [8] QString & operator+=(const QByteArray &) 
// (12)qm3072143377 (28)_ZN7QStringpLERK10QByteArray
//static
/*void qm3072143377(const QByteArray & s)*/ {
  const QByteArray & s = *(const QByteArray *)this_;
  (void) ((QString*)this_)->operator+=(s);
  // auto xptr = (QString & (QString::*)(QByteArray const&) ) &QString::operator+=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:865
// [8] QString & operator+=(char) 
// (12)qm1002823582 (15)_ZN7QStringpLEc
//static
/*void qm1002823582(char c)*/ {
  char c = *(char*)this_;
  (void) ((QString*)this_)->operator+=(c);
  // auto xptr = (QString & (QString::*)(char) ) &QString::operator+=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:868
// [1] bool operator==(const char *) const
// (12)qm1784464879 (18)_ZNK7QStringeqEPKc
//static
/*void qm1784464879(const char * s)*/ {
  const char * s = *(const char **)this_;
  (void) ((QString*)this_)->operator==(s);
  // auto xptr = (bool (QString::*)(char const*) const ) &QString::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:869
// [1] bool operator!=(const char *) const
// (12)qm2516255854 (18)_ZNK7QStringneEPKc
//static
/*void qm2516255854(const char * s)*/ {
  const char * s = *(const char **)this_;
  (void) ((QString*)this_)->operator!=(s);
  // auto xptr = (bool (QString::*)(char const*) const ) &QString::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:870
// [1] bool operator<(const char *) const
// (12)qm2243107671 (18)_ZNK7QStringltEPKc
//static
/*void qm2243107671(const char * s)*/ {
  const char * s = *(const char **)this_;
  (void) ((QString*)this_)->operator<(s);
  // auto xptr = (bool (QString::*)(char const*) const ) &QString::operator<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:871
// [1] bool operator<=(const char *) const
// (12)qm3627263333 (18)_ZNK7QStringleEPKc
//static
/*void qm3627263333(const char * s)*/ {
  const char * s = *(const char **)this_;
  (void) ((QString*)this_)->operator<=(s);
  // auto xptr = (bool (QString::*)(char const*) const ) &QString::operator<=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:872
// [1] bool operator>(const char *) const
// (12)qm4017417108 (18)_ZNK7QStringgtEPKc
//static
/*void qm4017417108(const char * s)*/ {
  const char * s = *(const char **)this_;
  (void) ((QString*)this_)->operator>(s);
  // auto xptr = (bool (QString::*)(char const*) const ) &QString::operator>;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:873
// [1] bool operator>=(const char *) const
// (12)qm3002357158 (18)_ZNK7QStringgeEPKc
//static
/*void qm3002357158(const char * s)*/ {
  const char * s = *(const char **)this_;
  (void) ((QString*)this_)->operator>=(s);
  // auto xptr = (bool (QString::*)(char const*) const ) &QString::operator>=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:875
// [1] bool operator==(const QByteArray &) const
// (12)qm2122937960 (29)_ZNK7QStringeqERK10QByteArray
//static
/*void qm2122937960(const QByteArray & s)*/ {
  const QByteArray & s = *(const QByteArray *)this_;
  (void) ((QString*)this_)->operator==(s);
  // auto xptr = (bool (QString::*)(QByteArray const&) const ) &QString::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:876
// [1] bool operator!=(const QByteArray &) const
// (12)qm4178907243 (29)_ZNK7QStringneERK10QByteArray
//static
/*void qm4178907243(const QByteArray & s)*/ {
  const QByteArray & s = *(const QByteArray *)this_;
  (void) ((QString*)this_)->operator!=(s);
  // auto xptr = (bool (QString::*)(QByteArray const&) const ) &QString::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:877
// [1] bool operator<(const QByteArray &) const
// (12)qm1701195683 (29)_ZNK7QStringltERK10QByteArray
//static
/*void qm1701195683(const QByteArray & s)*/ {
  const QByteArray & s = *(const QByteArray *)this_;
  (void) ((QString*)this_)->operator<(s);
  // auto xptr = (bool (QString::*)(QByteArray const&) const ) &QString::operator<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:878
// [1] bool operator>(const QByteArray &) const
// (12)qm3505142713 (29)_ZNK7QStringgtERK10QByteArray
//static
/*void qm3505142713(const QByteArray & s)*/ {
  const QByteArray & s = *(const QByteArray *)this_;
  (void) ((QString*)this_)->operator>(s);
  // auto xptr = (bool (QString::*)(QByteArray const&) const ) &QString::operator>;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:879
// [1] bool operator<=(const QByteArray &) const
// (11)qm757694636 (29)_ZNK7QStringleERK10QByteArray
//static
/*void qm757694636(const QByteArray & s)*/ {
  const QByteArray & s = *(const QByteArray *)this_;
  (void) ((QString*)this_)->operator<=(s);
  // auto xptr = (bool (QString::*)(QByteArray const&) const ) &QString::operator<=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:880
// [1] bool operator>=(const QByteArray &) const
// (12)qm2560857270 (29)_ZNK7QStringgeERK10QByteArray
//static
/*void qm2560857270(const QByteArray & s)*/ {
  const QByteArray & s = *(const QByteArray *)this_;
  (void) ((QString*)this_)->operator>=(s);
  // auto xptr = (bool (QString::*)(QByteArray const&) const ) &QString::operator>=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:903
// [8] QString::iterator begin() 
// (12)qm3243568637 (19)_ZN7QString5beginEv
//static
/*void qm3243568637()*/ {
  ;
  (void) ((QString*)this_)->begin();
   auto xptr = (QChar * (QString::*)() ) &QString::begin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:904
// [8] QString::const_iterator begin() const
// (12)qm1376202277 (20)_ZNK7QString5beginEv
//static
/*void qm1376202277()*/ {
  ;
  (void) ((QString*)this_)->begin();
   auto xptr = (const QChar * (QString::*)() const ) &QString::begin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:905
// [8] QString::const_iterator cbegin() const
// (12)qm3220046298 (21)_ZNK7QString6cbeginEv
//static
/*void qm3220046298()*/ {
  ;
  (void) ((QString*)this_)->cbegin();
   auto xptr = (const QChar * (QString::*)() const ) &QString::cbegin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:906
// [8] QString::const_iterator constBegin() const
// (12)qm2785363715 (26)_ZNK7QString10constBeginEv
//static
/*void qm2785363715()*/ {
  ;
  (void) ((QString*)this_)->constBegin();
   auto xptr = (const QChar * (QString::*)() const ) &QString::constBegin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:907
// [8] QString::iterator end() 
// (12)qm3145606575 (17)_ZN7QString3endEv
//static
/*void qm3145606575()*/ {
  ;
  (void) ((QString*)this_)->end();
   auto xptr = (QChar * (QString::*)() ) &QString::end;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:908
// [8] QString::const_iterator end() const
// (12)qm2196026193 (18)_ZNK7QString3endEv
//static
/*void qm2196026193()*/ {
  ;
  (void) ((QString*)this_)->end();
   auto xptr = (const QChar * (QString::*)() const ) &QString::end;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:909
// [8] QString::const_iterator cend() const
// (12)qm2986212180 (19)_ZNK7QString4cendEv
//static
/*void qm2986212180()*/ {
  ;
  (void) ((QString*)this_)->cend();
   auto xptr = (const QChar * (QString::*)() const ) &QString::cend;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:910
// [8] QString::const_iterator constEnd() const
// (12)qm1970006000 (23)_ZNK7QString8constEndEv
//static
/*void qm1970006000()*/ {
  ;
  (void) ((QString*)this_)->constEnd();
   auto xptr = (const QChar * (QString::*)() const ) &QString::constEnd;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:911
// [8] QString::reverse_iterator rbegin() 
// (12)qm2271492426 (20)_ZN7QString6rbeginEv
//static
/*void qm2271492426()*/ {
  ;
  (void) ((QString*)this_)->rbegin();
   auto xptr = (std::reverse_iterator<QChar *> (QString::*)() ) &QString::rbegin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:912
// [8] QString::reverse_iterator rend() 
// (11)qm592146407 (18)_ZN7QString4rendEv
//static
/*void qm592146407()*/ {
  ;
  (void) ((QString*)this_)->rend();
   auto xptr = (std::reverse_iterator<QChar *> (QString::*)() ) &QString::rend;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:913
// [8] QString::const_reverse_iterator rbegin() const
// (11)qm268382319 (21)_ZNK7QString6rbeginEv
//static
/*void qm268382319()*/ {
  ;
  (void) ((QString*)this_)->rbegin();
   auto xptr = (std::reverse_iterator<const QChar *> (QString::*)() const ) &QString::rbegin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:914
// [8] QString::const_reverse_iterator rend() const
// (12)qm2037852778 (19)_ZNK7QString4rendEv
//static
/*void qm2037852778()*/ {
  ;
  (void) ((QString*)this_)->rend();
   auto xptr = (std::reverse_iterator<const QChar *> (QString::*)() const ) &QString::rend;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:915
// [8] QString::const_reverse_iterator crbegin() const
// (12)qm4099891510 (22)_ZNK7QString7crbeginEv
//static
/*void qm4099891510()*/ {
  ;
  (void) ((QString*)this_)->crbegin();
   auto xptr = (std::reverse_iterator<const QChar *> (QString::*)() const ) &QString::crbegin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:916
// [8] QString::const_reverse_iterator crend() const
// (9)qm2357693 (20)_ZNK7QString5crendEv
//static
/*void qm2357693()*/ {
  ;
  (void) ((QString*)this_)->crend();
   auto xptr = (std::reverse_iterator<const QChar *> (QString::*)() const ) &QString::crend;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:926
// [-2] void push_back(QChar) 
// (12)qm3245862995 (28)_ZN7QString9push_backE5QChar
//static
/*void qm3245862995(QChar c)*/ {
  QChar c = *(QChar*)this_;
  (void) ((QString*)this_)->push_back(c);
   auto xptr = (void (QString::*)(QChar) ) &QString::push_back;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:927
// [-2] void push_back(const QString &) 
// (12)qm2716546451 (26)_ZN7QString9push_backERKS_
//static
/*void qm2716546451(const QString & s)*/ {
  const QString & s = *(const QString *)this_;
  (void) ((QString*)this_)->push_back(s);
   auto xptr = (void (QString::*)(QString const&) ) &QString::push_back;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:928
// [-2] void push_front(QChar) 
// (12)qm2703070970 (30)_ZN7QString10push_frontE5QChar
//static
/*void qm2703070970(QChar c)*/ {
  QChar c = *(QChar*)this_;
  (void) ((QString*)this_)->push_front(c);
   auto xptr = (void (QString::*)(QChar) ) &QString::push_front;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:929
// [-2] void push_front(const QString &) 
// (11)qm690977528 (28)_ZN7QString10push_frontERKS_
//static
/*void qm690977528(const QString & s)*/ {
  const QString & s = *(const QString *)this_;
  (void) ((QString*)this_)->push_front(s);
   auto xptr = (void (QString::*)(QString const&) ) &QString::push_front;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:930
// [-2] void shrink_to_fit() 
// (12)qm3554570600 (28)_ZN7QString13shrink_to_fitEv
//static
/*void qm3554570600()*/ {
  ;
  (void) ((QString*)this_)->shrink_to_fit();
   auto xptr = (void (QString::*)() ) &QString::shrink_to_fit;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:932
// [8] QString fromStdString(const std::string &) 
// (11)qm580876478 (81)_ZN7QString13fromStdStringERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//static
/*void qm580876478(const std::__cxx11::basic_string<char> & s)*/ {
  const std::__cxx11::basic_string<char> & s = *(const std::__cxx11::basic_string<char> *)this_;
  (void) QString::fromStdString(s);
   auto xptr = (QString (*)(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) ) &QString::fromStdString;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:933
// [32] std::string toStdString() const
// (12)qm2324107624 (34)_ZNK7QString11toStdStringB5cxx11Ev
//static
/*void qm2324107624()*/ {
  ;
  (void) ((QString*)this_)->toStdString();
   auto xptr = (std::__cxx11::basic_string<char> (QString::*)() const ) &QString::toStdString;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:934
// [8] QString fromStdWString(const std::wstring &) 
// (12)qm2467882572 (82)_ZN7QString14fromStdWStringERKNSt7__cxx1112basic_stringIwSt11char_traitsIwESaIwEEE
//static
/*void qm2467882572(const std::__cxx11::basic_string<wchar_t> & s)*/ {
  const std::__cxx11::basic_string<wchar_t> & s = *(const std::__cxx11::basic_string<wchar_t> *)this_;
  (void) QString::fromStdWString(s);
   auto xptr = (QString (*)(std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > const&) ) &QString::fromStdWString;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:935
// [32] std::wstring toStdWString() const
// (12)qm1267059456 (35)_ZNK7QString12toStdWStringB5cxx11Ev
//static
/*void qm1267059456()*/ {
  ;
  (void) ((QString*)this_)->toStdWString();
   auto xptr = (std::__cxx11::basic_string<wchar_t> (QString::*)() const ) &QString::toStdWString;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:938
// [8] QString fromStdU16String(const std::u16string &) 
// (11)qm379009328 (87)_ZN7QString16fromStdU16StringERKNSt7__cxx1112basic_stringIDsSt11char_traitsIDsESaIDsEEE
//static
/*void qm379009328(const std::__cxx11::basic_string<char16_t, std::char_traits<char16_t>, std::allocator<char16_t>> & s)*/ {
  const std::__cxx11::basic_string<char16_t, std::char_traits<char16_t>, std::allocator<char16_t>> & s = *(const std::__cxx11::basic_string<char16_t, std::char_traits<char16_t>, std::allocator<char16_t>> *)this_;
  (void) QString::fromStdU16String(s);
   auto xptr = (QString (*)(std::__cxx11::basic_string<char16_t, std::char_traits<char16_t>, std::allocator<char16_t> > const&) ) &QString::fromStdU16String;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:939
// [32] std::u16string toStdU16String() const
// (12)qm2055432809 (37)_ZNK7QString14toStdU16StringB5cxx11Ev
//static
/*void qm2055432809()*/ {
  ;
  (void) ((QString*)this_)->toStdU16String();
   auto xptr = (std::__cxx11::basic_string<char16_t, std::char_traits<char16_t>, std::allocator<char16_t>> (QString::*)() const ) &QString::toStdU16String;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:940
// [8] QString fromStdU32String(const std::u32string &) 
// (12)qm4056762253 (87)_ZN7QString16fromStdU32StringERKNSt7__cxx1112basic_stringIDiSt11char_traitsIDiESaIDiEEE
//static
/*void qm4056762253(const std::__cxx11::basic_string<char32_t, std::char_traits<char32_t>, std::allocator<char32_t>> & s)*/ {
  const std::__cxx11::basic_string<char32_t, std::char_traits<char32_t>, std::allocator<char32_t>> & s = *(const std::__cxx11::basic_string<char32_t, std::char_traits<char32_t>, std::allocator<char32_t>> *)this_;
  (void) QString::fromStdU32String(s);
   auto xptr = (QString (*)(std::__cxx11::basic_string<char32_t, std::char_traits<char32_t>, std::allocator<char32_t> > const&) ) &QString::fromStdU32String;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:941
// [32] std::u32string toStdU32String() const
// (12)qm2056173097 (37)_ZNK7QString14toStdU32StringB5cxx11Ev
//static
/*void qm2056173097()*/ {
  ;
  (void) ((QString*)this_)->toStdU32String();
   auto xptr = (std::__cxx11::basic_string<char32_t, std::char_traits<char32_t>, std::allocator<char32_t>> (QString::*)() const ) &QString::toStdU32String;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:955
// [-2] void QString(const QString::Null &) 
// (12)qm3320937164 (25)_ZN7QStringC2ERKNS_4NullE
/*void* qm3320937164(const QString::Null & arg0)*/{
  const QString::Null & arg0 = *(const QString::Null *)this_;
  this_ =  new QString(arg0);
  this_ =  new MyQString(arg0);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:956
// [8] QString & operator=(const QString::Null &) 
// (11)qm983483746 (25)_ZN7QStringaSERKNS_4NullE
//static
/*void qm983483746(const QString::Null & arg0)*/ {
  const QString::Null & arg0 = *(const QString::Null *)this_;
  (void) ((QString*)this_)->operator=(arg0);
  // auto xptr = (QString & (QString::*)(QString::Null const&) ) &QString::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:958
// [1] bool isNull() const
// (12)qm2895552291 (21)_ZNK7QString6isNullEv
//static
/*void qm2895552291()*/ {
  ;
  (void) ((QString*)this_)->isNull();
   auto xptr = (bool (QString::*)() const ) &QString::isNull;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:963
// [1] bool isValidUtf16() const
// (12)qm3672349840 (28)_ZNK7QString12isValidUtf16Ev
//static
/*void qm3672349840()*/ {
  ;
  (void) ((QString*)this_)->isValidUtf16();
   auto xptr = (bool (QString::*)() const ) &QString::isValidUtf16;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:966
// [-2] void QString(int, Qt::Initialization) 
// (12)qm1276233638 (36)_ZN7QStringC2EiN2Qt14InitializationE
/*void* qm1276233638(int size, Qt::Initialization arg1)*/{
  int size = *(int*)this_; Qt::Initialization arg1 = *(Qt::Initialization*)this_;
  this_ =  new QString(size, arg1);
  this_ =  new MyQString(size, arg1);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:967
// [-2] void QString(QStringDataPtr) 
// (12)qm1641427172 (30)_ZN7QStringC2E14QStringDataPtr
/*void* qm1641427172(QStringDataPtr dd)*/{
  QStringDataPtr dd = *(QStringDataPtr*)this_;
  this_ =  new QString(dd);
  this_ =  new MyQString(dd);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1055
// [8] QString::DataPtr & data_ptr() 
// (12)qm4039495165 (22)_ZN7QString8data_ptrEv
//static
/*void qm4039495165()*/ {
  ;
  (void) ((QString*)this_)->data_ptr();
   auto xptr = (QTypedArrayData<unsigned short> *& (QString::*)() ) &QString::data_ptr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

  return fnptrsumval;
} // end ensure_inline_symbol_qstring
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
