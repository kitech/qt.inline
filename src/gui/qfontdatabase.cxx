// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtGui/qfontdatabase.h
// dst-file: /src/gui/qfontdatabase.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qfontdatabase.h>


#include <qlist.h>
#include <qmetatype.h>
#include <qstring.h>
#include <qstringlist.h>
#include <qfont.h>
// <= header block end

// main block begin =>
void __keep_qfontdatabase_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QFontDatabase_Class_Size()
{
  return sizeof(QFontDatabase);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qfontdatabase.h', line 118, column 16>
//   // proto:  QList<int> QFontDatabase::pointSizes(const QString & family, const QString & style);
// _ZN13QFontDatabase10pointSizesERK7QStringS2_ pointSizes(const class QString &, const class QString &)
extern "C"
QList<int>*
C_ZN13QFontDatabase10pointSizesERK7QStringS2_(void *qthis,
const QString* arg1,
const QString* arg2) {
  auto ret =
  ((QFontDatabase*)qthis)->pointSizes(*((const QString*)arg1),
*((const QString*)arg2));
  return new QList<int>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontdatabase.h', line 120, column 13>
//   // proto:  QString QFontDatabase::styleString(const QFont & font);
// _ZN13QFontDatabase11styleStringERK5QFont styleString(const class QFont &)
extern "C"
QString*
C_ZN13QFontDatabase11styleStringERK5QFont(void *qthis,
const QFont* arg1) {
  auto ret =
  ((QFontDatabase*)qthis)->styleString(*((const QFont*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontdatabase.h', line 119, column 16>
//   // proto:  QList<int> QFontDatabase::smoothSizes(const QString & family, const QString & style);
// _ZN13QFontDatabase11smoothSizesERK7QStringS2_ smoothSizes(const class QString &, const class QString &)
extern "C"
QList<int>*
C_ZN13QFontDatabase11smoothSizesERK7QStringS2_(void *qthis,
const QString* arg1,
const QString* arg2) {
  auto ret =
  ((QFontDatabase*)qthis)->smoothSizes(*((const QString*)arg1),
*((const QString*)arg2));
  return new QList<int>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontdatabase.h', line 117, column 17>
//   // proto:  QStringList QFontDatabase::styles(const QString & family);
// _ZNK13QFontDatabase6stylesERK7QString styles(const class QString &)
extern "C"
QStringList*
C_ZNK13QFontDatabase6stylesERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QFontDatabase*)qthis)->styles(*((const QString*)arg1));
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontdatabase.h', line 130, column 10>
//   // proto:  bool QFontDatabase::italic(const QString & family, const QString & style);
// _ZNK13QFontDatabase6italicERK7QStringS2_ italic(const class QString &, const class QString &)
extern "C"
bool
C_ZNK13QFontDatabase6italicERK7QStringS2_(void *qthis,
const QString* arg1,
const QString* arg2) {
  auto ret =
  ((QFontDatabase*)qthis)->italic(*((const QString*)arg1),
*((const QString*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontdatabase.h', line 111, column 5>
//   // proto:  void QFontDatabase::QFontDatabase();
extern "C"
QFontDatabase*
C_ZN13QFontDatabaseC2Ev() {
  auto ret = new QFontDatabase();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontdatabase.h', line 142, column 24>
//   // proto: static QStringList QFontDatabase::applicationFontFamilies(int id);
// _ZN13QFontDatabase23applicationFontFamiliesEi applicationFontFamilies(int)
extern "C"
QStringList*
C_ZN13QFontDatabase23applicationFontFamiliesEi(int arg1) {
  auto ret =
  QFontDatabase::applicationFontFamilies(arg1);
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontdatabase.h', line 134, column 10>
//   // proto:  bool QFontDatabase::hasFamily(const QString & family);
// _ZNK13QFontDatabase9hasFamilyERK7QString hasFamily(const class QString &)
extern "C"
bool
C_ZNK13QFontDatabase9hasFamilyERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QFontDatabase*)qthis)->hasFamily(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontdatabase.h', line 128, column 10>
//   // proto:  bool QFontDatabase::isFixedPitch(const QString & family, const QString & style);
// _ZNK13QFontDatabase12isFixedPitchERK7QStringS2_ isFixedPitch(const class QString &, const class QString &)
extern "C"
bool
C_ZNK13QFontDatabase12isFixedPitchERK7QStringS2_(void *qthis,
const QString* arg1,
const QString* arg2) {
  auto ret =
  ((QFontDatabase*)qthis)->isFixedPitch(*((const QString*)arg1),
*((const QString*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontdatabase.h', line 138, column 20>
//   // proto: static QString QFontDatabase::writingSystemSample(QFontDatabase::WritingSystem writingSystem);
// _ZN13QFontDatabase19writingSystemSampleENS_13WritingSystemE writingSystemSample(enum QFontDatabase::WritingSystem)
extern "C"
QString*
C_ZN13QFontDatabase19writingSystemSampleENS_13WritingSystemE(QFontDatabase::WritingSystem arg1) {
  auto ret =
  QFontDatabase::writingSystemSample(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontdatabase.h', line 123, column 11>
//   // proto:  QFont QFontDatabase::font(const QString & family, const QString & style, int pointSize);
// _ZNK13QFontDatabase4fontERK7QStringS2_i font(const class QString &, const class QString &, int)
extern "C"
QFont*
C_ZNK13QFontDatabase4fontERK7QStringS2_i(void *qthis,
const QString* arg1,
const QString* arg2,
int arg3) {
  auto ret =
  ((QFontDatabase*)qthis)->font(*((const QString*)arg1),
*((const QString*)arg2),
arg3);
  return new QFont(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontdatabase.h', line 150, column 18>
//   // proto: static QFont QFontDatabase::systemFont(QFontDatabase::SystemFont type);
// _ZN13QFontDatabase10systemFontENS_10SystemFontE systemFont(enum QFontDatabase::SystemFont)
extern "C"
QFont*
C_ZN13QFontDatabase10systemFontENS_10SystemFontE(QFontDatabase::SystemFont arg1) {
  auto ret =
  QFontDatabase::systemFont(arg1);
  return new QFont(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontdatabase.h', line 132, column 9>
//   // proto:  int QFontDatabase::weight(const QString & family, const QString & style);
// _ZNK13QFontDatabase6weightERK7QStringS2_ weight(const class QString &, const class QString &)
extern "C"
int
C_ZNK13QFontDatabase6weightERK7QStringS2_(void *qthis,
const QString* arg1,
const QString* arg2) {
  auto ret =
  ((QFontDatabase*)qthis)->weight(*((const QString*)arg1),
*((const QString*)arg2));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontdatabase.h', line 144, column 17>
//   // proto: static bool QFontDatabase::removeAllApplicationFonts();
// _ZN13QFontDatabase25removeAllApplicationFontsEv removeAllApplicationFonts()
extern "C"
bool
C_ZN13QFontDatabase25removeAllApplicationFontsEv() {
  auto ret =
  QFontDatabase::removeAllApplicationFonts();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontdatabase.h', line 137, column 20>
//   // proto: static QString QFontDatabase::writingSystemName(QFontDatabase::WritingSystem writingSystem);
// _ZN13QFontDatabase17writingSystemNameENS_13WritingSystemE writingSystemName(enum QFontDatabase::WritingSystem)
extern "C"
QString*
C_ZN13QFontDatabase17writingSystemNameENS_13WritingSystemE(QFontDatabase::WritingSystem arg1) {
  auto ret =
  QFontDatabase::writingSystemName(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontdatabase.h', line 141, column 16>
//   // proto: static int QFontDatabase::addApplicationFontFromData(const QByteArray & fontData);
// _ZN13QFontDatabase26addApplicationFontFromDataERK10QByteArray addApplicationFontFromData(const class QByteArray &)
extern "C"
int
C_ZN13QFontDatabase26addApplicationFontFromDataERK10QByteArray(const QByteArray* arg1) {
  auto ret =
  QFontDatabase::addApplicationFontFromData(*((const QByteArray*)arg1));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontdatabase.h', line 147, column 31>
//   // proto: static bool QFontDatabase::supportsThreadedFontRendering();
// _ZN13QFontDatabase29supportsThreadedFontRenderingEv supportsThreadedFontRendering()
extern "C"
bool
C_ZN13QFontDatabase29supportsThreadedFontRenderingEv() {
  auto ret =
  QFontDatabase::supportsThreadedFontRendering();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontdatabase.h', line 135, column 10>
//   // proto:  bool QFontDatabase::isPrivateFamily(const QString & family);
// _ZNK13QFontDatabase15isPrivateFamilyERK7QString isPrivateFamily(const class QString &)
extern "C"
bool
C_ZNK13QFontDatabase15isPrivateFamilyERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QFontDatabase*)qthis)->isPrivateFamily(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontdatabase.h', line 114, column 26>
//   // proto:  QList<QFontDatabase::WritingSystem> QFontDatabase::writingSystems(const QString & family);
// _ZNK13QFontDatabase14writingSystemsERK7QString writingSystems(const class QString &)
extern "C"
QList<QFontDatabase::WritingSystem>*
C_ZNK13QFontDatabase14writingSystemsERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QFontDatabase*)qthis)->writingSystems(*((const QString*)arg1));
  return new QList<QFontDatabase::WritingSystem>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontdatabase.h', line 127, column 10>
//   // proto:  bool QFontDatabase::isScalable(const QString & family, const QString & style);
// _ZNK13QFontDatabase10isScalableERK7QStringS2_ isScalable(const class QString &, const class QString &)
extern "C"
bool
C_ZNK13QFontDatabase10isScalableERK7QStringS2_(void *qthis,
const QString* arg1,
const QString* arg2) {
  auto ret =
  ((QFontDatabase*)qthis)->isScalable(*((const QString*)arg1),
*((const QString*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontdatabase.h', line 143, column 17>
//   // proto: static bool QFontDatabase::removeApplicationFont(int id);
// _ZN13QFontDatabase21removeApplicationFontEi removeApplicationFont(int)
extern "C"
bool
C_ZN13QFontDatabase21removeApplicationFontEi(int arg1) {
  auto ret =
  QFontDatabase::removeApplicationFont(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontdatabase.h', line 121, column 13>
//   // proto:  QString QFontDatabase::styleString(const QFontInfo & fontInfo);
// _ZN13QFontDatabase11styleStringERK9QFontInfo styleString(const class QFontInfo &)
extern "C"
QString*
C_ZN13QFontDatabase11styleStringERK9QFontInfo(void *qthis,
const QFontInfo* arg1) {
  auto ret =
  ((QFontDatabase*)qthis)->styleString(*((const QFontInfo*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontdatabase.h', line 125, column 10>
//   // proto:  bool QFontDatabase::isBitmapScalable(const QString & family, const QString & style);
// _ZNK13QFontDatabase16isBitmapScalableERK7QStringS2_ isBitmapScalable(const class QString &, const class QString &)
extern "C"
bool
C_ZNK13QFontDatabase16isBitmapScalableERK7QStringS2_(void *qthis,
const QString* arg1,
const QString* arg2) {
  auto ret =
  ((QFontDatabase*)qthis)->isBitmapScalable(*((const QString*)arg1),
*((const QString*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontdatabase.h', line 126, column 10>
//   // proto:  bool QFontDatabase::isSmoothlyScalable(const QString & family, const QString & style);
// _ZNK13QFontDatabase18isSmoothlyScalableERK7QStringS2_ isSmoothlyScalable(const class QString &, const class QString &)
extern "C"
bool
C_ZNK13QFontDatabase18isSmoothlyScalableERK7QStringS2_(void *qthis,
const QString* arg1,
const QString* arg2) {
  auto ret =
  ((QFontDatabase*)qthis)->isSmoothlyScalable(*((const QString*)arg1),
*((const QString*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontdatabase.h', line 131, column 10>
//   // proto:  bool QFontDatabase::bold(const QString & family, const QString & style);
// _ZNK13QFontDatabase4boldERK7QStringS2_ bold(const class QString &, const class QString &)
extern "C"
bool
C_ZNK13QFontDatabase4boldERK7QStringS2_(void *qthis,
const QString* arg1,
const QString* arg2) {
  auto ret =
  ((QFontDatabase*)qthis)->bold(*((const QString*)arg1),
*((const QString*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontdatabase.h', line 140, column 16>
//   // proto: static int QFontDatabase::addApplicationFont(const QString & fileName);
// _ZN13QFontDatabase18addApplicationFontERK7QString addApplicationFont(const class QString &)
extern "C"
int
C_ZN13QFontDatabase18addApplicationFontERK7QString(const QString* arg1) {
  auto ret =
  QFontDatabase::addApplicationFont(*((const QString*)arg1));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontdatabase.h', line 116, column 17>
//   // proto:  QStringList QFontDatabase::families(QFontDatabase::WritingSystem writingSystem);
// _ZNK13QFontDatabase8familiesENS_13WritingSystemE families(enum QFontDatabase::WritingSystem)
extern "C"
QStringList*
C_ZNK13QFontDatabase8familiesENS_13WritingSystemE(void *qthis,
QFontDatabase::WritingSystem arg1) {
  auto ret =
  ((QFontDatabase*)qthis)->families(arg1);
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontdatabase.h', line 109, column 23>
//   // proto: static QList<int> QFontDatabase::standardSizes();
// _ZN13QFontDatabase13standardSizesEv standardSizes()
extern "C"
QList<int>*
C_ZN13QFontDatabase13standardSizesEv() {
  auto ret =
  QFontDatabase::standardSizes();
  return new QList<int>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontdatabase.h', line 113, column 26>
//   // proto:  QList<QFontDatabase::WritingSystem> QFontDatabase::writingSystems();
// _ZNK13QFontDatabase14writingSystemsEv writingSystems()
extern "C"
QList<QFontDatabase::WritingSystem>*
C_ZNK13QFontDatabase14writingSystemsEv(void *qthis) {
  auto ret =
  ((QFontDatabase*)qthis)->writingSystems();
  return new QList<QFontDatabase::WritingSystem>(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

