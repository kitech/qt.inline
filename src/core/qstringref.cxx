//  header block begin

// /usr/include/qt/QtCore/qstring.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstring.h>
#include <QtCore>
#include "callback_inherit.h"

// QStringRef is pure virtual: false false
// QStringRef has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStringRef_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStringRef_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStringRef_t qt_meta_stringdata_MyQStringRef = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQStringRef"
  },
  "MyQStringRef"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStringRef[] = {
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
class Q_DECL_EXPORT MyQStringRef : public QStringRef {
public:
  virtual ~MyQStringRef() {}
// void QStringRef()
MyQStringRef() : QStringRef() {}
// void QStringRef(const QString *, int, int)
MyQStringRef(const QString * string, int position, int size) : QStringRef(string, position, size) {}
// void QStringRef(const QString *)
MyQStringRef(const QString * string) : QStringRef(string) {}
// void QStringRef(const QStringRef &)
MyQStringRef(const QStringRef & other) : QStringRef(other) {}
// void QStringRef(QStringRef &&)
MyQStringRef(QStringRef && other) : QStringRef(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstringref(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1611
// [-2] void QStringRef() 
// (12)qm1121925256 (19)_ZN10QStringRefC2Ev
/*void* qm1121925256()*/{
  ;
  this_ =  new QStringRef();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1612
// [-2] void QStringRef(const QString *, int, int) 
// (12)qm2542939433 (30)_ZN10QStringRefC2EPK7QStringii
/*void* qm2542939433(const QString * string, int position, int size)*/{
  const QString * string = *(const QString **)this_; int position = *(int*)this_; int size = *(int*)this_;
  this_ =  new QStringRef(string, position, size);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1613
// [-2] void QStringRef(const QString *) 
// (12)qm1313433324 (28)_ZN10QStringRefC2EPK7QString
/*void* qm1313433324(const QString * string)*/{
  const QString * string = *(const QString **)this_;
  this_ =  new QStringRef(string);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1617
// [-2] void QStringRef(const QStringRef &) 
// (11)qm675936364 (22)_ZN10QStringRefC2ERKS_
/*void* qm675936364(const QStringRef & other)*/{
  const QStringRef & other = *(const QStringRef *)this_;
  this_ =  new QStringRef(other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1620
// [-2] void QStringRef(QStringRef &&) 
// (12)qm3682166288 (21)_ZN10QStringRefC2EOS_
/*void* qm3682166288(QStringRef && other)*/{
  QStringRef && other =  static_cast<QStringRef &&>(*(QStringRef *)this_);
  this_ =  new QStringRef(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1621
// [16] QStringRef & operator=(QStringRef &&) 
// (11)qm894409936 (21)_ZN10QStringRefaSEOS_
//static
/*void qm894409936(QStringRef && other)*/ {
  QStringRef && other =  static_cast<QStringRef &&>(*(QStringRef *)this_);
  (void) ((QStringRef*)this_)->operator=(other);
  // auto xptr = (QStringRef & (QStringRef::*)(QStringRef&&) ) &QStringRef::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1622
// [16] QStringRef & operator=(const QStringRef &) 
// (12)qm3015904294 (22)_ZN10QStringRefaSERKS_
//static
/*void qm3015904294(const QStringRef & other)*/ {
  const QStringRef & other = *(const QStringRef *)this_;
  (void) ((QStringRef*)this_)->operator=(other);
  // auto xptr = (QStringRef & (QStringRef::*)(QStringRef const&) ) &QStringRef::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1627
// [-2] void ~QStringRef() 
// (12)qm3741843505 (19)_ZN10QStringRefD2Ev
/*void qm3741843505 (void *this_)*/ {
  delete (QStringRef*)(this_);
}
// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1630
// [8] const QString * string() const
// (11)qm603402291 (25)_ZNK10QStringRef6stringEv
//static
/*void qm603402291()*/ {
  ;
  (void) ((QStringRef*)this_)->string();
   auto xptr = (const QString * (QStringRef::*)() const ) &QStringRef::string;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1631
// [4] int position() const
// (12)qm1018848740 (27)_ZNK10QStringRef8positionEv
//static
/*void qm1018848740()*/ {
  ;
  (void) ((QStringRef*)this_)->position();
   auto xptr = (int (QStringRef::*)() const ) &QStringRef::position;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1632
// [4] int size() const
// (12)qm1508060253 (23)_ZNK10QStringRef4sizeEv
//static
/*void qm1508060253()*/ {
  ;
  (void) ((QStringRef*)this_)->size();
   auto xptr = (int (QStringRef::*)() const ) &QStringRef::size;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1633
// [4] int count() const
// (12)qm2270785771 (24)_ZNK10QStringRef5countEv
//static
/*void qm2270785771()*/ {
  ;
  (void) ((QStringRef*)this_)->count();
   auto xptr = (int (QStringRef::*)() const ) &QStringRef::count;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1634
// [4] int length() const
// (12)qm3088648329 (25)_ZNK10QStringRef6lengthEv
//static
/*void qm3088648329()*/ {
  ;
  (void) ((QStringRef*)this_)->length();
   auto xptr = (int (QStringRef::*)() const ) &QStringRef::length;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1654
// [1] bool contains(const QString &, Qt::CaseSensitivity) const
// (10)qm69367351 (58)_ZNK10QStringRef8containsERK7QStringN2Qt15CaseSensitivityE
//static
/*void qm69367351(const QString & str, Qt::CaseSensitivity cs)*/ {
  const QString & str = *(const QString *)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) ((QStringRef*)this_)->contains(str, cs);
   auto xptr = (bool (QStringRef::*)(QString const&, Qt::CaseSensitivity) const ) &QStringRef::contains;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1655
// [1] bool contains(const QStringRef &, Qt::CaseSensitivity) const
// (12)qm2773359193 (52)_ZNK10QStringRef8containsERKS_N2Qt15CaseSensitivityE
//static
/*void qm2773359193(const QStringRef & str, Qt::CaseSensitivity cs)*/ {
  const QStringRef & str = *(const QStringRef *)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) ((QStringRef*)this_)->contains(str, cs);
   auto xptr = (bool (QStringRef::*)(QStringRef const&, Qt::CaseSensitivity) const ) &QStringRef::contains;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1657
// [1] bool contains(QChar, Qt::CaseSensitivity) const
// (12)qm4143418964 (54)_ZNK10QStringRef8containsE5QCharN2Qt15CaseSensitivityE
//static
/*void qm4143418964(QChar ch, Qt::CaseSensitivity cs)*/ {
  QChar ch = *(QChar*)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) ((QStringRef*)this_)->contains(ch, cs);
   auto xptr = (bool (QStringRef::*)(QChar, Qt::CaseSensitivity) const ) &QStringRef::contains;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1658
// [1] bool contains(QLatin1String, Qt::CaseSensitivity) const
// (12)qm3322208721 (63)_ZNK10QStringRef8containsE13QLatin1StringN2Qt15CaseSensitivityE
//static
/*void qm3322208721(QLatin1String str, Qt::CaseSensitivity cs)*/ {
  QLatin1String str = *(QLatin1String*)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) ((QStringRef*)this_)->contains(str, cs);
   auto xptr = (bool (QStringRef::*)(QLatin1String, Qt::CaseSensitivity) const ) &QStringRef::contains;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1684
// [16] QStringRef chopped(int) const
// (12)qm2875501486 (26)_ZNK10QStringRef7choppedEi
//static
/*void qm2875501486(int n)*/ {
  int n = *(int*)this_;
  (void) ((QStringRef*)this_)->chopped(n);
   auto xptr = (QStringRef (QStringRef::*)(int) const ) &QStringRef::chopped;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1687
// [-2] void truncate(int) 
// (12)qm2632369840 (26)_ZN10QStringRef8truncateEi
//static
/*void qm2632369840(int pos)*/ {
  int pos = *(int*)this_;
  (void) ((QStringRef*)this_)->truncate(pos);
   auto xptr = (void (QStringRef::*)(int) ) &QStringRef::truncate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1688
// [-2] void chop(int) 
// (11)qm106441837 (22)_ZN10QStringRef4chopEi
//static
/*void qm106441837(int n)*/ {
  int n = *(int*)this_;
  (void) ((QStringRef*)this_)->chop(n);
   auto xptr = (void (QStringRef::*)(int) ) &QStringRef::chop;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1716
// [16] QStringRef & operator=(const QString *) 
// (11)qm782022709 (28)_ZN10QStringRefaSEPK7QString
//static
/*void qm782022709(const QString * string)*/ {
  const QString * string = *(const QString **)this_;
  (void) ((QStringRef*)this_)->operator=(string);
  // auto xptr = (QStringRef & (QStringRef::*)(QString const*) ) &QStringRef::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1718
// [8] const QChar * unicode() const
// (12)qm2189810729 (26)_ZNK10QStringRef7unicodeEv
//static
/*void qm2189810729()*/ {
  ;
  (void) ((QStringRef*)this_)->unicode();
   auto xptr = (const QChar * (QStringRef::*)() const ) &QStringRef::unicode;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1724
// [8] const QChar * data() const
// (12)qm2425784912 (23)_ZNK10QStringRef4dataEv
//static
/*void qm2425784912()*/ {
  ;
  (void) ((QStringRef*)this_)->data();
   auto xptr = (const QChar * (QStringRef::*)() const ) &QStringRef::data;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1725
// [8] const QChar * constData() const
// (11)qm552818078 (28)_ZNK10QStringRef9constDataEv
//static
/*void qm552818078()*/ {
  ;
  (void) ((QStringRef*)this_)->constData();
   auto xptr = (const QChar * (QStringRef::*)() const ) &QStringRef::constData;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1727
// [8] QStringRef::const_iterator begin() const
// (11)qm385057476 (24)_ZNK10QStringRef5beginEv
//static
/*void qm385057476()*/ {
  ;
  (void) ((QStringRef*)this_)->begin();
   auto xptr = (const QChar * (QStringRef::*)() const ) &QStringRef::begin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1728
// [8] QStringRef::const_iterator cbegin() const
// (12)qm1755785112 (25)_ZNK10QStringRef6cbeginEv
//static
/*void qm1755785112()*/ {
  ;
  (void) ((QStringRef*)this_)->cbegin();
   auto xptr = (const QChar * (QStringRef::*)() const ) &QStringRef::cbegin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1729
// [8] QStringRef::const_iterator constBegin() const
// (12)qm2958907743 (30)_ZNK10QStringRef10constBeginEv
//static
/*void qm2958907743()*/ {
  ;
  (void) ((QStringRef*)this_)->constBegin();
   auto xptr = (const QChar * (QStringRef::*)() const ) &QStringRef::constBegin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1730
// [8] QStringRef::const_iterator end() const
// (11)qm216374209 (22)_ZNK10QStringRef3endEv
//static
/*void qm216374209()*/ {
  ;
  (void) ((QStringRef*)this_)->end();
   auto xptr = (const QChar * (QStringRef::*)() const ) &QStringRef::end;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1731
// [8] QStringRef::const_iterator cend() const
// (12)qm1098672440 (23)_ZNK10QStringRef4cendEv
//static
/*void qm1098672440()*/ {
  ;
  (void) ((QStringRef*)this_)->cend();
   auto xptr = (const QChar * (QStringRef::*)() const ) &QStringRef::cend;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1732
// [8] QStringRef::const_iterator constEnd() const
// (12)qm1697224899 (27)_ZNK10QStringRef8constEndEv
//static
/*void qm1697224899()*/ {
  ;
  (void) ((QStringRef*)this_)->constEnd();
   auto xptr = (const QChar * (QStringRef::*)() const ) &QStringRef::constEnd;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1733
// [8] QStringRef::const_reverse_iterator rbegin() const
// (12)qm3635811885 (25)_ZNK10QStringRef6rbeginEv
//static
/*void qm3635811885()*/ {
  ;
  (void) ((QStringRef*)this_)->rbegin();
   auto xptr = (std::reverse_iterator<const QChar *> (QStringRef::*)() const ) &QStringRef::rbegin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1734
// [8] QStringRef::const_reverse_iterator crbegin() const
// (12)qm1817839788 (26)_ZNK10QStringRef7crbeginEv
//static
/*void qm1817839788()*/ {
  ;
  (void) ((QStringRef*)this_)->crbegin();
   auto xptr = (std::reverse_iterator<const QChar *> (QStringRef::*)() const ) &QStringRef::crbegin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1735
// [8] QStringRef::const_reverse_iterator rend() const
// (12)qm2314647558 (23)_ZNK10QStringRef4rendEv
//static
/*void qm2314647558()*/ {
  ;
  (void) ((QStringRef*)this_)->rend();
   auto xptr = (std::reverse_iterator<const QChar *> (QStringRef::*)() const ) &QStringRef::rend;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1736
// [8] QStringRef::const_reverse_iterator crend() const
// (12)qm1154962780 (24)_ZNK10QStringRef5crendEv
//static
/*void qm1154962780()*/ {
  ;
  (void) ((QStringRef*)this_)->crend();
   auto xptr = (std::reverse_iterator<const QChar *> (QStringRef::*)() const ) &QStringRef::crend;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1747
// [-2] void clear() 
// (12)qm3042610213 (23)_ZN10QStringRef5clearEv
//static
/*void qm3042610213()*/ {
  ;
  (void) ((QStringRef*)this_)->clear();
   auto xptr = (void (QStringRef::*)() ) &QStringRef::clear;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1749
// [1] bool isEmpty() const
// (12)qm3125638902 (26)_ZNK10QStringRef7isEmptyEv
//static
/*void qm3125638902()*/ {
  ;
  (void) ((QStringRef*)this_)->isEmpty();
   auto xptr = (bool (QStringRef::*)() const ) &QStringRef::isEmpty;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1750
// [1] bool isNull() const
// (12)qm2078259553 (25)_ZNK10QStringRef6isNullEv
//static
/*void qm2078259553()*/ {
  ;
  (void) ((QStringRef*)this_)->isNull();
   auto xptr = (bool (QStringRef::*)() const ) &QStringRef::isNull;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1754
// [2] const QChar at(int) const
// (12)qm1092511962 (21)_ZNK10QStringRef2atEi
//static
/*void qm1092511962(int i)*/ {
  int i = *(int*)this_;
  (void) ((QStringRef*)this_)->at(i);
   auto xptr = (const QChar (QStringRef::*)(int) const ) &QStringRef::at;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1756
// [2] QChar operator[](int) const
// (12)qm3993416169 (20)_ZNK10QStringRefixEi
//static
/*void qm3993416169(int i)*/ {
  int i = *(int*)this_;
  (void) ((QStringRef*)this_)->operator[](i);
  // auto xptr = (QChar (QStringRef::*)(int) const ) &QStringRef::operator[];
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1757
// [2] QChar front() const
// (12)qm1081721130 (24)_ZNK10QStringRef5frontEv
//static
/*void qm1081721130()*/ {
  ;
  (void) ((QStringRef*)this_)->front();
   auto xptr = (QChar (QStringRef::*)() const ) &QStringRef::front;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1758
// [2] QChar back() const
// (12)qm2258011069 (23)_ZNK10QStringRef4backEv
//static
/*void qm2258011069()*/ {
  ;
  (void) ((QStringRef*)this_)->back();
   auto xptr = (QChar (QStringRef::*)() const ) &QStringRef::back;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1762
// [1] bool operator==(const char *) const
// (12)qm3831360895 (22)_ZNK10QStringRefeqEPKc
//static
/*void qm3831360895(const char * s)*/ {
  const char * s = *(const char **)this_;
  (void) ((QStringRef*)this_)->operator==(s);
  // auto xptr = (bool (QStringRef::*)(char const*) const ) &QStringRef::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1763
// [1] bool operator!=(const char *) const
// (11)qm469380350 (22)_ZNK10QStringRefneEPKc
//static
/*void qm469380350(const char * s)*/ {
  const char * s = *(const char **)this_;
  (void) ((QStringRef*)this_)->operator!=(s);
  // auto xptr = (bool (QStringRef::*)(char const*) const ) &QStringRef::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1764
// [1] bool operator<(const char *) const
// (11)qm196228039 (22)_ZNK10QStringRefltEPKc
//static
/*void qm196228039(const char * s)*/ {
  const char * s = *(const char **)this_;
  (void) ((QStringRef*)this_)->operator<(s);
  // auto xptr = (bool (QStringRef::*)(char const*) const ) &QStringRef::operator<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1765
// [1] bool operator<=(const char *) const
// (12)qm1446153717 (22)_ZNK10QStringRefleEPKc
//static
/*void qm1446153717(const char * s)*/ {
  const char * s = *(const char **)this_;
  (void) ((QStringRef*)this_)->operator<=(s);
  // auto xptr = (bool (QStringRef::*)(char const*) const ) &QStringRef::operator<=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1766
// [1] bool operator>(const char *) const
// (12)qm1635107588 (22)_ZNK10QStringRefgtEPKc
//static
/*void qm1635107588(const char * s)*/ {
  const char * s = *(const char **)this_;
  (void) ((QStringRef*)this_)->operator>(s);
  // auto xptr = (bool (QStringRef::*)(char const*) const ) &QStringRef::operator>;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1767
// [1] bool operator>=(const char *) const
// (12)qm1022721334 (22)_ZNK10QStringRefgeEPKc
//static
/*void qm1022721334(const char * s)*/ {
  const char * s = *(const char **)this_;
  (void) ((QStringRef*)this_)->operator>=(s);
  // auto xptr = (bool (QStringRef::*)(char const*) const ) &QStringRef::operator>=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1770
// [4] int compare(const QString &, Qt::CaseSensitivity) const
// (12)qm1903786909 (57)_ZNK10QStringRef7compareERK7QStringN2Qt15CaseSensitivityE
//static
/*void qm1903786909(const QString & s, Qt::CaseSensitivity cs)*/ {
  const QString & s = *(const QString *)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) ((QStringRef*)this_)->compare(s, cs);
   auto xptr = (int (QStringRef::*)(QString const&, Qt::CaseSensitivity) const ) &QStringRef::compare;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1771
// [4] int compare(const QStringRef &, Qt::CaseSensitivity) const
// (11)qm658631103 (51)_ZNK10QStringRef7compareERKS_N2Qt15CaseSensitivityE
//static
/*void qm658631103(const QStringRef & s, Qt::CaseSensitivity cs)*/ {
  const QStringRef & s = *(const QStringRef *)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) ((QStringRef*)this_)->compare(s, cs);
   auto xptr = (int (QStringRef::*)(QStringRef const&, Qt::CaseSensitivity) const ) &QStringRef::compare;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1772
// [4] int compare(QChar, Qt::CaseSensitivity) const
// (12)qm3664247703 (53)_ZNK10QStringRef7compareE5QCharN2Qt15CaseSensitivityE
//static
/*void qm3664247703(QChar c, Qt::CaseSensitivity cs)*/ {
  QChar c = *(QChar*)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) ((QStringRef*)this_)->compare(c, cs);
   auto xptr = (int (QStringRef::*)(QChar, Qt::CaseSensitivity) const ) &QStringRef::compare;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1774
// [4] int compare(QLatin1String, Qt::CaseSensitivity) const
// (12)qm1012462297 (62)_ZNK10QStringRef7compareE13QLatin1StringN2Qt15CaseSensitivityE
//static
/*void qm1012462297(QLatin1String s, Qt::CaseSensitivity cs)*/ {
  QLatin1String s = *(QLatin1String*)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) ((QStringRef*)this_)->compare(s, cs);
   auto xptr = (int (QStringRef::*)(QLatin1String, Qt::CaseSensitivity) const ) &QStringRef::compare;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1776
// [4] int compare(const QByteArray &, Qt::CaseSensitivity) const
// (12)qm3960521765 (61)_ZNK10QStringRef7compareERK10QByteArrayN2Qt15CaseSensitivityE
//static
/*void qm3960521765(const QByteArray & s, Qt::CaseSensitivity cs)*/ {
  const QByteArray & s = *(const QByteArray *)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) ((QStringRef*)this_)->compare(s, cs);
   auto xptr = (int (QStringRef::*)(QByteArray const&, Qt::CaseSensitivity) const ) &QStringRef::compare;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1779
// [4] int compare(const QStringRef &, const QString &, Qt::CaseSensitivity) 
// (12)qm3734431354 (60)_ZN10QStringRef7compareERKS_RK7QStringN2Qt15CaseSensitivityE
//static
/*void qm3734431354(const QStringRef & s1, const QString & s2, Qt::CaseSensitivity arg2)*/ {
  const QStringRef & s1 = *(const QStringRef *)this_; const QString & s2 = *(const QString *)this_; Qt::CaseSensitivity arg2 = *(Qt::CaseSensitivity*)this_;
  (void) QStringRef::compare(s1, s2, arg2);
   auto xptr = (int (*)(QStringRef const&, QString const&, Qt::CaseSensitivity) ) &QStringRef::compare;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1781
// [4] int compare(const QStringRef &, const QStringRef &, Qt::CaseSensitivity) 
// (11)qm173280873 (53)_ZN10QStringRef7compareERKS_S1_N2Qt15CaseSensitivityE
//static
/*void qm173280873(const QStringRef & s1, const QStringRef & s2, Qt::CaseSensitivity arg2)*/ {
  const QStringRef & s1 = *(const QStringRef *)this_; const QStringRef & s2 = *(const QStringRef *)this_; Qt::CaseSensitivity arg2 = *(Qt::CaseSensitivity*)this_;
  (void) QStringRef::compare(s1, s2, arg2);
   auto xptr = (int (*)(QStringRef const&, QStringRef const&, Qt::CaseSensitivity) ) &QStringRef::compare;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1783
// [4] int compare(const QStringRef &, QLatin1String, Qt::CaseSensitivity) 
// (12)qm1655171028 (65)_ZN10QStringRef7compareERKS_13QLatin1StringN2Qt15CaseSensitivityE
//static
/*void qm1655171028(const QStringRef & s1, QLatin1String s2, Qt::CaseSensitivity cs)*/ {
  const QStringRef & s1 = *(const QStringRef *)this_; QLatin1String s2 = *(QLatin1String*)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) QStringRef::compare(s1, s2, cs);
   auto xptr = (int (*)(QStringRef const&, QLatin1String, Qt::CaseSensitivity) ) &QStringRef::compare;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1786
// [4] int localeAwareCompare(const QString &) const
// (11)qm923552305 (47)_ZNK10QStringRef18localeAwareCompareERK7QString
//static
/*void qm923552305(const QString & s)*/ {
  const QString & s = *(const QString *)this_;
  (void) ((QStringRef*)this_)->localeAwareCompare(s);
   auto xptr = (int (QStringRef::*)(QString const&) const ) &QStringRef::localeAwareCompare;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1787
// [4] int localeAwareCompare(const QStringRef &) const
// (12)qm3628188791 (41)_ZNK10QStringRef18localeAwareCompareERKS_
//static
/*void qm3628188791(const QStringRef & s)*/ {
  const QStringRef & s = *(const QStringRef *)this_;
  (void) ((QStringRef*)this_)->localeAwareCompare(s);
   auto xptr = (int (QStringRef::*)(QStringRef const&) const ) &QStringRef::localeAwareCompare;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1789
// [4] int localeAwareCompare(const QStringRef &, const QString &) 
// (12)qm3757536162 (50)_ZN10QStringRef18localeAwareCompareERKS_RK7QString
//static
/*void qm3757536162(const QStringRef & s1, const QString & s2)*/ {
  const QStringRef & s1 = *(const QStringRef *)this_; const QString & s2 = *(const QString *)this_;
  (void) QStringRef::localeAwareCompare(s1, s2);
   auto xptr = (int (*)(QStringRef const&, QString const&) ) &QStringRef::localeAwareCompare;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1790
// [4] int localeAwareCompare(const QStringRef &, const QStringRef &) 
// (12)qm3052505142 (43)_ZN10QStringRef18localeAwareCompareERKS_S1_
//static
/*void qm3052505142(const QStringRef & s1, const QStringRef & s2)*/ {
  const QStringRef & s1 = *(const QStringRef *)this_; const QStringRef & s2 = *(const QStringRef *)this_;
  (void) QStringRef::localeAwareCompare(s1, s2);
   auto xptr = (int (*)(QStringRef const&, QStringRef const&) ) &QStringRef::localeAwareCompare;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

  return fnptrsumval;
} // end ensure_inline_symbol_qstringref
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
