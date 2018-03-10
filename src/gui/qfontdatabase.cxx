//  header block begin
// /usr/include/qt/QtGui/qfontdatabase.h
#ifndef protected
#define protected public
#endif
#include <qfontdatabase.h>
#include <QtGui>
#include "callback_inherit.h"

// QFontDatabase is pure virtual: false
// QFontDatabase has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQFontDatabase : public QFontDatabase {
public:
  virtual ~MyQFontDatabase() {}
// void QFontDatabase()
MyQFontDatabase() : QFontDatabase() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:118
// [-2] void QFontDatabase()
extern "C" Q_DECL_EXPORT
void* C_ZN13QFontDatabaseC2Ev() {
  return  new QFontDatabase();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:123
// [8] QStringList families(enum QFontDatabase::WritingSystem)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QFontDatabase8familiesENS_13WritingSystemE(void *this_, QFontDatabase::WritingSystem writingSystem) {
  auto rv = ((QFontDatabase*)this_)->families(writingSystem);
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:124
// [8] QStringList styles(const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QFontDatabase6stylesERK7QString(void *this_, QString* family) {
  auto rv = ((QFontDatabase*)this_)->styles(*family);
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:127
// [8] QString styleString(const class QFont &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QFontDatabase11styleStringERK5QFont(void *this_, QFont* font) {
  auto rv = ((QFontDatabase*)this_)->styleString(*font);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:128
// [8] QString styleString(const class QFontInfo &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QFontDatabase11styleStringERK9QFontInfo(void *this_, QFontInfo* fontInfo) {
  auto rv = ((QFontDatabase*)this_)->styleString(*fontInfo);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:130
// [16] QFont font(const class QString &, const class QString &, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QFontDatabase4fontERK7QStringS2_i(void *this_, QString* family, QString* style, int pointSize) {
  auto rv = ((QFontDatabase*)this_)->font(*family, *style, pointSize);
return new QFont(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:132
// [1] bool isBitmapScalable(const class QString &, const class QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QFontDatabase16isBitmapScalableERK7QStringS2_(void *this_, QString* family, QString* style) {
  return (bool)((QFontDatabase*)this_)->isBitmapScalable(*family, *style);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:133
// [1] bool isSmoothlyScalable(const class QString &, const class QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QFontDatabase18isSmoothlyScalableERK7QStringS2_(void *this_, QString* family, QString* style) {
  return (bool)((QFontDatabase*)this_)->isSmoothlyScalable(*family, *style);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:134
// [1] bool isScalable(const class QString &, const class QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QFontDatabase10isScalableERK7QStringS2_(void *this_, QString* family, QString* style) {
  return (bool)((QFontDatabase*)this_)->isScalable(*family, *style);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:135
// [1] bool isFixedPitch(const class QString &, const class QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QFontDatabase12isFixedPitchERK7QStringS2_(void *this_, QString* family, QString* style) {
  return (bool)((QFontDatabase*)this_)->isFixedPitch(*family, *style);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:137
// [1] bool italic(const class QString &, const class QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QFontDatabase6italicERK7QStringS2_(void *this_, QString* family, QString* style) {
  return (bool)((QFontDatabase*)this_)->italic(*family, *style);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:138
// [1] bool bold(const class QString &, const class QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QFontDatabase4boldERK7QStringS2_(void *this_, QString* family, QString* style) {
  return (bool)((QFontDatabase*)this_)->bold(*family, *style);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:139
// [4] int weight(const class QString &, const class QString &)
extern "C" Q_DECL_EXPORT
int C_ZNK13QFontDatabase6weightERK7QStringS2_(void *this_, QString* family, QString* style) {
  return (int)((QFontDatabase*)this_)->weight(*family, *style);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:141
// [1] bool hasFamily(const class QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QFontDatabase9hasFamilyERK7QString(void *this_, QString* family) {
  return (bool)((QFontDatabase*)this_)->hasFamily(*family);
}

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtGui/qfontdatabase.h:142
// [1] bool isPrivateFamily(const class QString &)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
bool C_ZNK13QFontDatabase15isPrivateFamilyERK7QString(void *this_, QString* family) {
  return (bool)((QFontDatabase*)this_)->isPrivateFamily(*family);
}
#endif // QT_VERSION >= 0x050500

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:144
// [8] QString writingSystemName(enum QFontDatabase::WritingSystem)
extern "C" Q_DECL_EXPORT
void* C_ZN13QFontDatabase17writingSystemNameENS_13WritingSystemE(QFontDatabase::WritingSystem writingSystem) {
  auto rv = QFontDatabase::writingSystemName(writingSystem);
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:145
// [8] QString writingSystemSample(enum QFontDatabase::WritingSystem)
extern "C" Q_DECL_EXPORT
void* C_ZN13QFontDatabase19writingSystemSampleENS_13WritingSystemE(QFontDatabase::WritingSystem writingSystem) {
  auto rv = QFontDatabase::writingSystemSample(writingSystem);
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qfontdatabase.h:147
// [4] int addApplicationFont(const class QString &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
int C_ZN13QFontDatabase18addApplicationFontERK7QString(QString* fileName) {
  return (int)QFontDatabase::addApplicationFont(*fileName);
}
#endif // QT_VERSION >= 0x040200

// Public static Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qfontdatabase.h:148
// [4] int addApplicationFontFromData(const class QByteArray &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
int C_ZN13QFontDatabase26addApplicationFontFromDataERK10QByteArray(QByteArray* fontData) {
  return (int)QFontDatabase::addApplicationFontFromData(*fontData);
}
#endif // QT_VERSION >= 0x040200

// Public static Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qfontdatabase.h:149
// [8] QStringList applicationFontFamilies(int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZN13QFontDatabase23applicationFontFamiliesEi(int id) {
  auto rv = QFontDatabase::applicationFontFamilies(id);
return new QStringList(rv);
}
#endif // QT_VERSION >= 0x040200

// Public static Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qfontdatabase.h:150
// [1] bool removeApplicationFont(int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
bool C_ZN13QFontDatabase21removeApplicationFontEi(int id) {
  return (bool)QFontDatabase::removeApplicationFont(id);
}
#endif // QT_VERSION >= 0x040200

// Public static Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qfontdatabase.h:151
// [1] bool removeAllApplicationFonts()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
bool C_ZN13QFontDatabase25removeAllApplicationFontsEv() {
  return (bool)QFontDatabase::removeAllApplicationFonts();
}
#endif // QT_VERSION >= 0x040200

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:154
// [1] bool supportsThreadedFontRendering()
extern "C" Q_DECL_EXPORT
bool C_ZN13QFontDatabase29supportsThreadedFontRenderingEv() {
  return (bool)QFontDatabase::supportsThreadedFontRendering();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:157
// [16] QFont systemFont(enum QFontDatabase::SystemFont)
extern "C" Q_DECL_EXPORT
void* C_ZN13QFontDatabase10systemFontENS_10SystemFontE(QFontDatabase::SystemFont type_) {
  auto rv = QFontDatabase::systemFont(type_);
return new QFont(rv);
}


extern "C" Q_DECL_EXPORT
void C_ZN13QFontDatabaseD2Ev(void *this_) {
  delete (QFontDatabase*)(this_);
}
//  main block end
