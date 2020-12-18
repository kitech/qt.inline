
#include <QtCore>
#include <QtNetwork>
#include <QtQml>
#include "hidden_symbols.h"
//  header block end

//  main block begin
extern "C"
uint64_t ensure_inline_symbol_qml(void* this_) {
  uint64_t fnptrsumval = 0;

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:147
// [4] QIncompatibleFlag operator|(QJSEngine::Extensions::enum_type, int) 
// (12)qm4218158657 (27)_ZorN9QJSEngine9ExtensionEi
/*void qm4218158657_250(QJSEngine::Extension f1, int f2)*/ {
  QJSEngine::Extension f1 = *(QJSEngine::Extension*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QJSEngine::Extension, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:147
// [4] QFlags<QJSEngine::Extensions::enum_type> operator|(QJSEngine::Extensions::enum_type, QJSEngine::Extensions::enum_type) 
// (12)qm4291842587 (29)_ZorN9QJSEngine9ExtensionES0_
/*void qm4291842587_251(QJSEngine::Extension f1, QJSEngine::Extension f2)*/ {
  QJSEngine::Extension f1 = *(QJSEngine::Extension*)this_; QJSEngine::Extension f2 = *(QJSEngine::Extension*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QJSEngine::Extension> (*)(QJSEngine::Extension, QJSEngine::Extension) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:147
// [4] QFlags<QJSEngine::Extensions::enum_type> operator|(QJSEngine::Extensions::enum_type, QFlags<QJSEngine::Extensions::enum_type>) 
// (12)qm2627483651 (38)_ZorN9QJSEngine9ExtensionE6QFlagsIS0_E
/*void qm2627483651_252(QJSEngine::Extension f1, QFlags<QJSEngine::Extension> f2)*/ {
  QJSEngine::Extension f1 = *(QJSEngine::Extension*)this_; QFlags<QJSEngine::Extension> f2 = *(QFlags<QJSEngine::Extension>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QJSEngine::Extension> (*)(QJSEngine::Extension, QFlags<QJSEngine::Extension>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:80
// [4] QIncompatibleFlag operator|(QQmlImageProviderBase::Flags::enum_type, int) 
// (11)qm320326403 (35)_ZorN21QQmlImageProviderBase4FlagEi
/*void qm320326403_253(QQmlImageProviderBase::Flag f1, int f2)*/ {
  QQmlImageProviderBase::Flag f1 = *(QQmlImageProviderBase::Flag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QQmlImageProviderBase::Flag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:80
// [4] QFlags<QQmlImageProviderBase::Flags::enum_type> operator|(QQmlImageProviderBase::Flags::enum_type, QQmlImageProviderBase::Flags::enum_type) 
// (12)qm1798067139 (37)_ZorN21QQmlImageProviderBase4FlagES0_
/*void qm1798067139_254(QQmlImageProviderBase::Flag f1, QQmlImageProviderBase::Flag f2)*/ {
  QQmlImageProviderBase::Flag f1 = *(QQmlImageProviderBase::Flag*)this_; QQmlImageProviderBase::Flag f2 = *(QQmlImageProviderBase::Flag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QQmlImageProviderBase::Flag> (*)(QQmlImageProviderBase::Flag, QQmlImageProviderBase::Flag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:80
// [4] QFlags<QQmlImageProviderBase::Flags::enum_type> operator|(QQmlImageProviderBase::Flags::enum_type, QFlags<QQmlImageProviderBase::Flags::enum_type>) 
// (12)qm3670073156 (46)_ZorN21QQmlImageProviderBase4FlagE6QFlagsIS0_E
/*void qm3670073156_255(QQmlImageProviderBase::Flag f1, QFlags<QQmlImageProviderBase::Flag> f2)*/ {
  QQmlImageProviderBase::Flag f1 = *(QQmlImageProviderBase::Flag*)this_; QFlags<QQmlImageProviderBase::Flag> f2 = *(QFlags<QQmlImageProviderBase::Flag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QQmlImageProviderBase::Flag> (*)(QQmlImageProviderBase::Flag, QFlags<QQmlImageProviderBase::Flag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlprivate.h:514
// [8] const char * classInfo(const QMetaObject *, const char *) 
// (12)qm2735650692 (45)_ZN11QQmlPrivate9classInfoEPK11QMetaObjectPKc
/*void qm2735650692(const QMetaObject * metaObject, const char * key)*/ {
  const QMetaObject * metaObject = *(const QMetaObject **)this_; const char * key = *(const char **)this_;
  (void) QQmlPrivate::classInfo(metaObject, key);
  auto xptr = (const char * (*)(QMetaObject const*, char const*) ) &QQmlPrivate::classInfo;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlprivate.h:534
// [8] const char * classElementName(const QMetaObject *) 
// (12)qm2142770346 (50)_ZN11QQmlPrivate16classElementNameEPK11QMetaObject
/*void qm2142770346(const QMetaObject * metaObject)*/ {
  const QMetaObject * metaObject = *(const QMetaObject **)this_;
  (void) QQmlPrivate::classElementName(metaObject);
  auto xptr = (const char * (*)(QMetaObject const*) ) &QQmlPrivate::classElementName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlprivate.h:526
// [1] bool boolClassInfo(const QMetaObject *, const char *, bool) 
// (12)qm2699440096 (51)_ZN11QQmlPrivate13boolClassInfoEPK11QMetaObjectPKcb
/*void qm2699440096(const QMetaObject * metaObject, const char * key, bool defaultValue)*/ {
  const QMetaObject * metaObject = *(const QMetaObject **)this_; const char * key = *(const char **)this_; bool defaultValue = *(bool*)this_;
  (void) QQmlPrivate::boolClassInfo(metaObject, key, defaultValue);
  auto xptr = (bool (*)(QMetaObject const*, char const*, bool) ) &QQmlPrivate::boolClassInfo;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlprivate.h:519
// [4] int intClassInfo(const QMetaObject *, const char *, int) 
// (11)qm206199673 (50)_ZN11QQmlPrivate12intClassInfoEPK11QMetaObjectPKci
/*void qm206199673(const QMetaObject * metaObject, const char * key, int defaultValue)*/ {
  const QMetaObject * metaObject = *(const QMetaObject **)this_; const char * key = *(const char **)this_; int defaultValue = *(int*)this_;
  (void) QQmlPrivate::intClassInfo(metaObject, key, defaultValue);
  auto xptr = (int (*)(QMetaObject const*, char const*, int) ) &QQmlPrivate::intClassInfo;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:130
// [4] uint qHash(const QQmlProperty &) 
// (11)qm307766661 (24)_Z5qHashRK12QQmlProperty
/*void qm307766661_22(const QQmlProperty & key)*/ {
  const QQmlProperty & key = *(const QQmlProperty *)this_;
  (void) qHash(key);
  auto xptr = (unsigned int (*)(QQmlProperty const&) ) &qHash;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlprivate.h:108
// [4] uint qHash(QQmlAttachedPropertiesFunc, uint) 
// (12)qm1993040844 (24)_Z5qHashPFP7QObjectS0_Ej
/*void qm1993040844_23(QQmlAttachedPropertiesFunc func_, unsigned int seed)*/ {
  QQmlAttachedPropertiesFunc func_ = *(QQmlAttachedPropertiesFunc*)this_; unsigned int seed = *(unsigned int*)this_;
  (void) qHash(func_, seed);
  auto xptr = (unsigned int (*)(QObject* (*)(QObject*), unsigned int) ) &qHash;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqml.h:860
// [-2] void qmlRegisterNamespaceAndRevisions(const QMetaObject *, const char *, int) 
// (11)qm437382630 (55)_Z32qmlRegisterNamespaceAndRevisionsPK11QMetaObjectPKci
/*void qm437382630(const QMetaObject * metaObject, const char * uri, int versionMajor)*/ {
  const QMetaObject * metaObject = *(const QMetaObject **)this_; const char * uri = *(const char **)this_; int versionMajor = *(int*)this_;
  (void) qmlRegisterNamespaceAndRevisions(metaObject, uri, versionMajor);
  auto xptr = (void (*)(QMetaObject const*, char const*, int) ) &qmlRegisterNamespaceAndRevisions;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqml.h:775
// [4] int qmlRegisterSingletonType(const QUrl &, const char *, int, int, const char *) 
// (12)qm3555911617 (43)_Z24qmlRegisterSingletonTypeRK4QUrlPKciiS3_
/*void qm3555911617(const QUrl & url, const char * uri, int versionMajor, int versionMinor, const char * qmlName)*/ {
  const QUrl & url = *(const QUrl *)this_; const char * uri = *(const char **)this_; int versionMajor = *(int*)this_; int versionMinor = *(int*)this_; const char * qmlName = *(const char **)this_;
  (void) qmlRegisterSingletonType(url, uri, versionMajor, versionMinor, qmlName);
  auto xptr = (int (*)(QUrl const&, char const*, int, int, char const*) ) &qmlRegisterSingletonType;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqml.h:794
// [4] int qmlRegisterType(const QUrl &, const char *, int, int, const char *) 
// (12)qm1843502075 (34)_Z15qmlRegisterTypeRK4QUrlPKciiS3_
/*void qm1843502075(const QUrl & url, const char * uri, int versionMajor, int versionMinor, const char * qmlName)*/ {
  const QUrl & url = *(const QUrl *)this_; const char * uri = *(const char **)this_; int versionMajor = *(int*)this_; int versionMinor = *(int*)this_; const char * qmlName = *(const char **)this_;
  (void) qmlRegisterType(url, uri, versionMajor, versionMinor, qmlName);
  auto xptr = (int (*)(QUrl const&, char const*, int, int, char const*) ) &qmlRegisterType;
  fnptrsumval += (uint64_t)(void*)xptr;
}

  return fnptrsumval;
} // void ensure_inline_symbol_qml

//  main block end
