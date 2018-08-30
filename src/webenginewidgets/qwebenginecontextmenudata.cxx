//  header block begin
// since 0x050700
// /usr/include/qt/QtWebEngineWidgets/qwebenginecontextmenudata.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebenginecontextmenudata.h>
#include <QtWebEngineWidgets>
#include "callback_inherit.h"

// QWebEngineContextMenuData is pure virtual: false
// QWebEngineContextMenuData has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQWebEngineContextMenuData_t {
  QByteArrayData data[1];
  char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWebEngineContextMenuData_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWebEngineContextMenuData_t qt_meta_stringdata_MyQWebEngineContextMenuData = {
   {
  QT_MOC_LITERAL(0, 0, 27), // "MyQWebEngineContextMenuData"
  },
  "MyQWebEngineContextMenuData"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWebEngineContextMenuData[] = {
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
class Q_DECL_EXPORT MyQWebEngineContextMenuData : public QWebEngineContextMenuData {
public:
  virtual ~MyQWebEngineContextMenuData() {}
// void QWebEngineContextMenuData()
MyQWebEngineContextMenuData() : QWebEngineContextMenuData() {}
// void QWebEngineContextMenuData(const QWebEngineContextMenuData &)
MyQWebEngineContextMenuData(const QWebEngineContextMenuData & other) : QWebEngineContextMenuData(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginecontextmenudata.h:56
// [-2] void QWebEngineContextMenuData()
extern "C" Q_DECL_EXPORT
void* C_ZN25QWebEngineContextMenuDataC2Ev() {
  return  new QWebEngineContextMenuData();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginecontextmenudata.h:57
// [-2] void QWebEngineContextMenuData(const QWebEngineContextMenuData &)
extern "C" Q_DECL_EXPORT
void* C_ZN25QWebEngineContextMenuDataC2ERKS_(QWebEngineContextMenuData* other) {
  return  new QWebEngineContextMenuData(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginecontextmenudata.h:58
// [8] QWebEngineContextMenuData & operator=(const QWebEngineContextMenuData &)
extern "C" Q_DECL_EXPORT
void* C_ZN25QWebEngineContextMenuDataaSERKS_(void *this_, QWebEngineContextMenuData* other) {
  auto& rv = ((QWebEngineContextMenuData*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginecontextmenudata.h:59
// [-2] void ~QWebEngineContextMenuData()
extern "C" Q_DECL_EXPORT
void C_ZN25QWebEngineContextMenuDataD2Ev(void *this_) {
  delete (QWebEngineContextMenuData*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginecontextmenudata.h:70
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK25QWebEngineContextMenuData7isValidEv(void *this_) {
  return (bool)((QWebEngineContextMenuData*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginecontextmenudata.h:72
// [8] QPoint position()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QWebEngineContextMenuData8positionEv(void *this_) {
  auto rv = ((QWebEngineContextMenuData*)this_)->position();
return new QPoint(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginecontextmenudata.h:73
// [8] QString selectedText()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QWebEngineContextMenuData12selectedTextEv(void *this_) {
  auto rv = ((QWebEngineContextMenuData*)this_)->selectedText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginecontextmenudata.h:74
// [8] QString linkText()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QWebEngineContextMenuData8linkTextEv(void *this_) {
  auto rv = ((QWebEngineContextMenuData*)this_)->linkText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginecontextmenudata.h:75
// [8] QUrl linkUrl()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QWebEngineContextMenuData7linkUrlEv(void *this_) {
  auto rv = ((QWebEngineContextMenuData*)this_)->linkUrl();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginecontextmenudata.h:76
// [8] QUrl mediaUrl()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QWebEngineContextMenuData8mediaUrlEv(void *this_) {
  auto rv = ((QWebEngineContextMenuData*)this_)->mediaUrl();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginecontextmenudata.h:77
// [4] QWebEngineContextMenuData::MediaType mediaType()
extern "C" Q_DECL_EXPORT
QWebEngineContextMenuData::MediaType C_ZNK25QWebEngineContextMenuData9mediaTypeEv(void *this_) {
  return (QWebEngineContextMenuData::MediaType)((QWebEngineContextMenuData*)this_)->mediaType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginecontextmenudata.h:78
// [1] bool isContentEditable()
extern "C" Q_DECL_EXPORT
bool C_ZNK25QWebEngineContextMenuData17isContentEditableEv(void *this_) {
  return (bool)((QWebEngineContextMenuData*)this_)->isContentEditable();
}

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtWebEngineWidgets/qwebenginecontextmenudata.h:79
// [8] QString misspelledWord()
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void* C_ZNK25QWebEngineContextMenuData14misspelledWordEv(void *this_) {
  auto rv = ((QWebEngineContextMenuData*)this_)->misspelledWord();
return new QString(rv);
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtWebEngineWidgets/qwebenginecontextmenudata.h:80
// [8] QStringList spellCheckerSuggestions()
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void* C_ZNK25QWebEngineContextMenuData23spellCheckerSuggestionsEv(void *this_) {
  auto rv = ((QWebEngineContextMenuData*)this_)->spellCheckerSuggestions();
return new QStringList(rv);
}
#endif // QT_VERSION >= 0x050800

//  main block end
