// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtCore/qtranslator.h
// dst-file: /src/core/qtranslator.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qtranslator.h>


#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qtranslator_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QTranslator_Class_Size()
{
  return sizeof(QTranslator);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qtranslator.h', line 56, column 5>
//   // proto:  const QMetaObject * QTranslator::metaObject();
// _ZNK11QTranslator10metaObjectEv metaObject()
extern "C"
void*
C_ZNK11QTranslator10metaObjectEv(void *qthis) {
  auto ret =
  ((QTranslator*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtranslator.h', line 58, column 14>
//   // proto:  void QTranslator::QTranslator(QObject * parent);
extern "C"
QTranslator*
C_ZN11QTranslatorC2EP7QObject(QObject * arg1) {
  auto ret = new QTranslator(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtranslator.h', line 64, column 18>
//   // proto:  bool QTranslator::isEmpty();
// _ZNK11QTranslator7isEmptyEv isEmpty()
extern "C"
bool
C_ZNK11QTranslator7isEmptyEv(void *qthis) {
  auto ret =
  ((QTranslator*)qthis)->isEmpty();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QTranslator::~QTranslator();
extern "C"
void C_ZN11QTranslatorD2Ev(void *qthis) {
  delete (QTranslator*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtranslator.h', line 66, column 10>
//   // proto:  bool QTranslator::load(const QString & filename, const QString & directory, const QString & search_delimiters, const QString & suffix);
// _ZN11QTranslator4loadERK7QStringS2_S2_S2_ load(const class QString &, const class QString &, const class QString &, const class QString &)
extern "C"
bool
C_ZN11QTranslator4loadERK7QStringS2_S2_S2_(void *qthis,
const QString* arg1,
const QString* arg2,
const QString* arg3,
const QString* arg4) {
  auto ret =
  ((QTranslator*)qthis)->load(*((const QString*)arg1),
*((const QString*)arg2),
*((const QString*)arg3),
*((const QString*)arg4));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qtranslator.h', line 61, column 21>
//   // proto:  QString QTranslator::translate(const char * context, const char * sourceText, const char * disambiguation, int n);
// _ZNK11QTranslator9translateEPKcS1_S1_i translate(const char *, const char *, const char *, int)
extern "C"
QString*
C_ZNK11QTranslator9translateEPKcS1_S1_i(void *qthis,
const char * arg1,
const char * arg2,
const char * arg3,
int arg4) {
  auto ret =
  ((QTranslator*)qthis)->translate(arg1,
arg2,
arg3,
arg4);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtranslator.h', line 75, column 10>
//   // proto:  bool QTranslator::load(const uchar * data, int len, const QString & directory);
// _ZN11QTranslator4loadEPKhiRK7QString load(const uchar *, int, const class QString &)
extern "C"
bool
C_ZN11QTranslator4loadEPKhiRK7QString(void *qthis,
const uchar * arg1,
int arg2,
const QString* arg3) {
  auto ret =
  ((QTranslator*)qthis)->load(arg1,
arg2,
*((const QString*)arg3));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qtranslator.h', line 70, column 10>
//   // proto:  bool QTranslator::load(const QLocale & locale, const QString & filename, const QString & prefix, const QString & directory, const QString & suffix);
// _ZN11QTranslator4loadERK7QLocaleRK7QStringS5_S5_S5_ load(const class QLocale &, const class QString &, const class QString &, const class QString &, const class QString &)
extern "C"
bool
C_ZN11QTranslator4loadERK7QLocaleRK7QStringS5_S5_S5_(void *qthis,
const QLocale* arg1,
const QString* arg2,
const QString* arg3,
const QString* arg4,
const QString* arg5) {
  auto ret =
  ((QTranslator*)qthis)->load(*((const QLocale*)arg1),
*((const QString*)arg2),
*((const QString*)arg3),
*((const QString*)arg4),
*((const QString*)arg5));
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// QTranslator_SlotProxy here
class QTranslator_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTranslator_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qtranslator.moc"

extern "C" {
  QTranslator_SlotProxy* QTranslator_SlotProxy_new()
  {
    return new QTranslator_SlotProxy();
  }
};

// <= body block end

