//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(textcodec)
// /usr/include/qt/QtCore/qtextcodec.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextcodec.h>
#include <QtCore>
#include "callback_inherit.h"

// QTextCodec is pure virtual: true true
// QTextCodec has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTextCodec_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextCodec_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextCodec_t qt_meta_stringdata_MyQTextCodec = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQTextCodec"
  },
  "MyQTextCodec"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextCodec[] = {
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
class Q_DECL_EXPORT MyQTextCodec : public QTextCodec {
public:
// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [8] QByteArray name()
  virtual QByteArray name() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"name", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QByteArray){};}
    auto prv = (QByteArray*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QByteArray
    } else {
    return (QByteArray){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] int mibEnum()
  virtual int mibEnum() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mibEnum", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Protected purevirtual virtual Indirect Visibility=Default Availability=Available
// [8] QString convertToUnicode(const char *, int, QTextCodec::ConverterState *)
  virtual QString convertToUnicode(const char * in, int length, QTextCodec::ConverterState * state) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"convertToUnicode", &handled, 3, (uint64_t)in, (uint64_t)length, (uint64_t)state, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

// Protected purevirtual virtual Indirect Visibility=Default Availability=Available
// [8] QByteArray convertFromUnicode(const QChar *, int, QTextCodec::ConverterState *)
  virtual QByteArray convertFromUnicode(const QChar * in, int length, QTextCodec::ConverterState * state) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"convertFromUnicode", &handled, 3, (uint64_t)in, (uint64_t)length, (uint64_t)state, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QByteArray){};}
    auto prv = (QByteArray*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QByteArray
    } else {
    return (QByteArray){};
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtextcodec(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:61
// [8] QTextCodec * codecForName(const char *) 
// (12)qm2666991992 (33)_ZN10QTextCodec12codecForNameEPKc
//static
/*void qm2666991992(const char * name)*/ {
  const char * name = *(const char **)this_;
  (void) QTextCodec::codecForName(name);
   auto xptr = (QTextCodec * (*)(char const*) ) &QTextCodec::codecForName;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:113
// [8] QString toUnicode(const char *, int, QTextCodec::ConverterState *) const
// (12)qm2467839826 (52)_ZNK10QTextCodec9toUnicodeEPKciPNS_14ConverterStateE
//static
/*void qm2467839826(const char * in, int length, QTextCodec::ConverterState * state)*/ {
  const char * in = *(const char **)this_; int length = *(int*)this_; QTextCodec::ConverterState * state = *(QTextCodec::ConverterState **)this_;
  (void) ((QTextCodec*)this_)->toUnicode(in, length, state);
   auto xptr = (QString (QTextCodec::*)(char const*, int, QTextCodec::ConverterState*) const ) &QTextCodec::toUnicode;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:115
// [8] QByteArray fromUnicode(const QChar *, int, QTextCodec::ConverterState *) const
// (12)qm3763514860 (60)_ZNK10QTextCodec11fromUnicodeEPK5QChariPNS_14ConverterStateE
//static
/*void qm3763514860(const QChar * in, int length, QTextCodec::ConverterState * state)*/ {
  const QChar * in = *(const QChar **)this_; int length = *(int*)this_; QTextCodec::ConverterState * state = *(QTextCodec::ConverterState **)this_;
  (void) ((QTextCodec*)this_)->fromUnicode(in, length, state);
   auto xptr = (QByteArray (QTextCodec::*)(QChar const*, int, QTextCodec::ConverterState*) const ) &QTextCodec::fromUnicode;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

  return fnptrsumval;
} // end ensure_inline_symbol_qtextcodec
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(textcodec)
#endif // #ifndef QT_MINIMAL
//  footer block end
