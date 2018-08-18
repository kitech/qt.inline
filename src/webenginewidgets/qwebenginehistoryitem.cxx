//  header block begin
// since 0x050400
// /usr/include/qt/QtWebEngineWidgets/qwebenginehistory.h
#ifndef protected
#define protected public
#endif
#include <qwebenginehistory.h>
#include <QtWebEngineWidgets>
#include "callback_inherit.h"

// QWebEngineHistoryItem is pure virtual: false
// QWebEngineHistoryItem has virtual projected: false
//  header block end

//  main block begin

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
