
#include <QtQml>
#include <QtPositioning>
#include <QtWebChannel>
#include <QtQuickWidgets>
#include <QtCore>
#include <QtNetwork>
#include <QtGui>
#include <QtWidgets>
#include <QtPrintSupport>
#include <QtQuick>
#include <QtWebEngineCore>
#include <QtWebEngineWidgets>
#include "hidden_symbols.h"
//  header block end

//  main block begin
extern "C"
uint64_t ensure_inline_symbol_webenginewidgets(void* this_) {
  uint64_t fnptrsumval = 0;

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginecontextmenudata.h:128
// [4] QIncompatibleFlag operator|(QWebEngineContextMenuData::MediaFlags::enum_type, int) 
// (12)qm1107880789 (44)_ZorN25QWebEngineContextMenuData9MediaFlagEi
/*void qm1107880789_304(QWebEngineContextMenuData::MediaFlag f1, int f2)*/ {
  QWebEngineContextMenuData::MediaFlag f1 = *(QWebEngineContextMenuData::MediaFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QWebEngineContextMenuData::MediaFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginecontextmenudata.h:128
// [4] QFlags<QWebEngineContextMenuData::MediaFlags::enum_type> operator|(QWebEngineContextMenuData::MediaFlags::enum_type, QWebEngineContextMenuData::MediaFlags::enum_type) 
// (12)qm3164854470 (46)_ZorN25QWebEngineContextMenuData9MediaFlagES0_
/*void qm3164854470_305(QWebEngineContextMenuData::MediaFlag f1, QWebEngineContextMenuData::MediaFlag f2)*/ {
  QWebEngineContextMenuData::MediaFlag f1 = *(QWebEngineContextMenuData::MediaFlag*)this_; QWebEngineContextMenuData::MediaFlag f2 = *(QWebEngineContextMenuData::MediaFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QWebEngineContextMenuData::MediaFlag> (*)(QWebEngineContextMenuData::MediaFlag, QWebEngineContextMenuData::MediaFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginecontextmenudata.h:128
// [4] QFlags<QWebEngineContextMenuData::MediaFlags::enum_type> operator|(QWebEngineContextMenuData::MediaFlags::enum_type, QFlags<QWebEngineContextMenuData::MediaFlags::enum_type>) 
// (12)qm4016289035 (55)_ZorN25QWebEngineContextMenuData9MediaFlagE6QFlagsIS0_E
/*void qm4016289035_306(QWebEngineContextMenuData::MediaFlag f1, QFlags<QWebEngineContextMenuData::MediaFlag> f2)*/ {
  QWebEngineContextMenuData::MediaFlag f1 = *(QWebEngineContextMenuData::MediaFlag*)this_; QFlags<QWebEngineContextMenuData::MediaFlag> f2 = *(QFlags<QWebEngineContextMenuData::MediaFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QWebEngineContextMenuData::MediaFlag> (*)(QWebEngineContextMenuData::MediaFlag, QFlags<QWebEngineContextMenuData::MediaFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginecontextmenudata.h:129
// [4] QIncompatibleFlag operator|(QWebEngineContextMenuData::EditFlags::enum_type, int) 
// (11)qm526558793 (43)_ZorN25QWebEngineContextMenuData8EditFlagEi
/*void qm526558793_307(QWebEngineContextMenuData::EditFlag f1, int f2)*/ {
  QWebEngineContextMenuData::EditFlag f1 = *(QWebEngineContextMenuData::EditFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QWebEngineContextMenuData::EditFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginecontextmenudata.h:129
// [4] QFlags<QWebEngineContextMenuData::EditFlags::enum_type> operator|(QWebEngineContextMenuData::EditFlags::enum_type, QWebEngineContextMenuData::EditFlags::enum_type) 
// (12)qm1387914716 (45)_ZorN25QWebEngineContextMenuData8EditFlagES0_
/*void qm1387914716_308(QWebEngineContextMenuData::EditFlag f1, QWebEngineContextMenuData::EditFlag f2)*/ {
  QWebEngineContextMenuData::EditFlag f1 = *(QWebEngineContextMenuData::EditFlag*)this_; QWebEngineContextMenuData::EditFlag f2 = *(QWebEngineContextMenuData::EditFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QWebEngineContextMenuData::EditFlag> (*)(QWebEngineContextMenuData::EditFlag, QWebEngineContextMenuData::EditFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginecontextmenudata.h:129
// [4] QFlags<QWebEngineContextMenuData::EditFlags::enum_type> operator|(QWebEngineContextMenuData::EditFlags::enum_type, QFlags<QWebEngineContextMenuData::EditFlags::enum_type>) 
// (11)qm665158202 (54)_ZorN25QWebEngineContextMenuData8EditFlagE6QFlagsIS0_E
/*void qm665158202_309(QWebEngineContextMenuData::EditFlag f1, QFlags<QWebEngineContextMenuData::EditFlag> f2)*/ {
  QWebEngineContextMenuData::EditFlag f1 = *(QWebEngineContextMenuData::EditFlag*)this_; QFlags<QWebEngineContextMenuData::EditFlag> f2 = *(QFlags<QWebEngineContextMenuData::EditFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QWebEngineContextMenuData::EditFlag> (*)(QWebEngineContextMenuData::EditFlag, QFlags<QWebEngineContextMenuData::EditFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:405
// [4] QIncompatibleFlag operator|(QWebEnginePage::FindFlags::enum_type, int) 
// (12)qm3898100828 (32)_ZorN14QWebEnginePage8FindFlagEi
/*void qm3898100828_310(QWebEnginePage::FindFlag f1, int f2)*/ {
  QWebEnginePage::FindFlag f1 = *(QWebEnginePage::FindFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QWebEnginePage::FindFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:405
// [4] QFlags<QWebEnginePage::FindFlags::enum_type> operator|(QWebEnginePage::FindFlags::enum_type, QWebEnginePage::FindFlags::enum_type) 
// (11)qm634650516 (34)_ZorN14QWebEnginePage8FindFlagES0_
/*void qm634650516_311(QWebEnginePage::FindFlag f1, QWebEnginePage::FindFlag f2)*/ {
  QWebEnginePage::FindFlag f1 = *(QWebEnginePage::FindFlag*)this_; QWebEnginePage::FindFlag f2 = *(QWebEnginePage::FindFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QWebEnginePage::FindFlag> (*)(QWebEnginePage::FindFlag, QWebEnginePage::FindFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginepage.h:405
// [4] QFlags<QWebEnginePage::FindFlags::enum_type> operator|(QWebEnginePage::FindFlags::enum_type, QFlags<QWebEnginePage::FindFlags::enum_type>) 
// (12)qm2524258324 (43)_ZorN14QWebEnginePage8FindFlagE6QFlagsIS0_E
/*void qm2524258324_312(QWebEnginePage::FindFlag f1, QFlags<QWebEnginePage::FindFlag> f2)*/ {
  QWebEnginePage::FindFlag f1 = *(QWebEnginePage::FindFlag*)this_; QFlags<QWebEnginePage::FindFlag> f2 = *(QFlags<QWebEnginePage::FindFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QWebEnginePage::FindFlag> (*)(QWebEnginePage::FindFlag, QFlags<QWebEnginePage::FindFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginehistory.h:82
// [-2] void swap(QWebEngineHistoryItem &, QWebEngineHistoryItem &) 
// (11)qm978033498 (34)_Z4swapR21QWebEngineHistoryItemS0_
/*void qm978033498_107(QWebEngineHistoryItem & value1, QWebEngineHistoryItem & value2)*/ {
  QWebEngineHistoryItem & value1 = *(QWebEngineHistoryItem *)this_; QWebEngineHistoryItem & value2 = *(QWebEngineHistoryItem *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QWebEngineHistoryItem&, QWebEngineHistoryItem&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescript.h:105
// [-2] void swap(QWebEngineScript &, QWebEngineScript &) 
// (12)qm1676327539 (29)_Z4swapR16QWebEngineScriptS0_
/*void qm1676327539_108(QWebEngineScript & value1, QWebEngineScript & value2)*/ {
  QWebEngineScript & value1 = *(QWebEngineScript *)this_; QWebEngineScript & value2 = *(QWebEngineScript *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QWebEngineScript&, QWebEngineScript&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

  return fnptrsumval;
} // void ensure_inline_symbol_webenginewidgets

//  main block end
