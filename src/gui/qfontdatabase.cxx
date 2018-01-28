//  header block begin
// /usr/include/qt/QtGui/qfontdatabase.h
#include <qfontdatabase.h>
#include <QtGui>

// QFontDatabase is pure virtual: false
//  header block end

//  main block begin

class MyQFontDatabase : public QFontDatabase {
public:
MyQFontDatabase() : QFontDatabase() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:118
// [-2] void QFontDatabase()
extern "C"
void* C_ZN13QFontDatabaseC1Ev() {
  (MyQFontDatabase*)(0);
  return  new MyQFontDatabase();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:127
// [8] QString styleString(const class QFont &)
extern "C"
void* C_ZN13QFontDatabase11styleStringERK5QFont(void *this_, const QFont & font) {
  auto rv = ((QFontDatabase*)this_)->styleString(font);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:128
// [8] QString styleString(const class QFontInfo &)
extern "C"
void* C_ZN13QFontDatabase11styleStringERK9QFontInfo(void *this_, const QFontInfo & fontInfo) {
  auto rv = ((QFontDatabase*)this_)->styleString(fontInfo);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:130
// [16] QFont font(const class QString &, const class QString &, int)
extern "C"
void* C_ZNK13QFontDatabase4fontERK7QStringS2_i(void *this_, const QString & family, const QString & style, int pointSize) {
  auto rv = ((QFontDatabase*)this_)->font(family, style, pointSize);
return new QFont(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:132
// [1] bool isBitmapScalable(const class QString &, const class QString &)
extern "C"
bool C_ZNK13QFontDatabase16isBitmapScalableERK7QStringS2_(void *this_, const QString & family, const QString & style) {
  return (bool)((QFontDatabase*)this_)->isBitmapScalable(family, style);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:133
// [1] bool isSmoothlyScalable(const class QString &, const class QString &)
extern "C"
bool C_ZNK13QFontDatabase18isSmoothlyScalableERK7QStringS2_(void *this_, const QString & family, const QString & style) {
  return (bool)((QFontDatabase*)this_)->isSmoothlyScalable(family, style);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:134
// [1] bool isScalable(const class QString &, const class QString &)
extern "C"
bool C_ZNK13QFontDatabase10isScalableERK7QStringS2_(void *this_, const QString & family, const QString & style) {
  return (bool)((QFontDatabase*)this_)->isScalable(family, style);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:135
// [1] bool isFixedPitch(const class QString &, const class QString &)
extern "C"
bool C_ZNK13QFontDatabase12isFixedPitchERK7QStringS2_(void *this_, const QString & family, const QString & style) {
  return (bool)((QFontDatabase*)this_)->isFixedPitch(family, style);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:137
// [1] bool italic(const class QString &, const class QString &)
extern "C"
bool C_ZNK13QFontDatabase6italicERK7QStringS2_(void *this_, const QString & family, const QString & style) {
  return (bool)((QFontDatabase*)this_)->italic(family, style);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:138
// [1] bool bold(const class QString &, const class QString &)
extern "C"
bool C_ZNK13QFontDatabase4boldERK7QStringS2_(void *this_, const QString & family, const QString & style) {
  return (bool)((QFontDatabase*)this_)->bold(family, style);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:139
// [4] int weight(const class QString &, const class QString &)
extern "C"
int C_ZNK13QFontDatabase6weightERK7QStringS2_(void *this_, const QString & family, const QString & style) {
  return (int)((QFontDatabase*)this_)->weight(family, style);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:141
// [1] bool hasFamily(const class QString &)
extern "C"
bool C_ZNK13QFontDatabase9hasFamilyERK7QString(void *this_, const QString & family) {
  return (bool)((QFontDatabase*)this_)->hasFamily(family);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:142
// [1] bool isPrivateFamily(const class QString &)
extern "C"
bool C_ZNK13QFontDatabase15isPrivateFamilyERK7QString(void *this_, const QString & family) {
  return (bool)((QFontDatabase*)this_)->isPrivateFamily(family);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:144
// [8] QString writingSystemName(enum QFontDatabase::WritingSystem)
extern "C"
void* C_ZN13QFontDatabase17writingSystemNameENS_13WritingSystemE(QFontDatabase::WritingSystem writingSystem) {
  auto rv = QFontDatabase::writingSystemName(writingSystem);
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:145
// [8] QString writingSystemSample(enum QFontDatabase::WritingSystem)
extern "C"
void* C_ZN13QFontDatabase19writingSystemSampleENS_13WritingSystemE(QFontDatabase::WritingSystem writingSystem) {
  auto rv = QFontDatabase::writingSystemSample(writingSystem);
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:147
// [4] int addApplicationFont(const class QString &)
extern "C"
int C_ZN13QFontDatabase18addApplicationFontERK7QString(const QString & fileName) {
  return (int)QFontDatabase::addApplicationFont(fileName);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:148
// [4] int addApplicationFontFromData(const class QByteArray &)
extern "C"
int C_ZN13QFontDatabase26addApplicationFontFromDataERK10QByteArray(const QByteArray & fontData) {
  return (int)QFontDatabase::addApplicationFontFromData(fontData);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:150
// [1] bool removeApplicationFont(int)
extern "C"
bool C_ZN13QFontDatabase21removeApplicationFontEi(int id) {
  return (bool)QFontDatabase::removeApplicationFont(id);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:151
// [1] bool removeAllApplicationFonts()
extern "C"
bool C_ZN13QFontDatabase25removeAllApplicationFontsEv() {
  return (bool)QFontDatabase::removeAllApplicationFonts();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:154
// [1] bool supportsThreadedFontRendering()
extern "C"
bool C_ZN13QFontDatabase29supportsThreadedFontRenderingEv() {
  return (bool)QFontDatabase::supportsThreadedFontRendering();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:157
// [16] QFont systemFont(enum QFontDatabase::SystemFont)
extern "C"
void* C_ZN13QFontDatabase10systemFontENS_10SystemFontE(QFontDatabase::SystemFont type) {
  auto rv = QFontDatabase::systemFont(type);
return new QFont(rv);
}
//  main block end
