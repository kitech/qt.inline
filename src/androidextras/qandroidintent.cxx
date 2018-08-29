//  header block begin
// since 0x050a00
// /usr/include/qt/QtAndroidExtras/qandroidintent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qandroidintent.h>
#include <QtAndroidExtras>
#include "callback_inherit.h"

// QAndroidIntent is pure virtual: false
// QAndroidIntent has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQAndroidIntent_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAndroidIntent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAndroidIntent_t qt_meta_stringdata_MyQAndroidIntent = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQAndroidIntent"
  },
  "MyQAndroidIntent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAndroidIntent[] = {
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
class Q_DECL_EXPORT MyQAndroidIntent : public QAndroidIntent {
public:
  virtual ~MyQAndroidIntent() {}
// void QAndroidIntent()
MyQAndroidIntent() : QAndroidIntent() {}
// void QAndroidIntent(const QAndroidJniObject &)
MyQAndroidIntent(const QAndroidJniObject & intent) : QAndroidIntent(intent) {}
// void QAndroidIntent(const QString &)
MyQAndroidIntent(const QString & action) : QAndroidIntent(action) {}
// void QAndroidIntent(const QAndroidJniObject &, const char *)
MyQAndroidIntent(const QAndroidJniObject & packageContext, const char * className) : QAndroidIntent(packageContext, className) {}
};
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidintent.h:51
// [-2] void QAndroidIntent()
extern "C" Q_DECL_EXPORT
void* C_ZN14QAndroidIntentC2Ev() {
  return  new QAndroidIntent();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidintent.h:52
// [-2] void ~QAndroidIntent()
extern "C" Q_DECL_EXPORT
void C_ZN14QAndroidIntentD2Ev(void *this_) {
  delete (QAndroidIntent*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidintent.h:53
// [-2] void QAndroidIntent(const QAndroidJniObject &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QAndroidIntentC2ERK17QAndroidJniObject(QAndroidJniObject* intent) {
  return  new QAndroidIntent(*intent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidintent.h:54
// [-2] void QAndroidIntent(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QAndroidIntentC2ERK7QString(QString* action) {
  return  new QAndroidIntent(*action);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidintent.h:55
// [-2] void QAndroidIntent(const QAndroidJniObject &, const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QAndroidIntentC2ERK17QAndroidJniObjectPKc(QAndroidJniObject* packageContext, const char * className) {
  return  new QAndroidIntent(*packageContext, className);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidintent.h:57
// [-2] void putExtra(const QString &, const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN14QAndroidIntent8putExtraERK7QStringRK10QByteArray(void *this_, QString* key, QByteArray* data) {
  ((QAndroidIntent*)this_)->putExtra(*key, *data);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidintent.h:58
// [8] QByteArray extraBytes(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QAndroidIntent10extraBytesERK7QString(void *this_, QString* key) {
  auto rv = ((QAndroidIntent*)this_)->extraBytes(*key);
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidintent.h:60
// [-2] void putExtra(const QString &, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN14QAndroidIntent8putExtraERK7QStringRK8QVariant(void *this_, QString* key, QVariant* value) {
  ((QAndroidIntent*)this_)->putExtra(*key, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidintent.h:61
// [16] QVariant extraVariant(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QAndroidIntent12extraVariantERK7QString(void *this_, QString* key) {
  auto rv = ((QAndroidIntent*)this_)->extraVariant(*key);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidintent.h:63
// [16] QAndroidJniObject handle()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QAndroidIntent6handleEv(void *this_) {
  auto rv = ((QAndroidIntent*)this_)->handle();
return new QAndroidJniObject(rv);
}

//  main block end
