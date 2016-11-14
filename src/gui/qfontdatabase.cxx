// /usr/include/qt/QtGui/qfontdatabase.h
#include <qfontdatabase.h>
#include <QtGui>

// static
// /usr/include/qt/QtGui/qfontdatabase.h:115
// QList<int> standardSizes()
extern "C"
void C_ZN13QFontDatabase13standardSizesEv() {
  /*return*/ QFontDatabase::standardSizes();
}
// /usr/include/qt/QtGui/qfontdatabase.h:117
// void QFontDatabase()
extern "C"
void* C_ZN13QFontDatabaseC1Ev() {
  return new QFontDatabase();
}
// /usr/include/qt/QtGui/qfontdatabase.h:119
// QList<QFontDatabase::WritingSystem> writingSystems()
extern "C"
void C_ZNK13QFontDatabase14writingSystemsEv(void *this_) {
  /*return*/ ((QFontDatabase*)this_)->writingSystems();
}
// /usr/include/qt/QtGui/qfontdatabase.h:120
// QList<QFontDatabase::WritingSystem> writingSystems(const class QString &)
extern "C"
void C_ZNK13QFontDatabase14writingSystemsERK7QString(void *this_, const QString & family) {
  /*return*/ ((QFontDatabase*)this_)->writingSystems(family);
}
// /usr/include/qt/QtGui/qfontdatabase.h:122
// QStringList families(enum QFontDatabase::WritingSystem)
extern "C"
void C_ZNK13QFontDatabase8familiesENS_13WritingSystemE(void *this_, QFontDatabase::WritingSystem writingSystem) {
  /*return*/ ((QFontDatabase*)this_)->families(writingSystem);
}
// /usr/include/qt/QtGui/qfontdatabase.h:123
// QStringList styles(const class QString &)
extern "C"
void C_ZNK13QFontDatabase6stylesERK7QString(void *this_, const QString & family) {
  /*return*/ ((QFontDatabase*)this_)->styles(family);
}
// /usr/include/qt/QtGui/qfontdatabase.h:124
// QList<int> pointSizes(const class QString &, const class QString &)
extern "C"
void C_ZN13QFontDatabase10pointSizesERK7QStringS2_(void *this_, const QString & family, const QString & style) {
  /*return*/ ((QFontDatabase*)this_)->pointSizes(family, style);
}
// /usr/include/qt/QtGui/qfontdatabase.h:125
// QList<int> smoothSizes(const class QString &, const class QString &)
extern "C"
void C_ZN13QFontDatabase11smoothSizesERK7QStringS2_(void *this_, const QString & family, const QString & style) {
  /*return*/ ((QFontDatabase*)this_)->smoothSizes(family, style);
}
// /usr/include/qt/QtGui/qfontdatabase.h:126
// QString styleString(const class QFont &)
extern "C"
void C_ZN13QFontDatabase11styleStringERK5QFont(void *this_, const QFont & font) {
  /*return*/ ((QFontDatabase*)this_)->styleString(font);
}
// /usr/include/qt/QtGui/qfontdatabase.h:127
// QString styleString(const class QFontInfo &)
extern "C"
void C_ZN13QFontDatabase11styleStringERK9QFontInfo(void *this_, const QFontInfo & fontInfo) {
  /*return*/ ((QFontDatabase*)this_)->styleString(fontInfo);
}
// /usr/include/qt/QtGui/qfontdatabase.h:129
// QFont font(const class QString &, const class QString &, int)
extern "C"
void C_ZNK13QFontDatabase4fontERK7QStringS2_i(void *this_, const QString & family, const QString & style, int pointSize) {
  /*return*/ ((QFontDatabase*)this_)->font(family, style, pointSize);
}
// /usr/include/qt/QtGui/qfontdatabase.h:131
// bool isBitmapScalable(const class QString &, const class QString &)
extern "C"
void C_ZNK13QFontDatabase16isBitmapScalableERK7QStringS2_(void *this_, const QString & family, const QString & style) {
  /*return*/ ((QFontDatabase*)this_)->isBitmapScalable(family, style);
}
// /usr/include/qt/QtGui/qfontdatabase.h:132
// bool isSmoothlyScalable(const class QString &, const class QString &)
extern "C"
void C_ZNK13QFontDatabase18isSmoothlyScalableERK7QStringS2_(void *this_, const QString & family, const QString & style) {
  /*return*/ ((QFontDatabase*)this_)->isSmoothlyScalable(family, style);
}
// /usr/include/qt/QtGui/qfontdatabase.h:133
// bool isScalable(const class QString &, const class QString &)
extern "C"
void C_ZNK13QFontDatabase10isScalableERK7QStringS2_(void *this_, const QString & family, const QString & style) {
  /*return*/ ((QFontDatabase*)this_)->isScalable(family, style);
}
// /usr/include/qt/QtGui/qfontdatabase.h:134
// bool isFixedPitch(const class QString &, const class QString &)
extern "C"
void C_ZNK13QFontDatabase12isFixedPitchERK7QStringS2_(void *this_, const QString & family, const QString & style) {
  /*return*/ ((QFontDatabase*)this_)->isFixedPitch(family, style);
}
// /usr/include/qt/QtGui/qfontdatabase.h:136
// bool italic(const class QString &, const class QString &)
extern "C"
void C_ZNK13QFontDatabase6italicERK7QStringS2_(void *this_, const QString & family, const QString & style) {
  /*return*/ ((QFontDatabase*)this_)->italic(family, style);
}
// /usr/include/qt/QtGui/qfontdatabase.h:137
// bool bold(const class QString &, const class QString &)
extern "C"
void C_ZNK13QFontDatabase4boldERK7QStringS2_(void *this_, const QString & family, const QString & style) {
  /*return*/ ((QFontDatabase*)this_)->bold(family, style);
}
// /usr/include/qt/QtGui/qfontdatabase.h:138
// int weight(const class QString &, const class QString &)
extern "C"
void C_ZNK13QFontDatabase6weightERK7QStringS2_(void *this_, const QString & family, const QString & style) {
  /*return*/ ((QFontDatabase*)this_)->weight(family, style);
}
// /usr/include/qt/QtGui/qfontdatabase.h:140
// bool hasFamily(const class QString &)
extern "C"
void C_ZNK13QFontDatabase9hasFamilyERK7QString(void *this_, const QString & family) {
  /*return*/ ((QFontDatabase*)this_)->hasFamily(family);
}
// /usr/include/qt/QtGui/qfontdatabase.h:141
// bool isPrivateFamily(const class QString &)
extern "C"
void C_ZNK13QFontDatabase15isPrivateFamilyERK7QString(void *this_, const QString & family) {
  /*return*/ ((QFontDatabase*)this_)->isPrivateFamily(family);
}
// static
// /usr/include/qt/QtGui/qfontdatabase.h:143
// QString writingSystemName(enum QFontDatabase::WritingSystem)
extern "C"
void C_ZN13QFontDatabase17writingSystemNameENS_13WritingSystemE(QFontDatabase::WritingSystem writingSystem) {
  /*return*/ QFontDatabase::writingSystemName(writingSystem);
}
// static
// /usr/include/qt/QtGui/qfontdatabase.h:144
// QString writingSystemSample(enum QFontDatabase::WritingSystem)
extern "C"
void C_ZN13QFontDatabase19writingSystemSampleENS_13WritingSystemE(QFontDatabase::WritingSystem writingSystem) {
  /*return*/ QFontDatabase::writingSystemSample(writingSystem);
}
// static
// /usr/include/qt/QtGui/qfontdatabase.h:146
// int addApplicationFont(const class QString &)
extern "C"
void C_ZN13QFontDatabase18addApplicationFontERK7QString(const QString & fileName) {
  /*return*/ QFontDatabase::addApplicationFont(fileName);
}
// static
// /usr/include/qt/QtGui/qfontdatabase.h:147
// int addApplicationFontFromData(const class QByteArray &)
extern "C"
void C_ZN13QFontDatabase26addApplicationFontFromDataERK10QByteArray(const QByteArray & fontData) {
  /*return*/ QFontDatabase::addApplicationFontFromData(fontData);
}
// static
// /usr/include/qt/QtGui/qfontdatabase.h:148
// QStringList applicationFontFamilies(int)
extern "C"
void C_ZN13QFontDatabase23applicationFontFamiliesEi(int id) {
  /*return*/ QFontDatabase::applicationFontFamilies(id);
}
// static
// /usr/include/qt/QtGui/qfontdatabase.h:149
// bool removeApplicationFont(int)
extern "C"
void C_ZN13QFontDatabase21removeApplicationFontEi(int id) {
  /*return*/ QFontDatabase::removeApplicationFont(id);
}
// static
// /usr/include/qt/QtGui/qfontdatabase.h:150
// bool removeAllApplicationFonts()
extern "C"
void C_ZN13QFontDatabase25removeAllApplicationFontsEv() {
  /*return*/ QFontDatabase::removeAllApplicationFonts();
}
// static
// /usr/include/qt/QtGui/qfontdatabase.h:153
// bool supportsThreadedFontRendering()
extern "C"
void C_ZN13QFontDatabase29supportsThreadedFontRenderingEv() {
  /*return*/ QFontDatabase::supportsThreadedFontRendering();
}
// static
// /usr/include/qt/QtGui/qfontdatabase.h:156
// QFont systemFont(enum QFontDatabase::SystemFont)
extern "C"
void C_ZN13QFontDatabase10systemFontENS_10SystemFontE(QFontDatabase::SystemFont type) {
  /*return*/ QFontDatabase::systemFont(type);
}