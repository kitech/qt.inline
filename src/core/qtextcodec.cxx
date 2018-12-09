//  header block begin

// /usr/include/qt/QtCore/qtextcodec.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextcodec.h>
#include <QtCore>
#include "callback_inherit.h"

// QTextCodec is pure virtual: true
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
// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Protected purevirtual virtual Visibility=Default Availability=Available
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

// Protected purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:122
// [8] QByteArray name()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:124
// [4] int mibEnum()
// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:127
// [8] QString convertToUnicode(const char *, int, QTextCodec::ConverterState *)
// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:128
// [8] QByteArray convertFromUnicode(const QChar *, int, QTextCodec::ConverterState *)
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:61
// [8] QTextCodec * codecForName(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTextCodec12codecForNameERK10QByteArray(QByteArray* name) {
  return (void*)QTextCodec::codecForName(*name);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:62
// [8] QTextCodec * codecForName(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTextCodec12codecForNameEPKc(const char * name) {
  return (void*)QTextCodec::codecForName(name);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:63
// [8] QTextCodec * codecForMib(int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTextCodec11codecForMibEi(int mib) {
  return (void*)QTextCodec::codecForMib(mib);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:65
// [8] QList<QByteArray> availableCodecs()
extern "C" Q_DECL_EXPORT
QList<QByteArray>* C_ZN10QTextCodec15availableCodecsEv() {
  auto rv = QTextCodec::availableCodecs();
return new QList<QByteArray>(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:66
// [-2] QList<int> availableMibs()
extern "C" Q_DECL_EXPORT
QList<int>* C_ZN10QTextCodec13availableMibsEv() {
  auto rv = QTextCodec::availableMibs();
return new QList<int>(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:68
// [8] QTextCodec * codecForLocale()
extern "C" Q_DECL_EXPORT
void* C_ZN10QTextCodec14codecForLocaleEv() {
  return (void*)QTextCodec::codecForLocale();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:69
// [-2] void setCodecForLocale(QTextCodec *)
extern "C" Q_DECL_EXPORT
void C_ZN10QTextCodec17setCodecForLocaleEPS_(QTextCodec * c) {
  QTextCodec::setCodecForLocale(c);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:75
// [8] QTextCodec * codecForHtml(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTextCodec12codecForHtmlERK10QByteArray(QByteArray* ba) {
  return (void*)QTextCodec::codecForHtml(*ba);
}

// Public static Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qtextcodec.h:76
// [8] QTextCodec * codecForHtml(const QByteArray &, QTextCodec *)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZN10QTextCodec12codecForHtmlERK10QByteArrayPS_(QByteArray* ba, QTextCodec * defaultCodec) {
  return (void*)QTextCodec::codecForHtml(*ba, defaultCodec);
}
#endif // QT_VERSION >= 0x040400

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:78
// [8] QTextCodec * codecForUtfText(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTextCodec15codecForUtfTextERK10QByteArray(QByteArray* ba) {
  return (void*)QTextCodec::codecForUtfText(*ba);
}

// Public static Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtCore/qtextcodec.h:79
// [8] QTextCodec * codecForUtfText(const QByteArray &, QTextCodec *)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void* C_ZN10QTextCodec15codecForUtfTextERK10QByteArrayPS_(QByteArray* ba, QTextCodec * defaultCodec) {
  return (void*)QTextCodec::codecForUtfText(*ba, defaultCodec);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:81
// [1] bool canEncode(QChar)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QTextCodec9canEncodeE5QChar(void *this_, QChar* arg0) {
  return (bool)((QTextCodec*)this_)->canEncode(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:83
// [1] bool canEncode(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QTextCodec9canEncodeERK7QString(void *this_, QString* arg0) {
  return (bool)((QTextCodec*)this_)->canEncode(*arg0);
}

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qtextcodec.h:85
// [1] bool canEncode(QStringView)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
bool C_ZNK10QTextCodec9canEncodeE11QStringView(void *this_, QStringView* arg0) {
  return (bool)((QTextCodec*)this_)->canEncode(*arg0);
}
#endif // QT_VERSION >= 0x050a00

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:87
// [8] QString toUnicode(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextCodec9toUnicodeERK10QByteArray(void *this_, QByteArray* arg0) {
  auto rv = ((QTextCodec*)this_)->toUnicode(*arg0);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:88
// [8] QString toUnicode(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextCodec9toUnicodeEPKc(void *this_, const char * chars) {
  auto rv = ((QTextCodec*)this_)->toUnicode(chars);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:90
// [8] QByteArray fromUnicode(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextCodec11fromUnicodeERK7QString(void *this_, QString* uc) {
  auto rv = ((QTextCodec*)this_)->fromUnicode(*uc);
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qtextcodec.h:92
// [8] QByteArray fromUnicode(QStringView)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextCodec11fromUnicodeE11QStringView(void *this_, QStringView* uc) {
  auto rv = ((QTextCodec*)this_)->fromUnicode(*uc);
return new QByteArray(rv);
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:114
// [8] QString toUnicode(const char *, int, QTextCodec::ConverterState *)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextCodec9toUnicodeEPKciPNS_14ConverterStateE(void *this_, const char * in, int length, QTextCodec::ConverterState * state) {
  auto rv = ((QTextCodec*)this_)->toUnicode(in, length, state);
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:116
// [8] QByteArray fromUnicode(const QChar *, int, QTextCodec::ConverterState *)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextCodec11fromUnicodeEPK5QChariPNS_14ConverterStateE(void *this_, const QChar * in, int length, QTextCodec::ConverterState * state) {
  auto rv = ((QTextCodec*)this_)->fromUnicode(in, length, state);
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:119
// [8] QTextDecoder * makeDecoder(QTextCodec::ConversionFlags)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextCodec11makeDecoderE6QFlagsINS_14ConversionFlagEE(void *this_, QFlags<QTextCodec::ConversionFlag> flags) {
  return (void*)((QTextCodec*)this_)->makeDecoder(flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:120
// [8] QTextEncoder * makeEncoder(QTextCodec::ConversionFlags)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextCodec11makeEncoderE6QFlagsINS_14ConversionFlagEE(void *this_, QFlags<QTextCodec::ConversionFlag> flags) {
  return (void*)((QTextCodec*)this_)->makeEncoder(flags);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:122
// [8] QByteArray name()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextCodec4nameEv(void *this_) {
  auto rv = ((QTextCodec*)this_)->name();
return new QByteArray(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:123
// [8] QList<QByteArray> aliases()
extern "C" Q_DECL_EXPORT
QList<QByteArray>* C_ZNK10QTextCodec7aliasesEv(void *this_) {
  auto rv = ((QTextCodec*)this_)->aliases();
return new QList<QByteArray>(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:124
// [4] int mibEnum()
extern "C" Q_DECL_EXPORT
int C_ZNK10QTextCodec7mibEnumEv(void *this_) {
  return (int)((QTextCodec*)this_)->mibEnum();
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
