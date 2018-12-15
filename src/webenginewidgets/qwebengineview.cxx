//  header block begin

// since 0x050400
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebengineview.h>
#include <QtWebEngineWidgets>
#include "callback_inherit.h"

// QWebEngineView is pure virtual: false
// QWebEngineView has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQWebEngineView_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWebEngineView_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWebEngineView_t qt_meta_stringdata_MyQWebEngineView = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQWebEngineView"
  },
  "MyQWebEngineView"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWebEngineView[] = {
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
class Q_DECL_EXPORT MyQWebEngineView : public QWebEngineView {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QWebEngineView::staticMetaObject,
  qt_meta_stringdata_MyQWebEngineView.data,
  qt_meta_data_MyQWebEngineView,
  qt_static_metacall, nullptr, nullptr
}};
virtual const QMetaObject *metaObject() const override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metaObject", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (QMetaObject*)irv; }
  return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject; 
}
virtual void *qt_metacast(const char *_clname) override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacast", &handled, 1, (uint64_t)_clname, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (void*)irv; }
  if (!_clname) return nullptr;
  if (!strcmp(_clname, qt_meta_stringdata_MyQWebEngineView.stringdata0))
      return static_cast<void*>(this);
  return QWebEngineView::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QWebEngineView::qt_metacall(_c, _id, _a);
   if (_id < 0 ) return _id;
   if (qt_metacall_fnptr != 0) {
      return qt_metacall_fnptr(this, _c, _id, _a);
   }
   int handled = 0;
   auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacall", &handled, 3, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (int)irv; }
   return _id;
  }
/*static*/ inline QString tr(const char *s, const char *c = nullptr, int n = -1)
{ return staticMetaObject.tr(s, c, n); }
/*static*/ inline QString trUtf8(const char *s, const char *c = nullptr, int n = -1)
 { return staticMetaObject.tr(s, c, n); }
Q_DECL_HIDDEN_STATIC_METACALL static void qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a){
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)_o, (char*)"qt_static_metacall", &handled, 4, (uint64_t)_o, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0);
}
private: struct QPrivateSignal {};

public:
  void* (*qt_metacast_fnptr)(void*, char*) = nullptr;
  int (*qt_metacall_fnptr)(QObject *, QMetaObject::Call, int, void **) = nullptr;
public:
  virtual ~MyQWebEngineView() {}
// void QWebEngineView(QWidget *)
MyQWebEngineView(QWidget * parent) : QWebEngineView(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [8] QWebEngineView * createWindow(QWebEnginePage::WebWindowType)
  virtual QWebEngineView * createWindow(QWebEnginePage::WebWindowType type_)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"createWindow", &handled, 1, (uint64_t)type_, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QWebEngineView *)(irv);
      // Pointer Pointer QWebEngineView *
    } else {
    return QWebEngineView::createWindow(type_);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void contextMenuEvent(QContextMenuEvent *)
  virtual void contextMenuEvent(QContextMenuEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"contextMenuEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QWebEngineView::contextMenuEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QWebEngineView::event(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void showEvent(QShowEvent *)
  virtual void showEvent(QShowEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"showEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QWebEngineView::showEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void hideEvent(QHideEvent *)
  virtual void hideEvent(QHideEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"hideEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QWebEngineView::hideEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void dragEnterEvent(QDragEnterEvent *)
  virtual void dragEnterEvent(QDragEnterEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dragEnterEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QWebEngineView::dragEnterEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void dragLeaveEvent(QDragLeaveEvent *)
  virtual void dragLeaveEvent(QDragLeaveEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dragLeaveEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QWebEngineView::dragLeaveEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void dragMoveEvent(QDragMoveEvent *)
  virtual void dragMoveEvent(QDragMoveEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dragMoveEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QWebEngineView::dragMoveEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void dropEvent(QDropEvent *)
  virtual void dropEvent(QDropEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dropEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QWebEngineView::dropEvent(e);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QWebEngineView_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQWebEngineView* qo = (MyQWebEngineView*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:122
// [8] QWebEngineView * createWindow(QWebEnginePage::WebWindowType)
extern "C" Q_DECL_EXPORT
void* C_ZN14QWebEngineView12createWindowEN14QWebEnginePage13WebWindowTypeE(void *this_, QWebEnginePage::WebWindowType type_) {
  return (void*)((QWebEngineView*)this_)->QWebEngineView::createWindow(type_);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:124
// [-2] void contextMenuEvent(QContextMenuEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView16contextMenuEventEP17QContextMenuEvent(void *this_, QContextMenuEvent * arg0) {
  ((QWebEngineView*)this_)->QWebEngineView::contextMenuEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:126
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN14QWebEngineView5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QWebEngineView*)this_)->QWebEngineView::event(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:127
// [-2] void showEvent(QShowEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView9showEventEP10QShowEvent(void *this_, QShowEvent * arg0) {
  ((QWebEngineView*)this_)->QWebEngineView::showEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:128
// [-2] void hideEvent(QHideEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView9hideEventEP10QHideEvent(void *this_, QHideEvent * arg0) {
  ((QWebEngineView*)this_)->QWebEngineView::hideEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:130
// [-2] void dragEnterEvent(QDragEnterEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView14dragEnterEventEP15QDragEnterEvent(void *this_, QDragEnterEvent * e) {
  ((QWebEngineView*)this_)->QWebEngineView::dragEnterEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:131
// [-2] void dragLeaveEvent(QDragLeaveEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView14dragLeaveEventEP15QDragLeaveEvent(void *this_, QDragLeaveEvent * e) {
  ((QWebEngineView*)this_)->QWebEngineView::dragLeaveEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:132
// [-2] void dragMoveEvent(QDragMoveEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView13dragMoveEventEP14QDragMoveEvent(void *this_, QDragMoveEvent * e) {
  ((QWebEngineView*)this_)->QWebEngineView::dragMoveEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:133
// [-2] void dropEvent(QDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView9dropEventEP10QDropEvent(void *this_, QDropEvent * e) {
  ((QWebEngineView*)this_)->QWebEngineView::dropEvent(e);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:59
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEngineView10metaObjectEv(void *this_) {
  return (void*)((QWebEngineView*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:59
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QWebEngineView11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QWebEngineView*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:59
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN14QWebEngineView11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QWebEngineView*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:59
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QWebEngineView2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QWebEngineView::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:59
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QWebEngineView6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QWebEngineView::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:69
// [-2] void QWebEngineView(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QWebEngineViewC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQWebEngineView*)(0);
  return  new MyQWebEngineView(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:70
// [-2] void ~QWebEngineView()
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineViewD2Ev(void *this_) {
  delete (QWebEngineView*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:72
// [8] QWebEnginePage * page()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEngineView4pageEv(void *this_) {
  return (void*)((QWebEngineView*)this_)->page();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:73
// [-2] void setPage(QWebEnginePage *)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView7setPageEP14QWebEnginePage(void *this_, QWebEnginePage * page) {
  ((QWebEngineView*)this_)->setPage(page);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:75
// [-2] void load(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView4loadERK4QUrl(void *this_, QUrl* url) {
  ((QWebEngineView*)this_)->load(*url);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:76
// [-2] void load(const QWebEngineHttpRequest &)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView4loadERK21QWebEngineHttpRequest(void *this_, QWebEngineHttpRequest* request) {
  ((QWebEngineView*)this_)->load(*request);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:77
// [-2] void setHtml(const QString &, const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView7setHtmlERK7QStringRK4QUrl(void *this_, QString* html, QUrl* baseUrl) {
  ((QWebEngineView*)this_)->setHtml(*html, *baseUrl);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:78
// [-2] void setContent(const QByteArray &, const QString &, const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView10setContentERK10QByteArrayRK7QStringRK4QUrl(void *this_, QByteArray* data, QString* mimeType, QUrl* baseUrl) {
  ((QWebEngineView*)this_)->setContent(*data, *mimeType, *baseUrl);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:80
// [8] QWebEngineHistory * history()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEngineView7historyEv(void *this_) {
  return (void*)((QWebEngineView*)this_)->history();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:82
// [8] QString title()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEngineView5titleEv(void *this_) {
  auto rv = ((QWebEngineView*)this_)->title();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:83
// [-2] void setUrl(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView6setUrlERK4QUrl(void *this_, QUrl* url) {
  ((QWebEngineView*)this_)->setUrl(*url);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:84
// [8] QUrl url()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEngineView3urlEv(void *this_) {
  auto rv = ((QWebEngineView*)this_)->url();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:85
// [8] QUrl iconUrl()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEngineView7iconUrlEv(void *this_) {
  auto rv = ((QWebEngineView*)this_)->iconUrl();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:86
// [8] QIcon icon()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEngineView4iconEv(void *this_) {
  auto rv = ((QWebEngineView*)this_)->icon();
return new QIcon(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:88
// [1] bool hasSelection()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QWebEngineView12hasSelectionEv(void *this_) {
  return (bool)((QWebEngineView*)this_)->hasSelection();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:89
// [8] QString selectedText()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEngineView12selectedTextEv(void *this_) {
  auto rv = ((QWebEngineView*)this_)->selectedText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:92
// [8] QAction * pageAction(QWebEnginePage::WebAction)
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEngineView10pageActionEN14QWebEnginePage9WebActionE(void *this_, QWebEnginePage::WebAction action) {
  return (void*)((QWebEngineView*)this_)->pageAction(action);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:94
// [-2] void triggerPageAction(QWebEnginePage::WebAction, bool)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView17triggerPageActionEN14QWebEnginePage9WebActionEb(void *this_, QWebEnginePage::WebAction action, bool checked) {
  ((QWebEngineView*)this_)->triggerPageAction(action, checked);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:96
// [8] qreal zoomFactor()
extern "C" Q_DECL_EXPORT
qreal C_ZNK14QWebEngineView10zoomFactorEv(void *this_) {
  return (qreal)((QWebEngineView*)this_)->zoomFactor();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:97
// [-2] void setZoomFactor(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView13setZoomFactorEd(void *this_, qreal factor) {
  ((QWebEngineView*)this_)->setZoomFactor(factor);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:98
// [-2] void findText(const QString &, QWebEnginePage::FindFlags, const QWebEngineCallback<bool> &)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView8findTextERK7QString6QFlagsIN14QWebEnginePage8FindFlagEERK18QWebEngineCallbackIbE(void *this_, QString* subString, QFlags<QWebEnginePage::FindFlag> options, QWebEngineCallback<bool>* resultCallback) {
  ((QWebEngineView*)this_)->findText(*subString, options, *resultCallback);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:100
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEngineView8sizeHintEv(void *this_) {
  auto rv = ((QWebEngineView*)this_)->sizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:101
// [8] QWebEngineSettings * settings()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEngineView8settingsEv(void *this_) {
  return (void*)((QWebEngineView*)this_)->settings();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:104
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView4stopEv(void *this_) {
  ((QWebEngineView*)this_)->stop();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:105
// [-2] void back()
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView4backEv(void *this_) {
  ((QWebEngineView*)this_)->back();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:106
// [-2] void forward()
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView7forwardEv(void *this_) {
  ((QWebEngineView*)this_)->forward();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:107
// [-2] void reload()
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView6reloadEv(void *this_) {
  ((QWebEngineView*)this_)->reload();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:110
// [-2] void loadStarted()
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView11loadStartedEv(void *this_) {
  ((QWebEngineView*)this_)->loadStarted();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:111
// [-2] void loadProgress(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView12loadProgressEi(void *this_, int progress) {
  ((QWebEngineView*)this_)->loadProgress(progress);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:112
// [-2] void loadFinished(bool)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView12loadFinishedEb(void *this_, bool arg0) {
  ((QWebEngineView*)this_)->loadFinished(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:113
// [-2] void titleChanged(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView12titleChangedERK7QString(void *this_, QString* title) {
  ((QWebEngineView*)this_)->titleChanged(*title);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:114
// [-2] void selectionChanged()
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView16selectionChangedEv(void *this_) {
  ((QWebEngineView*)this_)->selectionChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:115
// [-2] void urlChanged(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView10urlChangedERK4QUrl(void *this_, QUrl* arg0) {
  ((QWebEngineView*)this_)->urlChanged(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:116
// [-2] void iconUrlChanged(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView14iconUrlChangedERK4QUrl(void *this_, QUrl* arg0) {
  ((QWebEngineView*)this_)->iconUrlChanged(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:117
// [-2] void iconChanged(const QIcon &)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView11iconChangedERK5QIcon(void *this_, QIcon* arg0) {
  ((QWebEngineView*)this_)->iconChanged(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:118
// [-2] void renderProcessTerminated(QWebEnginePage::RenderProcessTerminationStatus, int)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView23renderProcessTerminatedEN14QWebEnginePage30RenderProcessTerminationStatusEi(void *this_, QWebEnginePage::RenderProcessTerminationStatus terminationStatus, int exitCode) {
  ((QWebEngineView*)this_)->renderProcessTerminated(terminationStatus, exitCode);
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
