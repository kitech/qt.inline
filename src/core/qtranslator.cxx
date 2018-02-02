//  header block begin
// /usr/include/qt/QtCore/qtranslator.h
#include <qtranslator.h>
#include <QtCore>

// QTranslator is pure virtual: false
// QTranslator has virtual projected: false
//  header block end

//  main block begin

class MyQTranslator : public QTranslator {
public:
  virtual ~MyQTranslator() {}
// void QTranslator(class QObject *)
MyQTranslator(QObject * parent) : QTranslator(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtranslator.h:56
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK11QTranslator10metaObjectEv(void *this_) {
  return (void*)((QTranslator*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtranslator.h:58
// [-2] void QTranslator(class QObject *)
extern "C"
void* C_ZN11QTranslatorC2EP7QObject(QObject * parent) {
  return  new QTranslator(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtranslator.h:59
// [-2] void ~QTranslator()
extern "C"
void C_ZN11QTranslatorD2Ev(void *this_) {
  delete (QTranslator*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtranslator.h:61
// [8] QString translate(const char *, const char *, const char *, int)
extern "C"
void* C_ZNK11QTranslator9translateEPKcS1_S1_i(void *this_, const char * context, const char * sourceText, const char * disambiguation, int n) {
  auto rv = ((QTranslator*)this_)->translate(context, sourceText, disambiguation, n);
return new QString(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtranslator.h:64
// [1] bool isEmpty()
extern "C"
bool C_ZNK11QTranslator7isEmptyEv(void *this_) {
  return (bool)((QTranslator*)this_)->isEmpty();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtranslator.h:66
// [1] bool load(const class QString &, const class QString &, const class QString &, const class QString &)
extern "C"
bool C_ZN11QTranslator4loadERK7QStringS2_S2_S2_(void *this_, QString* filename, QString* directory, QString* search_delimiters, QString* suffix) {
  return (bool)((QTranslator*)this_)->load(*filename, *directory, *search_delimiters, *suffix);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtranslator.h:70
// [1] bool load(const class QLocale &, const class QString &, const class QString &, const class QString &, const class QString &)
extern "C"
bool C_ZN11QTranslator4loadERK7QLocaleRK7QStringS5_S5_S5_(void *this_, QLocale* locale, QString* filename, QString* prefix, QString* directory, QString* suffix) {
  return (bool)((QTranslator*)this_)->load(*locale, *filename, *prefix, *directory, *suffix);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtranslator.h:75
// [1] bool load(const uchar *, int, const class QString &)
extern "C"
bool C_ZN11QTranslator4loadEPKhiRK7QString(void *this_, const uchar * data, int len, QString* directory) {
  return (bool)((QTranslator*)this_)->load(data, len, *directory);
}
//  main block end
