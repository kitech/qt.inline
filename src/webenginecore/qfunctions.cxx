
#include <QtQml>
#include <QtPositioning>
#include <QtWebChannel>
#include <QtCore>
#include <QtNetwork>
#include <QtGui>
#include <QtQuick>
#include <QtWebEngineCore>
#include "hidden_symbols.h"
//  header block end

//  main block begin
extern "C"
uint64_t ensure_inline_symbol_webenginecore(void* this_) {
  uint64_t fnptrsumval = 0;

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlscheme.h:120
// [4] QIncompatibleFlag operator|(QWebEngineUrlScheme::Flags::enum_type, int) 
// (12)qm4197447498 (33)_ZorN19QWebEngineUrlScheme4FlagEi
/*void qm4197447498_301(QWebEngineUrlScheme::Flag f1, int f2)*/ {
  QWebEngineUrlScheme::Flag f1 = *(QWebEngineUrlScheme::Flag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QWebEngineUrlScheme::Flag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlscheme.h:120
// [4] QFlags<QWebEngineUrlScheme::Flags::enum_type> operator|(QWebEngineUrlScheme::Flags::enum_type, QWebEngineUrlScheme::Flags::enum_type) 
// (12)qm1710764592 (35)_ZorN19QWebEngineUrlScheme4FlagES0_
/*void qm1710764592_302(QWebEngineUrlScheme::Flag f1, QWebEngineUrlScheme::Flag f2)*/ {
  QWebEngineUrlScheme::Flag f1 = *(QWebEngineUrlScheme::Flag*)this_; QWebEngineUrlScheme::Flag f2 = *(QWebEngineUrlScheme::Flag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QWebEngineUrlScheme::Flag> (*)(QWebEngineUrlScheme::Flag, QWebEngineUrlScheme::Flag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlscheme.h:120
// [4] QFlags<QWebEngineUrlScheme::Flags::enum_type> operator|(QWebEngineUrlScheme::Flags::enum_type, QFlags<QWebEngineUrlScheme::Flags::enum_type>) 
// (11)qm209503768 (44)_ZorN19QWebEngineUrlScheme4FlagE6QFlagsIS0_E
/*void qm209503768_303(QWebEngineUrlScheme::Flag f1, QFlags<QWebEngineUrlScheme::Flag> f2)*/ {
  QWebEngineUrlScheme::Flag f1 = *(QWebEngineUrlScheme::Flag*)this_; QFlags<QWebEngineUrlScheme::Flag> f2 = *(QFlags<QWebEngineUrlScheme::Flag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QWebEngineUrlScheme::Flag> (*)(QWebEngineUrlScheme::Flag, QFlags<QWebEngineUrlScheme::Flag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginehttprequest.h:100
// [-2] void swap(QWebEngineHttpRequest &, QWebEngineHttpRequest &) 
// (12)qm4002455129 (34)_Z4swapR21QWebEngineHttpRequestS0_
/*void qm4002455129_101(QWebEngineHttpRequest & value1, QWebEngineHttpRequest & value2)*/ {
  QWebEngineHttpRequest & value1 = *(QWebEngineHttpRequest *)this_; QWebEngineHttpRequest & value2 = *(QWebEngineHttpRequest *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QWebEngineHttpRequest&, QWebEngineHttpRequest&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginecallback.h:93
// [-2] void swap(QWebEngineCallback<int> &, QWebEngineCallback<int> &) 
// (12)qm3934090536 (34)_Z4swapR18QWebEngineCallbackIiES1_
/*void qm3934090536_102(QWebEngineCallback<int> & value1, QWebEngineCallback<int> & value2)*/ {
  QWebEngineCallback<int> & value1 = *(QWebEngineCallback<int> *)this_; QWebEngineCallback<int> & value2 = *(QWebEngineCallback<int> *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QWebEngineCallback<int>&, QWebEngineCallback<int>&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginecallback.h:95
// [-2] void swap(QWebEngineCallback<bool> &, QWebEngineCallback<bool> &) 
// (12)qm2645378105 (34)_Z4swapR18QWebEngineCallbackIbES1_
/*void qm2645378105_103(QWebEngineCallback<bool> & value1, QWebEngineCallback<bool> & value2)*/ {
  QWebEngineCallback<bool> & value1 = *(QWebEngineCallback<bool> *)this_; QWebEngineCallback<bool> & value2 = *(QWebEngineCallback<bool> *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QWebEngineCallback<bool>&, QWebEngineCallback<bool>&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginecallback.h:97
// [-2] void swap(QWebEngineCallback<const QVariant &> &, QWebEngineCallback<const QVariant &> &) 
// (12)qm1210802818 (44)_Z4swapR18QWebEngineCallbackIRK8QVariantES4_
/*void qm1210802818_104(QWebEngineCallback<const QVariant &> & value1, QWebEngineCallback<const QVariant &> & value2)*/ {
  QWebEngineCallback<const QVariant &> & value1 = *(QWebEngineCallback<const QVariant &> *)this_; QWebEngineCallback<const QVariant &> & value2 = *(QWebEngineCallback<const QVariant &> *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QWebEngineCallback<QVariant const&>&, QWebEngineCallback<QVariant const&>&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginecallback.h:96
// [-2] void swap(QWebEngineCallback<const QString &> &, QWebEngineCallback<const QString &> &) 
// (12)qm3094495175 (43)_Z4swapR18QWebEngineCallbackIRK7QStringES4_
/*void qm3094495175_105(QWebEngineCallback<const QString &> & value1, QWebEngineCallback<const QString &> & value2)*/ {
  QWebEngineCallback<const QString &> & value1 = *(QWebEngineCallback<const QString &> *)this_; QWebEngineCallback<const QString &> & value2 = *(QWebEngineCallback<const QString &> *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QWebEngineCallback<QString const&>&, QWebEngineCallback<QString const&>&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginecallback.h:94
// [-2] void swap(QWebEngineCallback<const QByteArray &> &, QWebEngineCallback<const QByteArray &> &) 
// (12)qm3100183472 (47)_Z4swapR18QWebEngineCallbackIRK10QByteArrayES4_
/*void qm3100183472_106(QWebEngineCallback<const QByteArray &> & value1, QWebEngineCallback<const QByteArray &> & value2)*/ {
  QWebEngineCallback<const QByteArray &> & value1 = *(QWebEngineCallback<const QByteArray &> *)this_; QWebEngineCallback<const QByteArray &> & value2 = *(QWebEngineCallback<const QByteArray &> *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QWebEngineCallback<QByteArray const&>&, QWebEngineCallback<QByteArray const&>&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

  return fnptrsumval;
} // void ensure_inline_symbol_webenginecore

//  main block end
