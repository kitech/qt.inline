//  header block begin
// /usr/include/qt/QtWidgets/qtextbrowser.h
#include <qtextbrowser.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTextBrowser is pure virtual: false
// QTextBrowser has virtual projected: true
//  header block end

//  main block begin

class MyQTextBrowser : public QTextBrowser {
public:
  virtual ~MyQTextBrowser() {}
// void QTextBrowser(class QWidget *)
MyQTextBrowser(QWidget * parent) : QTextBrowser(parent) {}
// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QTextBrowser::event(e);
  }
  }
// void keyPressEvent(class QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * ev) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyPressEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextBrowser::keyPressEvent(ev);
  }
  }
// void mouseMoveEvent(class QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * ev) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextBrowser::mouseMoveEvent(ev);
  }
  }
// void mousePressEvent(class QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * ev) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mousePressEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextBrowser::mousePressEvent(ev);
  }
  }
// void mouseReleaseEvent(class QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * ev) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextBrowser::mouseReleaseEvent(ev);
  }
  }
// void focusOutEvent(class QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * ev) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusOutEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextBrowser::focusOutEvent(ev);
  }
  }
// bool focusNextPrevChild(_Bool)
  virtual bool focusNextPrevChild(bool next) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusNextPrevChild", &handled, 1, (uint64_t)next, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QTextBrowser::focusNextPrevChild(next);
  }
  }
// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextBrowser::paintEvent(e);
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:55
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK12QTextBrowser10metaObjectEv(void *this_) {
  return (void*)((QTextBrowser*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:66
// [-2] void QTextBrowser(class QWidget *)
extern "C"
void* C_ZN12QTextBrowserC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQTextBrowser*)(0);
  return  new MyQTextBrowser(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:67
// [-2] void ~QTextBrowser()
extern "C"
void C_ZN12QTextBrowserD2Ev(void *this_) {
  delete (QTextBrowser*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:69
// [8] QUrl source()
extern "C"
void* C_ZNK12QTextBrowser6sourceEv(void *this_) {
  auto rv = ((QTextBrowser*)this_)->source();
return new QUrl(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:72
// [-2] void setSearchPaths(const class QStringList &)
extern "C"
void C_ZN12QTextBrowser14setSearchPathsERK11QStringList(void *this_, QStringList* paths) {
  ((QTextBrowser*)this_)->setSearchPaths(*paths);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:74
// [16] QVariant loadResource(int, const class QUrl &)
extern "C"
void* C_ZN12QTextBrowser12loadResourceEiRK4QUrl(void *this_, int type, QUrl* name) {
  auto rv = ((QTextBrowser*)this_)->loadResource(type, *name);
return new QVariant(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:76
// [1] bool isBackwardAvailable()
extern "C"
bool C_ZNK12QTextBrowser19isBackwardAvailableEv(void *this_) {
  return (bool)((QTextBrowser*)this_)->isBackwardAvailable();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:77
// [1] bool isForwardAvailable()
extern "C"
bool C_ZNK12QTextBrowser18isForwardAvailableEv(void *this_) {
  return (bool)((QTextBrowser*)this_)->isForwardAvailable();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:78
// [-2] void clearHistory()
extern "C"
void C_ZN12QTextBrowser12clearHistoryEv(void *this_) {
  ((QTextBrowser*)this_)->clearHistory();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:79
// [8] QString historyTitle(int)
extern "C"
void* C_ZNK12QTextBrowser12historyTitleEi(void *this_, int arg0) {
  auto rv = ((QTextBrowser*)this_)->historyTitle(arg0);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:80
// [8] QUrl historyUrl(int)
extern "C"
void* C_ZNK12QTextBrowser10historyUrlEi(void *this_, int arg0) {
  auto rv = ((QTextBrowser*)this_)->historyUrl(arg0);
return new QUrl(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:81
// [4] int backwardHistoryCount()
extern "C"
int C_ZNK12QTextBrowser20backwardHistoryCountEv(void *this_) {
  return (int)((QTextBrowser*)this_)->backwardHistoryCount();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:82
// [4] int forwardHistoryCount()
extern "C"
int C_ZNK12QTextBrowser19forwardHistoryCountEv(void *this_) {
  return (int)((QTextBrowser*)this_)->forwardHistoryCount();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:84
// [1] bool openExternalLinks()
extern "C"
bool C_ZNK12QTextBrowser17openExternalLinksEv(void *this_) {
  return (bool)((QTextBrowser*)this_)->openExternalLinks();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:85
// [-2] void setOpenExternalLinks(_Bool)
extern "C"
void C_ZN12QTextBrowser20setOpenExternalLinksEb(void *this_, bool open) {
  ((QTextBrowser*)this_)->setOpenExternalLinks(open);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:87
// [1] bool openLinks()
extern "C"
bool C_ZNK12QTextBrowser9openLinksEv(void *this_) {
  return (bool)((QTextBrowser*)this_)->openLinks();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:88
// [-2] void setOpenLinks(_Bool)
extern "C"
void C_ZN12QTextBrowser12setOpenLinksEb(void *this_, bool open) {
  ((QTextBrowser*)this_)->setOpenLinks(open);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:91
// [-2] void setSource(const class QUrl &)
extern "C"
void C_ZN12QTextBrowser9setSourceERK4QUrl(void *this_, QUrl* name) {
  ((QTextBrowser*)this_)->setSource(*name);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:92
// [-2] void backward()
extern "C"
void C_ZN12QTextBrowser8backwardEv(void *this_) {
  ((QTextBrowser*)this_)->backward();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:93
// [-2] void forward()
extern "C"
void C_ZN12QTextBrowser7forwardEv(void *this_) {
  ((QTextBrowser*)this_)->forward();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:94
// [-2] void home()
extern "C"
void C_ZN12QTextBrowser4homeEv(void *this_) {
  ((QTextBrowser*)this_)->home();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:95
// [-2] void reload()
extern "C"
void C_ZN12QTextBrowser6reloadEv(void *this_) {
  ((QTextBrowser*)this_)->reload();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:98
// [-2] void backwardAvailable(_Bool)
extern "C"
void C_ZN12QTextBrowser17backwardAvailableEb(void *this_, bool arg0) {
  ((QTextBrowser*)this_)->backwardAvailable(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:99
// [-2] void forwardAvailable(_Bool)
extern "C"
void C_ZN12QTextBrowser16forwardAvailableEb(void *this_, bool arg0) {
  ((QTextBrowser*)this_)->forwardAvailable(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:100
// [-2] void historyChanged()
extern "C"
void C_ZN12QTextBrowser14historyChangedEv(void *this_) {
  ((QTextBrowser*)this_)->historyChanged();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:101
// [-2] void sourceChanged(const class QUrl &)
extern "C"
void C_ZN12QTextBrowser13sourceChangedERK4QUrl(void *this_, QUrl* arg0) {
  ((QTextBrowser*)this_)->sourceChanged(*arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:102
// [-2] void highlighted(const class QUrl &)
extern "C"
void C_ZN12QTextBrowser11highlightedERK4QUrl(void *this_, QUrl* arg0) {
  ((QTextBrowser*)this_)->highlighted(*arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:103
// [-2] void highlighted(const class QString &)
extern "C"
void C_ZN12QTextBrowser11highlightedERK7QString(void *this_, QString* arg0) {
  ((QTextBrowser*)this_)->highlighted(*arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:104
// [-2] void anchorClicked(const class QUrl &)
extern "C"
void C_ZN12QTextBrowser13anchorClickedERK4QUrl(void *this_, QUrl* arg0) {
  ((QTextBrowser*)this_)->anchorClicked(*arg0);
}
//  main block end
