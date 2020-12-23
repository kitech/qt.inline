//  header block begin

// /usr/include/qt/QtCore/qstring.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstring.h>
#include <QtCore>
#include "callback_inherit.h"

// QLatin1String is pure virtual: false false
// QLatin1String has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qlatin1string(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:90
// [-2] void QLatin1String() 
// (12)qm1602854854 (22)_ZN13QLatin1StringC2Ev
/*void* qm1602854854()*/{
  ;
  this_ =  new QLatin1String();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:91
// [-2] void QLatin1String(const char *) 
// (12)qm1195323157 (24)_ZN13QLatin1StringC2EPKc
/*void* qm1195323157(const char * s)*/{
  const char * s = *(const char **)this_;
  this_ =  new QLatin1String(s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:92
// [-2] void QLatin1String(const char *, const char *) 
// (11)qm312833696 (27)_ZN13QLatin1StringC2EPKcS1_
/*void* qm312833696(const char * f, const char * l)*/{
  const char * f = *(const char **)this_; const char * l = *(const char **)this_;
  this_ =  new QLatin1String(f, l);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:94
// [-2] void QLatin1String(const char *, int) 
// (12)qm2348215733 (25)_ZN13QLatin1StringC2EPKci
/*void* qm2348215733(const char * s, int sz)*/{
  const char * s = *(const char **)this_; int sz = *(int*)this_;
  this_ =  new QLatin1String(s, sz);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:95
// [-2] void QLatin1String(const QByteArray &) 
// (11)qm850927326 (35)_ZN13QLatin1StringC2ERK10QByteArray
/*void* qm850927326(const QByteArray & s)*/{
  const QByteArray & s = *(const QByteArray *)this_;
  this_ =  new QLatin1String(s);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:97
// [8] const char * latin1() const
// (12)qm1889147694 (28)_ZNK13QLatin1String6latin1Ev
//static
/*void qm1889147694()*/ {
  ;
  (void) ((QLatin1String*)this_)->latin1();
   auto xptr = (const char * (QLatin1String::*)() const ) &QLatin1String::latin1;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:98
// [4] int size() const
// (12)qm2813532177 (26)_ZNK13QLatin1String4sizeEv
//static
/*void qm2813532177()*/ {
  ;
  (void) ((QLatin1String*)this_)->size();
   auto xptr = (int (QLatin1String::*)() const ) &QLatin1String::size;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:99
// [8] const char * data() const
// (12)qm1858518556 (26)_ZNK13QLatin1String4dataEv
//static
/*void qm1858518556()*/ {
  ;
  (void) ((QLatin1String*)this_)->data();
   auto xptr = (const char * (QLatin1String::*)() const ) &QLatin1String::data;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:101
// [1] bool isNull() const
// (11)qm111653773 (28)_ZNK13QLatin1String6isNullEv
//static
/*void qm111653773()*/ {
  ;
  (void) ((QLatin1String*)this_)->isNull();
   auto xptr = (bool (QLatin1String::*)() const ) &QLatin1String::isNull;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:102
// [1] bool isEmpty() const
// (11)qm327983279 (29)_ZNK13QLatin1String7isEmptyEv
//static
/*void qm327983279()*/ {
  ;
  (void) ((QLatin1String*)this_)->isEmpty();
   auto xptr = (bool (QLatin1String::*)() const ) &QLatin1String::isEmpty;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:107
// [1] QLatin1Char at(int) const
// (12)qm3496292041 (24)_ZNK13QLatin1String2atEi
//static
/*void qm3496292041(int i)*/ {
  int i = *(int*)this_;
  (void) ((QLatin1String*)this_)->at(i);
   auto xptr = (QLatin1Char (QLatin1String::*)(int) const ) &QLatin1String::at;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:109
// [1] QLatin1Char operator[](int) const
// (12)qm4046206375 (23)_ZNK13QLatin1StringixEi
//static
/*void qm4046206375(int i)*/ {
  int i = *(int*)this_;
  (void) ((QLatin1String*)this_)->operator[](i);
  // auto xptr = (QLatin1Char (QLatin1String::*)(int) const ) &QLatin1String::operator[];
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:111
// [1] QLatin1Char front() const
// (12)qm1072536741 (27)_ZNK13QLatin1String5frontEv
//static
/*void qm1072536741()*/ {
  ;
  (void) ((QLatin1String*)this_)->front();
   auto xptr = (QLatin1Char (QLatin1String::*)() const ) &QLatin1String::front;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:112
// [1] QLatin1Char back() const
// (12)qm2026289137 (26)_ZNK13QLatin1String4backEv
//static
/*void qm2026289137()*/ {
  ;
  (void) ((QLatin1String*)this_)->back();
   auto xptr = (QLatin1Char (QLatin1String::*)() const ) &QLatin1String::back;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:116
// [4] int compare(QLatin1String, Qt::CaseSensitivity) const
// (11)qm336183693 (52)_ZNK13QLatin1String7compareES_N2Qt15CaseSensitivityE
//static
/*void qm336183693(QLatin1String other, Qt::CaseSensitivity cs)*/ {
  QLatin1String other = *(QLatin1String*)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) ((QLatin1String*)this_)->compare(other, cs);
   auto xptr = (int (QLatin1String::*)(QLatin1String, Qt::CaseSensitivity) const ) &QLatin1String::compare;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:118
// [4] int compare(QChar) const
// (12)qm1719577189 (34)_ZNK13QLatin1String7compareE5QChar
//static
/*void qm1719577189(QChar c)*/ {
  QChar c = *(QChar*)this_;
  (void) ((QLatin1String*)this_)->compare(c);
   auto xptr = (int (QLatin1String::*)(QChar) const ) &QLatin1String::compare;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:120
// [4] int compare(QChar, Qt::CaseSensitivity) const
// (12)qm3672536892 (56)_ZNK13QLatin1String7compareE5QCharN2Qt15CaseSensitivityE
//static
/*void qm3672536892(QChar c, Qt::CaseSensitivity cs)*/ {
  QChar c = *(QChar*)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) ((QLatin1String*)this_)->compare(c, cs);
   auto xptr = (int (QLatin1String::*)(QChar, Qt::CaseSensitivity) const ) &QLatin1String::compare;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:125
// [1] bool startsWith(QLatin1String, Qt::CaseSensitivity) const
// (12)qm1785182418 (56)_ZNK13QLatin1String10startsWithES_N2Qt15CaseSensitivityE
//static
/*void qm1785182418(QLatin1String s, Qt::CaseSensitivity cs)*/ {
  QLatin1String s = *(QLatin1String*)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) ((QLatin1String*)this_)->startsWith(s, cs);
   auto xptr = (bool (QLatin1String::*)(QLatin1String, Qt::CaseSensitivity) const ) &QLatin1String::startsWith;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:127
// [1] bool startsWith(QChar) const
// (12)qm2575410126 (38)_ZNK13QLatin1String10startsWithE5QChar
//static
/*void qm2575410126(QChar c)*/ {
  QChar c = *(QChar*)this_;
  (void) ((QLatin1String*)this_)->startsWith(c);
   auto xptr = (bool (QLatin1String::*)(QChar) const ) &QLatin1String::startsWith;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:129
// [1] bool startsWith(QChar, Qt::CaseSensitivity) const
// (12)qm1584079109 (60)_ZNK13QLatin1String10startsWithE5QCharN2Qt15CaseSensitivityE
//static
/*void qm1584079109(QChar c, Qt::CaseSensitivity cs)*/ {
  QChar c = *(QChar*)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) ((QLatin1String*)this_)->startsWith(c, cs);
   auto xptr = (bool (QLatin1String::*)(QChar, Qt::CaseSensitivity) const ) &QLatin1String::startsWith;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:134
// [1] bool endsWith(QLatin1String, Qt::CaseSensitivity) const
// (11)qm520723417 (53)_ZNK13QLatin1String8endsWithES_N2Qt15CaseSensitivityE
//static
/*void qm520723417(QLatin1String s, Qt::CaseSensitivity cs)*/ {
  QLatin1String s = *(QLatin1String*)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) ((QLatin1String*)this_)->endsWith(s, cs);
   auto xptr = (bool (QLatin1String::*)(QLatin1String, Qt::CaseSensitivity) const ) &QLatin1String::endsWith;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:136
// [1] bool endsWith(QChar) const
// (11)qm718950164 (35)_ZNK13QLatin1String8endsWithE5QChar
//static
/*void qm718950164(QChar c)*/ {
  QChar c = *(QChar*)this_;
  (void) ((QLatin1String*)this_)->endsWith(c);
   auto xptr = (bool (QLatin1String::*)(QChar) const ) &QLatin1String::endsWith;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:138
// [1] bool endsWith(QChar, Qt::CaseSensitivity) const
// (12)qm1752210727 (57)_ZNK13QLatin1String8endsWithE5QCharN2Qt15CaseSensitivityE
//static
/*void qm1752210727(QChar c, Qt::CaseSensitivity cs)*/ {
  QChar c = *(QChar*)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) ((QLatin1String*)this_)->endsWith(c, cs);
   auto xptr = (bool (QLatin1String::*)(QChar, Qt::CaseSensitivity) const ) &QLatin1String::endsWith;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:143
// [4] int indexOf(QLatin1String, int, Qt::CaseSensitivity) const
// (11)qm448678691 (53)_ZNK13QLatin1String7indexOfES_iN2Qt15CaseSensitivityE
//static
/*void qm448678691(QLatin1String s, int from, Qt::CaseSensitivity cs)*/ {
  QLatin1String s = *(QLatin1String*)this_; int from = *(int*)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) ((QLatin1String*)this_)->indexOf(s, from, cs);
   auto xptr = (int (QLatin1String::*)(QLatin1String, int, Qt::CaseSensitivity) const ) &QLatin1String::indexOf;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:145
// [4] int indexOf(QChar, int, Qt::CaseSensitivity) const
// (12)qm2622163144 (57)_ZNK13QLatin1String7indexOfE5QChariN2Qt15CaseSensitivityE
//static
/*void qm2622163144(QChar c, int from, Qt::CaseSensitivity cs)*/ {
  QChar c = *(QChar*)this_; int from = *(int*)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) ((QLatin1String*)this_)->indexOf(c, from, cs);
   auto xptr = (int (QLatin1String::*)(QChar, int, Qt::CaseSensitivity) const ) &QLatin1String::indexOf;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:150
// [1] bool contains(QLatin1String, Qt::CaseSensitivity) const
// (11)qm178607101 (53)_ZNK13QLatin1String8containsES_N2Qt15CaseSensitivityE
//static
/*void qm178607101(QLatin1String s, Qt::CaseSensitivity cs)*/ {
  QLatin1String s = *(QLatin1String*)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) ((QLatin1String*)this_)->contains(s, cs);
   auto xptr = (bool (QLatin1String::*)(QLatin1String, Qt::CaseSensitivity) const ) &QLatin1String::contains;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:152
// [1] bool contains(QChar, Qt::CaseSensitivity) const
// (12)qm3086185912 (57)_ZNK13QLatin1String8containsE5QCharN2Qt15CaseSensitivityE
//static
/*void qm3086185912(QChar c, Qt::CaseSensitivity cs)*/ {
  QChar c = *(QChar*)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) ((QLatin1String*)this_)->contains(c, cs);
   auto xptr = (bool (QLatin1String::*)(QChar, Qt::CaseSensitivity) const ) &QLatin1String::contains;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:157
// [4] int lastIndexOf(QLatin1String, int, Qt::CaseSensitivity) const
// (12)qm1889320902 (58)_ZNK13QLatin1String11lastIndexOfES_iN2Qt15CaseSensitivityE
//static
/*void qm1889320902(QLatin1String s, int from, Qt::CaseSensitivity cs)*/ {
  QLatin1String s = *(QLatin1String*)this_; int from = *(int*)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) ((QLatin1String*)this_)->lastIndexOf(s, from, cs);
   auto xptr = (int (QLatin1String::*)(QLatin1String, int, Qt::CaseSensitivity) const ) &QLatin1String::lastIndexOf;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:159
// [4] int lastIndexOf(QChar, int, Qt::CaseSensitivity) const
// (12)qm3321015464 (62)_ZNK13QLatin1String11lastIndexOfE5QChariN2Qt15CaseSensitivityE
//static
/*void qm3321015464(QChar c, int from, Qt::CaseSensitivity cs)*/ {
  QChar c = *(QChar*)this_; int from = *(int*)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) ((QLatin1String*)this_)->lastIndexOf(c, from, cs);
   auto xptr = (int (QLatin1String::*)(QChar, int, Qt::CaseSensitivity) const ) &QLatin1String::lastIndexOf;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:170
// [8] QLatin1String::const_iterator begin() const
// (12)qm1768415051 (27)_ZNK13QLatin1String5beginEv
//static
/*void qm1768415051()*/ {
  ;
  (void) ((QLatin1String*)this_)->begin();
   auto xptr = (const char * (QLatin1String::*)() const ) &QLatin1String::begin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:171
// [8] QLatin1String::const_iterator cbegin() const
// (11)qm366947700 (28)_ZNK13QLatin1String6cbeginEv
//static
/*void qm366947700()*/ {
  ;
  (void) ((QLatin1String*)this_)->cbegin();
   auto xptr = (const char * (QLatin1String::*)() const ) &QLatin1String::cbegin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:172
// [8] QLatin1String::const_iterator end() const
// (12)qm2294980953 (25)_ZNK13QLatin1String3endEv
//static
/*void qm2294980953()*/ {
  ;
  (void) ((QLatin1String*)this_)->end();
   auto xptr = (const char * (QLatin1String::*)() const ) &QLatin1String::end;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:173
// [8] QLatin1String::const_iterator cend() const
// (12)qm3207355764 (26)_ZNK13QLatin1String4cendEv
//static
/*void qm3207355764()*/ {
  ;
  (void) ((QLatin1String*)this_)->cend();
   auto xptr = (const char * (QLatin1String::*)() const ) &QLatin1String::cend;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:178
// [8] QLatin1String::const_reverse_iterator rbegin() const
// (12)qm2781748417 (28)_ZNK13QLatin1String6rbeginEv
//static
/*void qm2781748417()*/ {
  ;
  (void) ((QLatin1String*)this_)->rbegin();
   auto xptr = (std::reverse_iterator<const char *> (QLatin1String::*)() const ) &QLatin1String::rbegin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:179
// [8] QLatin1String::const_reverse_iterator crbegin() const
// (12)qm3315326709 (29)_ZNK13QLatin1String7crbeginEv
//static
/*void qm3315326709()*/ {
  ;
  (void) ((QLatin1String*)this_)->crbegin();
   auto xptr = (std::reverse_iterator<const char *> (QLatin1String::*)() const ) &QLatin1String::crbegin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:180
// [8] QLatin1String::const_reverse_iterator rend() const
// (12)qm2007403594 (26)_ZNK13QLatin1String4rendEv
//static
/*void qm2007403594()*/ {
  ;
  (void) ((QLatin1String*)this_)->rend();
   auto xptr = (std::reverse_iterator<const char *> (QLatin1String::*)() const ) &QLatin1String::rend;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:181
// [8] QLatin1String::const_reverse_iterator crend() const
// (11)qm994248915 (27)_ZNK13QLatin1String5crendEv
//static
/*void qm994248915()*/ {
  ;
  (void) ((QLatin1String*)this_)->crend();
   auto xptr = (std::reverse_iterator<const char *> (QLatin1String::*)() const ) &QLatin1String::crend;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:183
// [16] QLatin1String mid(int) const
// (12)qm2825248724 (25)_ZNK13QLatin1String3midEi
//static
/*void qm2825248724(int pos)*/ {
  int pos = *(int*)this_;
  (void) ((QLatin1String*)this_)->mid(pos);
   auto xptr = (QLatin1String (QLatin1String::*)(int) const ) &QLatin1String::mid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:185
// [16] QLatin1String mid(int, int) const
// (12)qm1736066403 (26)_ZNK13QLatin1String3midEii
//static
/*void qm1736066403(int pos, int n)*/ {
  int pos = *(int*)this_; int n = *(int*)this_;
  (void) ((QLatin1String*)this_)->mid(pos, n);
   auto xptr = (QLatin1String (QLatin1String::*)(int, int) const ) &QLatin1String::mid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:187
// [16] QLatin1String left(int) const
// (11)qm450914763 (26)_ZNK13QLatin1String4leftEi
//static
/*void qm450914763(int n)*/ {
  int n = *(int*)this_;
  (void) ((QLatin1String*)this_)->left(n);
   auto xptr = (QLatin1String (QLatin1String::*)(int) const ) &QLatin1String::left;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:189
// [16] QLatin1String right(int) const
// (12)qm1568591816 (27)_ZNK13QLatin1String5rightEi
//static
/*void qm1568591816(int n)*/ {
  int n = *(int*)this_;
  (void) ((QLatin1String*)this_)->right(n);
   auto xptr = (QLatin1String (QLatin1String::*)(int) const ) &QLatin1String::right;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:191
// [16] QLatin1String chopped(int) const
// (10)qm44400119 (29)_ZNK13QLatin1String7choppedEi
//static
/*void qm44400119(int n)*/ {
  int n = *(int*)this_;
  (void) ((QLatin1String*)this_)->chopped(n);
   auto xptr = (QLatin1String (QLatin1String::*)(int) const ) &QLatin1String::chopped;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:194
// [-2] void chop(int) 
// (11)qm521294421 (25)_ZN13QLatin1String4chopEi
//static
/*void qm521294421(int n)*/ {
  int n = *(int*)this_;
  (void) ((QLatin1String*)this_)->chop(n);
   auto xptr = (void (QLatin1String::*)(int) ) &QLatin1String::chop;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:196
// [-2] void truncate(int) 
// (12)qm2582338795 (29)_ZN13QLatin1String8truncateEi
//static
/*void qm2582338795(int n)*/ {
  int n = *(int*)this_;
  (void) ((QLatin1String*)this_)->truncate(n);
   auto xptr = (void (QLatin1String::*)(int) ) &QLatin1String::truncate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:199
// [16] QLatin1String trimmed() const
// (12)qm4003398933 (29)_ZNK13QLatin1String7trimmedEv
//static
/*void qm4003398933()*/ {
  ;
  (void) ((QLatin1String*)this_)->trimmed();
   auto xptr = (QLatin1String (QLatin1String::*)() const ) &QLatin1String::trimmed;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:201
// [1] bool operator==(const QString &) const
// (12)qm2492462818 (32)_ZNK13QLatin1StringeqERK7QString
//static
/*void qm2492462818(const QString & s)*/ {
  const QString & s = *(const QString *)this_;
  (void) ((QLatin1String*)this_)->operator==(s);
  // auto xptr = (bool (QLatin1String::*)(QString const&) const ) &QLatin1String::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:202
// [1] bool operator!=(const QString &) const
// (12)qm2086182850 (32)_ZNK13QLatin1StringneERK7QString
//static
/*void qm2086182850(const QString & s)*/ {
  const QString & s = *(const QString *)this_;
  (void) ((QLatin1String*)this_)->operator!=(s);
  // auto xptr = (bool (QLatin1String::*)(QString const&) const ) &QLatin1String::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:203
// [1] bool operator>(const QString &) const
// (12)qm1819292857 (32)_ZNK13QLatin1StringgtERK7QString
//static
/*void qm1819292857(const QString & s)*/ {
  const QString & s = *(const QString *)this_;
  (void) ((QLatin1String*)this_)->operator>(s);
  // auto xptr = (bool (QLatin1String::*)(QString const&) const ) &QLatin1String::operator>;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:204
// [1] bool operator<(const QString &) const
// (12)qm2344192794 (32)_ZNK13QLatin1StringltERK7QString
//static
/*void qm2344192794(const QString & s)*/ {
  const QString & s = *(const QString *)this_;
  (void) ((QLatin1String*)this_)->operator<(s);
  // auto xptr = (bool (QLatin1String::*)(QString const&) const ) &QLatin1String::operator<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:205
// [1] bool operator>=(const QString &) const
// (12)qm4224554282 (32)_ZNK13QLatin1StringgeERK7QString
//static
/*void qm4224554282(const QString & s)*/ {
  const QString & s = *(const QString *)this_;
  (void) ((QLatin1String*)this_)->operator>=(s);
  // auto xptr = (bool (QLatin1String::*)(QString const&) const ) &QLatin1String::operator>=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:206
// [1] bool operator<=(const QString &) const
// (11)qm470035081 (32)_ZNK13QLatin1StringleERK7QString
//static
/*void qm470035081(const QString & s)*/ {
  const QString & s = *(const QString *)this_;
  (void) ((QLatin1String*)this_)->operator<=(s);
  // auto xptr = (bool (QLatin1String::*)(QString const&) const ) &QLatin1String::operator<=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:209
// [1] bool operator==(const char *) const
// (12)qm1618139111 (25)_ZNK13QLatin1StringeqEPKc
//static
/*void qm1618139111(const char * s)*/ {
  const char * s = *(const char **)this_;
  (void) ((QLatin1String*)this_)->operator==(s);
  // auto xptr = (bool (QLatin1String::*)(char const*) const ) &QLatin1String::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:210
// [1] bool operator!=(const char *) const
// (12)qm2681542246 (25)_ZNK13QLatin1StringneEPKc
//static
/*void qm2681542246(const char * s)*/ {
  const char * s = *(const char **)this_;
  (void) ((QLatin1String*)this_)->operator!=(s);
  // auto xptr = (bool (QLatin1String::*)(char const*) const ) &QLatin1String::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:211
// [1] bool operator<(const char *) const
// (12)qm2409433439 (25)_ZNK13QLatin1StringltEPKc
//static
/*void qm2409433439(const char * s)*/ {
  const char * s = *(const char **)this_;
  (void) ((QLatin1String*)this_)->operator<(s);
  // auto xptr = (bool (QLatin1String::*)(char const*) const ) &QLatin1String::operator<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:212
// [1] bool operator>(const char *) const
// (12)qm3847944604 (25)_ZNK13QLatin1StringgtEPKc
//static
/*void qm3847944604(const char * s)*/ {
  const char * s = *(const char **)this_;
  (void) ((QLatin1String*)this_)->operator>(s);
  // auto xptr = (bool (QLatin1String::*)(char const*) const ) &QLatin1String::operator>;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:213
// [1] bool operator<=(const char *) const
// (12)qm3525162861 (25)_ZNK13QLatin1StringleEPKc
//static
/*void qm3525162861(const char * s)*/ {
  const char * s = *(const char **)this_;
  (void) ((QLatin1String*)this_)->operator<=(s);
  // auto xptr = (bool (QLatin1String::*)(char const*) const ) &QLatin1String::operator<=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:214
// [1] bool operator>=(const char *) const
// (12)qm3101312942 (25)_ZNK13QLatin1StringgeEPKc
//static
/*void qm3101312942(const char * s)*/ {
  const char * s = *(const char **)this_;
  (void) ((QLatin1String*)this_)->operator>=(s);
  // auto xptr = (bool (QLatin1String::*)(char const*) const ) &QLatin1String::operator>=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:216
// [1] bool operator==(const QByteArray &) const
// (12)qm1021477633 (36)_ZNK13QLatin1StringeqERK10QByteArray
//static
/*void qm1021477633(const QByteArray & s)*/ {
  const QByteArray & s = *(const QByteArray *)this_;
  (void) ((QLatin1String*)this_)->operator==(s);
  // auto xptr = (bool (QLatin1String::*)(QByteArray const&) const ) &QLatin1String::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:217
// [1] bool operator!=(const QByteArray &) const
// (12)qm3145655554 (36)_ZNK13QLatin1StringneERK10QByteArray
//static
/*void qm3145655554(const QByteArray & s)*/ {
  const QByteArray & s = *(const QByteArray *)this_;
  (void) ((QLatin1String*)this_)->operator!=(s);
  // auto xptr = (bool (QLatin1String::*)(QByteArray const&) const ) &QLatin1String::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:218
// [1] bool operator<(const QByteArray &) const
// (11)qm655219402 (36)_ZNK13QLatin1StringltERK10QByteArray
//static
/*void qm655219402(const QByteArray & s)*/ {
  const QByteArray & s = *(const QByteArray *)this_;
  (void) ((QLatin1String*)this_)->operator<(s);
  // auto xptr = (bool (QLatin1String::*)(QByteArray const&) const ) &QLatin1String::operator<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:219
// [1] bool operator>(const QByteArray &) const
// (12)qm2458373840 (36)_ZNK13QLatin1StringgtERK10QByteArray
//static
/*void qm2458373840(const QByteArray & s)*/ {
  const QByteArray & s = *(const QByteArray *)this_;
  (void) ((QLatin1String*)this_)->operator>(s);
  // auto xptr = (bool (QLatin1String::*)(QByteArray const&) const ) &QLatin1String::operator>;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:220
// [1] bool operator<=(const QByteArray &) const
// (12)qm1866626501 (36)_ZNK13QLatin1StringleERK10QByteArray
//static
/*void qm1866626501(const QByteArray & s)*/ {
  const QByteArray & s = *(const QByteArray *)this_;
  (void) ((QLatin1String*)this_)->operator<=(s);
  // auto xptr = (bool (QLatin1String::*)(QByteArray const&) const ) &QLatin1String::operator<=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:221
// [1] bool operator>=(const QByteArray &) const
// (12)qm3670565343 (36)_ZNK13QLatin1StringgeERK10QByteArray
//static
/*void qm3670565343(const QByteArray & s)*/ {
  const QByteArray & s = *(const QByteArray *)this_;
  (void) ((QLatin1String*)this_)->operator>=(s);
  // auto xptr = (bool (QLatin1String::*)(QByteArray const&) const ) &QLatin1String::operator>=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN13QLatin1StringD2Ev(void *this_)*/ {
  delete (QLatin1String*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qlatin1string
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
