// /usr/include/qt/QtWidgets/qtextbrowser.h
#include <qtextbrowser.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qtextbrowser.h:55
// const QMetaObject * metaObject()
extern "C"
void C_ZNK12QTextBrowser10metaObjectEv(void *this_) {
  /*return*/ ((QTextBrowser*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qtextbrowser.h:66
// void QTextBrowser(class QWidget *)
extern "C"
void* C_ZN12QTextBrowserC1EP7QWidget(QWidget * parent) {
  return new QTextBrowser(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qtextbrowser.h:67
// void ~QTextBrowser()
extern "C"
void C_ZN12QTextBrowserD1Ev(void *this_) {
  delete (QTextBrowser*)(this_);
}
// /usr/include/qt/QtWidgets/qtextbrowser.h:69
// QUrl source()
extern "C"
void C_ZNK12QTextBrowser6sourceEv(void *this_) {
  /*return*/ ((QTextBrowser*)this_)->source();
}
// /usr/include/qt/QtWidgets/qtextbrowser.h:71
// QStringList searchPaths()
extern "C"
void C_ZNK12QTextBrowser11searchPathsEv(void *this_) {
  /*return*/ ((QTextBrowser*)this_)->searchPaths();
}
// /usr/include/qt/QtWidgets/qtextbrowser.h:72
// void setSearchPaths(const class QStringList &)
extern "C"
void C_ZN12QTextBrowser14setSearchPathsERK11QStringList(void *this_, const QStringList & paths) {
  ((QTextBrowser*)this_)->setSearchPaths(paths);
}
// virtual
// /usr/include/qt/QtWidgets/qtextbrowser.h:74
// QVariant loadResource(int, const class QUrl &)
extern "C"
void C_ZN12QTextBrowser12loadResourceEiRK4QUrl(void *this_, int type, const QUrl & name) {
  /*return*/ ((QTextBrowser*)this_)->loadResource(type, name);
}
// /usr/include/qt/QtWidgets/qtextbrowser.h:76
// bool isBackwardAvailable()
extern "C"
void C_ZNK12QTextBrowser19isBackwardAvailableEv(void *this_) {
  /*return*/ ((QTextBrowser*)this_)->isBackwardAvailable();
}
// /usr/include/qt/QtWidgets/qtextbrowser.h:77
// bool isForwardAvailable()
extern "C"
void C_ZNK12QTextBrowser18isForwardAvailableEv(void *this_) {
  /*return*/ ((QTextBrowser*)this_)->isForwardAvailable();
}
// /usr/include/qt/QtWidgets/qtextbrowser.h:78
// void clearHistory()
extern "C"
void C_ZN12QTextBrowser12clearHistoryEv(void *this_) {
  ((QTextBrowser*)this_)->clearHistory();
}
// /usr/include/qt/QtWidgets/qtextbrowser.h:79
// QString historyTitle(int)
extern "C"
void C_ZNK12QTextBrowser12historyTitleEi(void *this_, int a0) {
  /*return*/ ((QTextBrowser*)this_)->historyTitle(a0);
}
// /usr/include/qt/QtWidgets/qtextbrowser.h:80
// QUrl historyUrl(int)
extern "C"
void C_ZNK12QTextBrowser10historyUrlEi(void *this_, int a0) {
  /*return*/ ((QTextBrowser*)this_)->historyUrl(a0);
}
// /usr/include/qt/QtWidgets/qtextbrowser.h:81
// int backwardHistoryCount()
extern "C"
void C_ZNK12QTextBrowser20backwardHistoryCountEv(void *this_) {
  /*return*/ ((QTextBrowser*)this_)->backwardHistoryCount();
}
// /usr/include/qt/QtWidgets/qtextbrowser.h:82
// int forwardHistoryCount()
extern "C"
void C_ZNK12QTextBrowser19forwardHistoryCountEv(void *this_) {
  /*return*/ ((QTextBrowser*)this_)->forwardHistoryCount();
}
// /usr/include/qt/QtWidgets/qtextbrowser.h:84
// bool openExternalLinks()
extern "C"
void C_ZNK12QTextBrowser17openExternalLinksEv(void *this_) {
  /*return*/ ((QTextBrowser*)this_)->openExternalLinks();
}
// /usr/include/qt/QtWidgets/qtextbrowser.h:85
// void setOpenExternalLinks(_Bool)
extern "C"
void C_ZN12QTextBrowser20setOpenExternalLinksEb(void *this_, bool open) {
  ((QTextBrowser*)this_)->setOpenExternalLinks(open);
}
// /usr/include/qt/QtWidgets/qtextbrowser.h:87
// bool openLinks()
extern "C"
void C_ZNK12QTextBrowser9openLinksEv(void *this_) {
  /*return*/ ((QTextBrowser*)this_)->openLinks();
}
// /usr/include/qt/QtWidgets/qtextbrowser.h:88
// void setOpenLinks(_Bool)
extern "C"
void C_ZN12QTextBrowser12setOpenLinksEb(void *this_, bool open) {
  ((QTextBrowser*)this_)->setOpenLinks(open);
}
// virtual
// /usr/include/qt/QtWidgets/qtextbrowser.h:91
// void setSource(const class QUrl &)
extern "C"
void C_ZN12QTextBrowser9setSourceERK4QUrl(void *this_, const QUrl & name) {
  ((QTextBrowser*)this_)->setSource(name);
}
// virtual
// /usr/include/qt/QtWidgets/qtextbrowser.h:92
// void backward()
extern "C"
void C_ZN12QTextBrowser8backwardEv(void *this_) {
  ((QTextBrowser*)this_)->backward();
}
// virtual
// /usr/include/qt/QtWidgets/qtextbrowser.h:93
// void forward()
extern "C"
void C_ZN12QTextBrowser7forwardEv(void *this_) {
  ((QTextBrowser*)this_)->forward();
}
// virtual
// /usr/include/qt/QtWidgets/qtextbrowser.h:94
// void home()
extern "C"
void C_ZN12QTextBrowser4homeEv(void *this_) {
  ((QTextBrowser*)this_)->home();
}
// virtual
// /usr/include/qt/QtWidgets/qtextbrowser.h:95
// void reload()
extern "C"
void C_ZN12QTextBrowser6reloadEv(void *this_) {
  ((QTextBrowser*)this_)->reload();
}
// /usr/include/qt/QtWidgets/qtextbrowser.h:98
// void backwardAvailable(_Bool)
extern "C"
void C_ZN12QTextBrowser17backwardAvailableEb(void *this_, bool a0) {
  ((QTextBrowser*)this_)->backwardAvailable(a0);
}
// /usr/include/qt/QtWidgets/qtextbrowser.h:99
// void forwardAvailable(_Bool)
extern "C"
void C_ZN12QTextBrowser16forwardAvailableEb(void *this_, bool a0) {
  ((QTextBrowser*)this_)->forwardAvailable(a0);
}
// /usr/include/qt/QtWidgets/qtextbrowser.h:100
// void historyChanged()
extern "C"
void C_ZN12QTextBrowser14historyChangedEv(void *this_) {
  ((QTextBrowser*)this_)->historyChanged();
}
// /usr/include/qt/QtWidgets/qtextbrowser.h:101
// void sourceChanged(const class QUrl &)
extern "C"
void C_ZN12QTextBrowser13sourceChangedERK4QUrl(void *this_, const QUrl & a0) {
  ((QTextBrowser*)this_)->sourceChanged(a0);
}
// /usr/include/qt/QtWidgets/qtextbrowser.h:102
// void highlighted(const class QUrl &)
extern "C"
void C_ZN12QTextBrowser11highlightedERK4QUrl(void *this_, const QUrl & a0) {
  ((QTextBrowser*)this_)->highlighted(a0);
}
// /usr/include/qt/QtWidgets/qtextbrowser.h:103
// void highlighted(const class QString &)
extern "C"
void C_ZN12QTextBrowser11highlightedERK7QString(void *this_, const QString & a0) {
  ((QTextBrowser*)this_)->highlighted(a0);
}
// /usr/include/qt/QtWidgets/qtextbrowser.h:104
// void anchorClicked(const class QUrl &)
extern "C"
void C_ZN12QTextBrowser13anchorClickedERK4QUrl(void *this_, const QUrl & a0) {
  ((QTextBrowser*)this_)->anchorClicked(a0);
}