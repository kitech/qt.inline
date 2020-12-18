//  header block begin

// /usr/include/qt/QtCore/qstring.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstring.h>
#include <QtCore>
#include "callback_inherit.h"

// QCharRef is pure virtual: false false
// QCharRef has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQCharRef_t {
  QByteArrayData data[1];
  char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCharRef_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCharRef_t qt_meta_stringdata_MyQCharRef = {
   {
  QT_MOC_LITERAL(0, 0, 10), // "MyQCharRef"
  },
  "MyQCharRef"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCharRef[] = {
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
class Q_DECL_EXPORT MyQCharRef : public QCharRef {
public:
  virtual ~MyQCharRef() {}
// void QCharRef(const QCharRef &)
MyQCharRef(const QCharRef & arg0) : QCharRef(arg0) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcharref(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1194
// [-2] void QCharRef(const QCharRef &) 
// (12)qm4072065807 (19)_ZN8QCharRefC2ERKS_
/*void* qm4072065807(const QCharRef & arg0)*/{
  const QCharRef & arg0 = *(const QCharRef *)this_;
  this_ =  new QCharRef(arg0);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1209
// [16] QCharRef & operator=(QChar) 
// (12)qm4139823875 (21)_ZN8QCharRefaSE5QChar
//static
/*void qm4139823875(QChar c)*/ {
  QChar c = *(QChar*)this_;
  (void) ((QCharRef*)this_)->operator=(c);
  // auto xptr = (QCharRef & (QCharRef::*)(QChar) ) &QCharRef::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1230
// [16] QCharRef & operator=(char) 
// (12)qm1429971112 (16)_ZN8QCharRefaSEc
//static
/*void qm1429971112(char c)*/ {
  char c = *(char*)this_;
  (void) ((QCharRef*)this_)->operator=(c);
  // auto xptr = (QCharRef & (QCharRef::*)(char) ) &QCharRef::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1232
// [16] QCharRef & operator=(uchar) 
// (12)qm3270080800 (16)_ZN8QCharRefaSEh
//static
/*void qm3270080800(unsigned char c)*/ {
  unsigned char c = *(unsigned char*)this_;
  (void) ((QCharRef*)this_)->operator=(c);
  // auto xptr = (QCharRef & (QCharRef::*)(unsigned char) ) &QCharRef::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1235
// [16] QCharRef & operator=(const QCharRef &) 
// (12)qm1765556037 (19)_ZN8QCharRefaSERKS_
//static
/*void qm1765556037(const QCharRef & c)*/ {
  const QCharRef & c = *(const QCharRef *)this_;
  (void) ((QCharRef*)this_)->operator=(c);
  // auto xptr = (QCharRef & (QCharRef::*)(QCharRef const&) ) &QCharRef::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1236
// [16] QCharRef & operator=(ushort) 
// (12)qm3605538159 (16)_ZN8QCharRefaSEt
//static
/*void qm3605538159(unsigned short rc)*/ {
  unsigned short rc = *(unsigned short*)this_;
  (void) ((QCharRef*)this_)->operator=(rc);
  // auto xptr = (QCharRef & (QCharRef::*)(unsigned short) ) &QCharRef::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1237
// [16] QCharRef & operator=(short) 
// (12)qm1217179852 (16)_ZN8QCharRefaSEs
//static
/*void qm1217179852(short rc)*/ {
  short rc = *(short*)this_;
  (void) ((QCharRef*)this_)->operator=(rc);
  // auto xptr = (QCharRef & (QCharRef::*)(short) ) &QCharRef::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1238
// [16] QCharRef & operator=(uint) 
// (11)qm753342476 (16)_ZN8QCharRefaSEj
//static
/*void qm753342476(unsigned int rc)*/ {
  unsigned int rc = *(unsigned int*)this_;
  (void) ((QCharRef*)this_)->operator=(rc);
  // auto xptr = (QCharRef & (QCharRef::*)(unsigned int) ) &QCharRef::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1239
// [16] QCharRef & operator=(int) 
// (12)qm3052292534 (16)_ZN8QCharRefaSEi
//static
/*void qm3052292534(int rc)*/ {
  int rc = *(int*)this_;
  (void) ((QCharRef*)this_)->operator=(rc);
  // auto xptr = (QCharRef & (QCharRef::*)(int) ) &QCharRef::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1242
// [1] bool isNull() const
// (11)qm683166178 (22)_ZNK8QCharRef6isNullEv
//static
/*void qm683166178()*/ {
  ;
  (void) ((QCharRef*)this_)->isNull();
   auto xptr = (bool (QCharRef::*)() const ) &QCharRef::isNull;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1243
// [1] bool isPrint() const
// (12)qm1397035488 (23)_ZNK8QCharRef7isPrintEv
//static
/*void qm1397035488()*/ {
  ;
  (void) ((QCharRef*)this_)->isPrint();
   auto xptr = (bool (QCharRef::*)() const ) &QCharRef::isPrint;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1244
// [1] bool isPunct() const
// (11)qm235546005 (23)_ZNK8QCharRef7isPunctEv
//static
/*void qm235546005()*/ {
  ;
  (void) ((QCharRef*)this_)->isPunct();
   auto xptr = (bool (QCharRef::*)() const ) &QCharRef::isPunct;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1245
// [1] bool isSpace() const
// (12)qm4036751405 (23)_ZNK8QCharRef7isSpaceEv
//static
/*void qm4036751405()*/ {
  ;
  (void) ((QCharRef*)this_)->isSpace();
   auto xptr = (bool (QCharRef::*)() const ) &QCharRef::isSpace;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1246
// [1] bool isMark() const
// (12)qm2395290663 (22)_ZNK8QCharRef6isMarkEv
//static
/*void qm2395290663()*/ {
  ;
  (void) ((QCharRef*)this_)->isMark();
   auto xptr = (bool (QCharRef::*)() const ) &QCharRef::isMark;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1247
// [1] bool isLetter() const
// (12)qm2035996342 (24)_ZNK8QCharRef8isLetterEv
//static
/*void qm2035996342()*/ {
  ;
  (void) ((QCharRef*)this_)->isLetter();
   auto xptr = (bool (QCharRef::*)() const ) &QCharRef::isLetter;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1248
// [1] bool isNumber() const
// (12)qm2547547252 (24)_ZNK8QCharRef8isNumberEv
//static
/*void qm2547547252()*/ {
  ;
  (void) ((QCharRef*)this_)->isNumber();
   auto xptr = (bool (QCharRef::*)() const ) &QCharRef::isNumber;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1249
// [1] bool isLetterOrNumber() 
// (12)qm1488929665 (32)_ZN8QCharRef16isLetterOrNumberEv
//static
/*void qm1488929665()*/ {
  ;
  (void) ((QCharRef*)this_)->isLetterOrNumber();
   auto xptr = (bool (QCharRef::*)() ) &QCharRef::isLetterOrNumber;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1250
// [1] bool isDigit() const
// (12)qm2334318013 (23)_ZNK8QCharRef7isDigitEv
//static
/*void qm2334318013()*/ {
  ;
  (void) ((QCharRef*)this_)->isDigit();
   auto xptr = (bool (QCharRef::*)() const ) &QCharRef::isDigit;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1251
// [1] bool isLower() const
// (12)qm1076831311 (23)_ZNK8QCharRef7isLowerEv
//static
/*void qm1076831311()*/ {
  ;
  (void) ((QCharRef*)this_)->isLower();
   auto xptr = (bool (QCharRef::*)() const ) &QCharRef::isLower;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1252
// [1] bool isUpper() const
// (12)qm4073296140 (23)_ZNK8QCharRef7isUpperEv
//static
/*void qm4073296140()*/ {
  ;
  (void) ((QCharRef*)this_)->isUpper();
   auto xptr = (bool (QCharRef::*)() const ) &QCharRef::isUpper;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1253
// [1] bool isTitleCase() const
// (12)qm4076123715 (28)_ZNK8QCharRef11isTitleCaseEv
//static
/*void qm4076123715()*/ {
  ;
  (void) ((QCharRef*)this_)->isTitleCase();
   auto xptr = (bool (QCharRef::*)() const ) &QCharRef::isTitleCase;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1255
// [4] int digitValue() const
// (11)qm753883773 (27)_ZNK8QCharRef10digitValueEv
//static
/*void qm753883773()*/ {
  ;
  (void) ((QCharRef*)this_)->digitValue();
   auto xptr = (int (QCharRef::*)() const ) &QCharRef::digitValue;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1256
// [2] QChar toLower() const
// (11)qm917808397 (23)_ZNK8QCharRef7toLowerEv
//static
/*void qm917808397()*/ {
  ;
  (void) ((QCharRef*)this_)->toLower();
   auto xptr = (QChar (QCharRef::*)() const ) &QCharRef::toLower;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1257
// [2] QChar toUpper() const
// (12)qm2219970638 (23)_ZNK8QCharRef7toUpperEv
//static
/*void qm2219970638()*/ {
  ;
  (void) ((QCharRef*)this_)->toUpper();
   auto xptr = (QChar (QCharRef::*)() const ) &QCharRef::toUpper;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1258
// [2] QChar toTitleCase() const
// (11)qm147706010 (28)_ZNK8QCharRef11toTitleCaseEv
//static
/*void qm147706010()*/ {
  ;
  (void) ((QCharRef*)this_)->toTitleCase();
   auto xptr = (QChar (QCharRef::*)() const ) &QCharRef::toTitleCase;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1260
// [4] QChar::Category category() const
// (12)qm3918475809 (24)_ZNK8QCharRef8categoryEv
//static
/*void qm3918475809()*/ {
  ;
  (void) ((QCharRef*)this_)->category();
   auto xptr = (QChar::Category (QCharRef::*)() const ) &QCharRef::category;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1261
// [4] QChar::Direction direction() const
// (12)qm3403182288 (25)_ZNK8QCharRef9directionEv
//static
/*void qm3403182288()*/ {
  ;
  (void) ((QCharRef*)this_)->direction();
   auto xptr = (QChar::Direction (QCharRef::*)() const ) &QCharRef::direction;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1262
// [4] QChar::JoiningType joiningType() const
// (12)qm2479723886 (28)_ZNK8QCharRef11joiningTypeEv
//static
/*void qm2479723886()*/ {
  ;
  (void) ((QCharRef*)this_)->joiningType();
   auto xptr = (QChar::JoiningType (QCharRef::*)() const ) &QCharRef::joiningType;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1277
// [1] bool hasMirrored() const
// (12)qm2466859855 (28)_ZNK8QCharRef11hasMirroredEv
//static
/*void qm2466859855()*/ {
  ;
  (void) ((QCharRef*)this_)->hasMirrored();
   auto xptr = (bool (QCharRef::*)() const ) &QCharRef::hasMirrored;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1278
// [2] QChar mirroredChar() const
// (12)qm3460177955 (29)_ZNK8QCharRef12mirroredCharEv
//static
/*void qm3460177955()*/ {
  ;
  (void) ((QCharRef*)this_)->mirroredChar();
   auto xptr = (QChar (QCharRef::*)() const ) &QCharRef::mirroredChar;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1279
// [8] QString decomposition() const
// (11)qm845449112 (30)_ZNK8QCharRef13decompositionEv
//static
/*void qm845449112()*/ {
  ;
  (void) ((QCharRef*)this_)->decomposition();
   auto xptr = (QString (QCharRef::*)() const ) &QCharRef::decomposition;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1280
// [4] QChar::Decomposition decompositionTag() const
// (12)qm3848828391 (33)_ZNK8QCharRef16decompositionTagEv
//static
/*void qm3848828391()*/ {
  ;
  (void) ((QCharRef*)this_)->decompositionTag();
   auto xptr = (QChar::Decomposition (QCharRef::*)() const ) &QCharRef::decompositionTag;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1281
// [1] uchar combiningClass() const
// (12)qm3976944668 (31)_ZNK8QCharRef14combiningClassEv
//static
/*void qm3976944668()*/ {
  ;
  (void) ((QCharRef*)this_)->combiningClass();
   auto xptr = (unsigned char (QCharRef::*)() const ) &QCharRef::combiningClass;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1283
// [4] QChar::Script script() const
// (12)qm2085576565 (22)_ZNK8QCharRef6scriptEv
//static
/*void qm2085576565()*/ {
  ;
  (void) ((QCharRef*)this_)->script();
   auto xptr = (QChar::Script (QCharRef::*)() const ) &QCharRef::script;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1285
// [4] QChar::UnicodeVersion unicodeVersion() const
// (11)qm667644704 (31)_ZNK8QCharRef14unicodeVersionEv
//static
/*void qm667644704()*/ {
  ;
  (void) ((QCharRef*)this_)->unicodeVersion();
   auto xptr = (QChar::UnicodeVersion (QCharRef::*)() const ) &QCharRef::unicodeVersion;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1287
// [1] uchar cell() const
// (12)qm1038475368 (20)_ZNK8QCharRef4cellEv
//static
/*void qm1038475368()*/ {
  ;
  (void) ((QCharRef*)this_)->cell();
   auto xptr = (unsigned char (QCharRef::*)() const ) &QCharRef::cell;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1288
// [1] uchar row() const
// (12)qm4139914167 (19)_ZNK8QCharRef3rowEv
//static
/*void qm4139914167()*/ {
  ;
  (void) ((QCharRef*)this_)->row();
   auto xptr = (unsigned char (QCharRef::*)() const ) &QCharRef::row;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1289
// [-2] void setCell(uchar) 
// (11)qm843522781 (22)_ZN8QCharRef7setCellEh
//static
/*void qm843522781(unsigned char cell)*/ {
  unsigned char cell = *(unsigned char*)this_;
  (void) ((QCharRef*)this_)->setCell(cell);
   auto xptr = (void (QCharRef::*)(unsigned char) ) &QCharRef::setCell;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1290
// [-2] void setRow(uchar) 
// (12)qm2760412024 (21)_ZN8QCharRef6setRowEh
//static
/*void qm2760412024(unsigned char row)*/ {
  unsigned char row = *(unsigned char*)this_;
  (void) ((QCharRef*)this_)->setRow(row);
   auto xptr = (void (QCharRef::*)(unsigned char) ) &QCharRef::setRow;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1295
// [1] char toLatin1() const
// (11)qm672968243 (24)_ZNK8QCharRef8toLatin1Ev
//static
/*void qm672968243()*/ {
  ;
  (void) ((QCharRef*)this_)->toLatin1();
   auto xptr = (char (QCharRef::*)() const ) &QCharRef::toLatin1;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1296
// [2] ushort unicode() const
// (12)qm4133972291 (23)_ZNK8QCharRef7unicodeEv
//static
/*void qm4133972291()*/ {
  ;
  (void) ((QCharRef*)this_)->unicode();
   auto xptr = (unsigned short (QCharRef::*)() const ) &QCharRef::unicode;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1297
// [2] ushort & unicode() 
// (12)qm1732807067 (22)_ZN8QCharRef7unicodeEv
//static
/*void qm1732807067()*/ {
  ;
  (void) ((QCharRef*)this_)->unicode();
   auto xptr = (unsigned short & (QCharRef::*)() ) &QCharRef::unicode;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN8QCharRefD2Ev(void *this_)*/ {
  delete (QCharRef*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcharref
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
