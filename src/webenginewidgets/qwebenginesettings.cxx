//  header block begin

// since 0x050400
// /usr/include/qt/QtWebEngineWidgets/qwebenginesettings.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebenginesettings.h>
#include <QtWebEngineWidgets>
#include "callback_inherit.h"

// QWebEngineSettings is pure virtual: false
// QWebEngineSettings has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQWebEngineSettings_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWebEngineSettings_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWebEngineSettings_t qt_meta_stringdata_MyQWebEngineSettings = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQWebEngineSettings"
  },
  "MyQWebEngineSettings"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWebEngineSettings[] = {
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
class Q_DECL_EXPORT MyQWebEngineSettings : public QWebEngineSettings {
public:
};

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginesettings.h:103
// [8] QWebEngineSettings * globalSettings()
extern "C" Q_DECL_EXPORT
void* C_ZN18QWebEngineSettings14globalSettingsEv() {
  return (void*)QWebEngineSettings::globalSettings();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginesettings.h:105
// [8] QWebEngineSettings * defaultSettings()
extern "C" Q_DECL_EXPORT
void* C_ZN18QWebEngineSettings15defaultSettingsEv() {
  return (void*)QWebEngineSettings::defaultSettings();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginesettings.h:107
// [-2] void setFontFamily(QWebEngineSettings::FontFamily, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN18QWebEngineSettings13setFontFamilyENS_10FontFamilyERK7QString(void *this_, QWebEngineSettings::FontFamily which, QString* family) {
  ((QWebEngineSettings*)this_)->setFontFamily(which, *family);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginesettings.h:108
// [8] QString fontFamily(QWebEngineSettings::FontFamily)
extern "C" Q_DECL_EXPORT
void* C_ZNK18QWebEngineSettings10fontFamilyENS_10FontFamilyE(void *this_, QWebEngineSettings::FontFamily which) {
  auto rv = ((QWebEngineSettings*)this_)->fontFamily(which);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginesettings.h:109
// [-2] void resetFontFamily(QWebEngineSettings::FontFamily)
extern "C" Q_DECL_EXPORT
void C_ZN18QWebEngineSettings15resetFontFamilyENS_10FontFamilyE(void *this_, QWebEngineSettings::FontFamily which) {
  ((QWebEngineSettings*)this_)->resetFontFamily(which);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginesettings.h:111
// [-2] void setFontSize(QWebEngineSettings::FontSize, int)
extern "C" Q_DECL_EXPORT
void C_ZN18QWebEngineSettings11setFontSizeENS_8FontSizeEi(void *this_, QWebEngineSettings::FontSize type_, int size) {
  ((QWebEngineSettings*)this_)->setFontSize(type_, size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginesettings.h:112
// [4] int fontSize(QWebEngineSettings::FontSize)
extern "C" Q_DECL_EXPORT
int C_ZNK18QWebEngineSettings8fontSizeENS_8FontSizeE(void *this_, QWebEngineSettings::FontSize type_) {
  return (int)((QWebEngineSettings*)this_)->fontSize(type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginesettings.h:113
// [-2] void resetFontSize(QWebEngineSettings::FontSize)
extern "C" Q_DECL_EXPORT
void C_ZN18QWebEngineSettings13resetFontSizeENS_8FontSizeE(void *this_, QWebEngineSettings::FontSize type_) {
  ((QWebEngineSettings*)this_)->resetFontSize(type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginesettings.h:115
// [-2] void setAttribute(QWebEngineSettings::WebAttribute, bool)
extern "C" Q_DECL_EXPORT
void C_ZN18QWebEngineSettings12setAttributeENS_12WebAttributeEb(void *this_, QWebEngineSettings::WebAttribute attr, bool on) {
  ((QWebEngineSettings*)this_)->setAttribute(attr, on);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginesettings.h:116
// [1] bool testAttribute(QWebEngineSettings::WebAttribute)
extern "C" Q_DECL_EXPORT
bool C_ZNK18QWebEngineSettings13testAttributeENS_12WebAttributeE(void *this_, QWebEngineSettings::WebAttribute attr) {
  return (bool)((QWebEngineSettings*)this_)->testAttribute(attr);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginesettings.h:117
// [-2] void resetAttribute(QWebEngineSettings::WebAttribute)
extern "C" Q_DECL_EXPORT
void C_ZN18QWebEngineSettings14resetAttributeENS_12WebAttributeE(void *this_, QWebEngineSettings::WebAttribute attr) {
  ((QWebEngineSettings*)this_)->resetAttribute(attr);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginesettings.h:119
// [-2] void setDefaultTextEncoding(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN18QWebEngineSettings22setDefaultTextEncodingERK7QString(void *this_, QString* encoding) {
  ((QWebEngineSettings*)this_)->setDefaultTextEncoding(*encoding);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginesettings.h:120
// [8] QString defaultTextEncoding()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QWebEngineSettings19defaultTextEncodingEv(void *this_) {
  auto rv = ((QWebEngineSettings*)this_)->defaultTextEncoding();
return new QString(rv);
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
