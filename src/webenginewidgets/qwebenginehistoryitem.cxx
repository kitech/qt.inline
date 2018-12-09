//  header block begin

// since 0x050400
// /usr/include/qt/QtWebEngineWidgets/qwebenginehistory.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebenginehistory.h>
#include <QtWebEngineWidgets>
#include "callback_inherit.h"

// QWebEngineHistoryItem is pure virtual: false
// QWebEngineHistoryItem has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQWebEngineHistoryItem_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWebEngineHistoryItem_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWebEngineHistoryItem_t qt_meta_stringdata_MyQWebEngineHistoryItem = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQWebEngineHistoryItem"
  },
  "MyQWebEngineHistoryItem"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWebEngineHistoryItem[] = {
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
class Q_DECL_EXPORT MyQWebEngineHistoryItem : public QWebEngineHistoryItem {
public:
  virtual ~MyQWebEngineHistoryItem() {}
// void QWebEngineHistoryItem(const QWebEngineHistoryItem &)
MyQWebEngineHistoryItem(const QWebEngineHistoryItem & other) : QWebEngineHistoryItem(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginehistory.h:59
// [-2] void QWebEngineHistoryItem(const QWebEngineHistoryItem &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QWebEngineHistoryItemC2ERKS_(QWebEngineHistoryItem* other) {
  return  new QWebEngineHistoryItem(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginehistory.h:60
// [8] QWebEngineHistoryItem & operator=(const QWebEngineHistoryItem &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QWebEngineHistoryItemaSERKS_(void *this_, QWebEngineHistoryItem* other) {
  auto& rv = ((QWebEngineHistoryItem*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginehistory.h:61
// [-2] void ~QWebEngineHistoryItem()
extern "C" Q_DECL_EXPORT
void C_ZN21QWebEngineHistoryItemD2Ev(void *this_) {
  delete (QWebEngineHistoryItem*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginehistory.h:63
// [8] QUrl originalUrl()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QWebEngineHistoryItem11originalUrlEv(void *this_) {
  auto rv = ((QWebEngineHistoryItem*)this_)->originalUrl();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginehistory.h:64
// [8] QUrl url()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QWebEngineHistoryItem3urlEv(void *this_) {
  auto rv = ((QWebEngineHistoryItem*)this_)->url();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginehistory.h:66
// [8] QString title()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QWebEngineHistoryItem5titleEv(void *this_) {
  auto rv = ((QWebEngineHistoryItem*)this_)->title();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginehistory.h:67
// [8] QDateTime lastVisited()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QWebEngineHistoryItem11lastVisitedEv(void *this_) {
  auto rv = ((QWebEngineHistoryItem*)this_)->lastVisited();
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginehistory.h:68
// [8] QUrl iconUrl()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QWebEngineHistoryItem7iconUrlEv(void *this_) {
  auto rv = ((QWebEngineHistoryItem*)this_)->iconUrl();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginehistory.h:70
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK21QWebEngineHistoryItem7isValidEv(void *this_) {
  return (bool)((QWebEngineHistoryItem*)this_)->isValid();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginehistory.h:72
// [-2] void swap(QWebEngineHistoryItem &)
extern "C" Q_DECL_EXPORT
void C_ZN21QWebEngineHistoryItem4swapERS_(void *this_, QWebEngineHistoryItem* other) {
  ((QWebEngineHistoryItem*)this_)->swap(*other);
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
