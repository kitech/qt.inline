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

// QWebEngineHistory is pure virtual: false
// QWebEngineHistory has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQWebEngineHistory_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWebEngineHistory_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWebEngineHistory_t qt_meta_stringdata_MyQWebEngineHistory = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQWebEngineHistory"
  },
  "MyQWebEngineHistory"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWebEngineHistory[] = {
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
class Q_DECL_EXPORT MyQWebEngineHistory : public QWebEngineHistory {
public:
};
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginehistory.h:87
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN17QWebEngineHistory5clearEv(void *this_) {
  ((QWebEngineHistory*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginehistory.h:89
// [-2] QList<QWebEngineHistoryItem> items()
extern "C" Q_DECL_EXPORT
QList<QWebEngineHistoryItem>* C_ZNK17QWebEngineHistory5itemsEv(void *this_) {
  auto rv = ((QWebEngineHistory*)this_)->items();
return new QList<QWebEngineHistoryItem>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginehistory.h:90
// [-2] QList<QWebEngineHistoryItem> backItems(int)
extern "C" Q_DECL_EXPORT
QList<QWebEngineHistoryItem>* C_ZNK17QWebEngineHistory9backItemsEi(void *this_, int maxItems) {
  auto rv = ((QWebEngineHistory*)this_)->backItems(maxItems);
return new QList<QWebEngineHistoryItem>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginehistory.h:91
// [-2] QList<QWebEngineHistoryItem> forwardItems(int)
extern "C" Q_DECL_EXPORT
QList<QWebEngineHistoryItem>* C_ZNK17QWebEngineHistory12forwardItemsEi(void *this_, int maxItems) {
  auto rv = ((QWebEngineHistory*)this_)->forwardItems(maxItems);
return new QList<QWebEngineHistoryItem>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginehistory.h:93
// [1] bool canGoBack()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QWebEngineHistory9canGoBackEv(void *this_) {
  return (bool)((QWebEngineHistory*)this_)->canGoBack();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginehistory.h:94
// [1] bool canGoForward()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QWebEngineHistory12canGoForwardEv(void *this_) {
  return (bool)((QWebEngineHistory*)this_)->canGoForward();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginehistory.h:96
// [-2] void back()
extern "C" Q_DECL_EXPORT
void C_ZN17QWebEngineHistory4backEv(void *this_) {
  ((QWebEngineHistory*)this_)->back();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginehistory.h:97
// [-2] void forward()
extern "C" Q_DECL_EXPORT
void C_ZN17QWebEngineHistory7forwardEv(void *this_) {
  ((QWebEngineHistory*)this_)->forward();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginehistory.h:98
// [-2] void goToItem(const QWebEngineHistoryItem &)
extern "C" Q_DECL_EXPORT
void C_ZN17QWebEngineHistory8goToItemERK21QWebEngineHistoryItem(void *this_, QWebEngineHistoryItem* item) {
  ((QWebEngineHistory*)this_)->goToItem(*item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginehistory.h:100
// [8] QWebEngineHistoryItem backItem()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QWebEngineHistory8backItemEv(void *this_) {
  auto rv = ((QWebEngineHistory*)this_)->backItem();
return new QWebEngineHistoryItem(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginehistory.h:101
// [8] QWebEngineHistoryItem currentItem()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QWebEngineHistory11currentItemEv(void *this_) {
  auto rv = ((QWebEngineHistory*)this_)->currentItem();
return new QWebEngineHistoryItem(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginehistory.h:102
// [8] QWebEngineHistoryItem forwardItem()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QWebEngineHistory11forwardItemEv(void *this_) {
  auto rv = ((QWebEngineHistory*)this_)->forwardItem();
return new QWebEngineHistoryItem(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginehistory.h:103
// [8] QWebEngineHistoryItem itemAt(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QWebEngineHistory6itemAtEi(void *this_, int i) {
  auto rv = ((QWebEngineHistory*)this_)->itemAt(i);
return new QWebEngineHistoryItem(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginehistory.h:105
// [4] int currentItemIndex()
extern "C" Q_DECL_EXPORT
int C_ZNK17QWebEngineHistory16currentItemIndexEv(void *this_) {
  return (int)((QWebEngineHistory*)this_)->currentItemIndex();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginehistory.h:107
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK17QWebEngineHistory5countEv(void *this_) {
  return (int)((QWebEngineHistory*)this_)->count();
}

//  main block end
