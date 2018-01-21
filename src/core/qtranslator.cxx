//  header block begin
// /usr/include/qt/QtCore/qtranslator.h
#include <qtranslator.h>
#include <QtCore>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtCore/qtranslator.h:56
// const QMetaObject * metaObject()
extern "C"
void C_ZNK11QTranslator10metaObjectEv(void *this_) {
  /*return*/ ((QTranslator*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qtranslator.h:58
// void QTranslator(class QObject *)
extern "C"
void* C_ZN11QTranslatorC1EP7QObject(QObject * parent) {
  return new QTranslator(parent);
}
// virtual
// /usr/include/qt/QtCore/qtranslator.h:59
// void ~QTranslator()
extern "C"
void C_ZN11QTranslatorD1Ev(void *this_) {
  delete (QTranslator*)(this_);
}
// virtual
// /usr/include/qt/QtCore/qtranslator.h:61
// QString translate(const char *, const char *, const char *, int)
extern "C"
void C_ZNK11QTranslator9translateEPKcS1_S1_i(void *this_, const char * context, const char * sourceText, const char * disambiguation, int n) {
  /*return*/ ((QTranslator*)this_)->translate(context, sourceText, disambiguation, n);
}
// virtual
// /usr/include/qt/QtCore/qtranslator.h:64
// bool isEmpty()
extern "C"
void C_ZNK11QTranslator7isEmptyEv(void *this_) {
  /*return*/ ((QTranslator*)this_)->isEmpty();
}
// /usr/include/qt/QtCore/qtranslator.h:66
// bool load(const class QString &, const class QString &, const class QString &, const class QString &)
extern "C"
void C_ZN11QTranslator4loadERK7QStringS2_S2_S2_(void *this_, const QString & filename, const QString & directory, const QString & search_delimiters, const QString & suffix) {
  /*return*/ ((QTranslator*)this_)->load(filename, directory, search_delimiters, suffix);
}
// /usr/include/qt/QtCore/qtranslator.h:70
// bool load(const class QLocale &, const class QString &, const class QString &, const class QString &, const class QString &)
extern "C"
void C_ZN11QTranslator4loadERK7QLocaleRK7QStringS5_S5_S5_(void *this_, const QLocale & locale, const QString & filename, const QString & prefix, const QString & directory, const QString & suffix) {
  /*return*/ ((QTranslator*)this_)->load(locale, filename, prefix, directory, suffix);
}
// /usr/include/qt/QtCore/qtranslator.h:75
// bool load(const uchar *, int, const class QString &)
extern "C"
void C_ZN11QTranslator4loadEPKhiRK7QString(void *this_, const uchar * data, int len, const QString & directory) {
  /*return*/ ((QTranslator*)this_)->load(data, len, directory);
}
//  main block end
