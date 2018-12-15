//  header block begin

// /usr/include/qt/QtWidgets/qtextbrowser.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextbrowser.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTextBrowser is pure virtual: false
// QTextBrowser has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTextBrowser_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextBrowser_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextBrowser_t qt_meta_stringdata_MyQTextBrowser = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQTextBrowser"
  },
  "MyQTextBrowser"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextBrowser[] = {
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
class Q_DECL_EXPORT MyQTextBrowser : public QTextBrowser {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QTextBrowser::staticMetaObject,
  qt_meta_stringdata_MyQTextBrowser.data,
  qt_meta_data_MyQTextBrowser,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQTextBrowser.stringdata0))
      return static_cast<void*>(this);
  return QTextBrowser::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QTextBrowser::qt_metacall(_c, _id, _a);
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
  virtual ~MyQTextBrowser() {}
// void QTextBrowser(QWidget *)
MyQTextBrowser(QWidget * parent) : QTextBrowser(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QTextBrowser::event(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void keyPressEvent(QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * ev)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyPressEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTextBrowser::keyPressEvent(ev);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseMoveEvent(QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * ev)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTextBrowser::mouseMoveEvent(ev);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mousePressEvent(QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * ev)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mousePressEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTextBrowser::mousePressEvent(ev);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseReleaseEvent(QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * ev)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTextBrowser::mouseReleaseEvent(ev);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void focusOutEvent(QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * ev)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusOutEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTextBrowser::focusOutEvent(ev);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool focusNextPrevChild(bool)
  virtual bool focusNextPrevChild(bool next)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusNextPrevChild", &handled, 1, (uint64_t)next, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QTextBrowser::focusNextPrevChild(next);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTextBrowser::paintEvent(e);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QTextBrowser_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQTextBrowser* qo = (MyQTextBrowser*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:108
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN12QTextBrowser5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QTextBrowser*)this_)->QTextBrowser::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:109
// [-2] void keyPressEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * ev) {
  ((QTextBrowser*)this_)->QTextBrowser::keyPressEvent(ev);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:110
// [-2] void mouseMoveEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * ev) {
  ((QTextBrowser*)this_)->QTextBrowser::mouseMoveEvent(ev);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:111
// [-2] void mousePressEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * ev) {
  ((QTextBrowser*)this_)->QTextBrowser::mousePressEvent(ev);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:112
// [-2] void mouseReleaseEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * ev) {
  ((QTextBrowser*)this_)->QTextBrowser::mouseReleaseEvent(ev);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:113
// [-2] void focusOutEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser13focusOutEventEP11QFocusEvent(void *this_, QFocusEvent * ev) {
  ((QTextBrowser*)this_)->QTextBrowser::focusOutEvent(ev);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:114
// [1] bool focusNextPrevChild(bool)
extern "C" Q_DECL_EXPORT
bool C_ZN12QTextBrowser18focusNextPrevChildEb(void *this_, bool next) {
  return (bool)((QTextBrowser*)this_)->QTextBrowser::focusNextPrevChild(next);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:115
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser10paintEventEP11QPaintEvent(void *this_, QPaintEvent * e) {
  ((QTextBrowser*)this_)->QTextBrowser::paintEvent(e);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QTextBrowser10metaObjectEv(void *this_) {
  return (void*)((QTextBrowser*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:56
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QTextBrowser11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QTextBrowser*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:56
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN12QTextBrowser11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QTextBrowser*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:56
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QTextBrowser2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTextBrowser::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:56
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QTextBrowser6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTextBrowser::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:67
// [-2] void QTextBrowser(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QTextBrowserC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQTextBrowser*)(0);
  return  new MyQTextBrowser(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:68
// [-2] void ~QTextBrowser()
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowserD2Ev(void *this_) {
  delete (QTextBrowser*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:70
// [8] QUrl source()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QTextBrowser6sourceEv(void *this_) {
  auto rv = ((QTextBrowser*)this_)->source();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:72
// [8] QStringList searchPaths()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QTextBrowser11searchPathsEv(void *this_) {
  auto rv = ((QTextBrowser*)this_)->searchPaths();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:73
// [-2] void setSearchPaths(const QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser14setSearchPathsERK11QStringList(void *this_, QStringList* paths) {
  ((QTextBrowser*)this_)->setSearchPaths(*paths);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:75
// [16] QVariant loadResource(int, const QUrl &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QTextBrowser12loadResourceEiRK4QUrl(void *this_, int type_, QUrl* name) {
  auto rv = ((QTextBrowser*)this_)->loadResource(type_, *name);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtextbrowser.h:77
// [1] bool isBackwardAvailable()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
bool C_ZNK12QTextBrowser19isBackwardAvailableEv(void *this_) {
  return (bool)((QTextBrowser*)this_)->isBackwardAvailable();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtextbrowser.h:78
// [1] bool isForwardAvailable()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
bool C_ZNK12QTextBrowser18isForwardAvailableEv(void *this_) {
  return (bool)((QTextBrowser*)this_)->isForwardAvailable();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtextbrowser.h:79
// [-2] void clearHistory()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser12clearHistoryEv(void *this_) {
  ((QTextBrowser*)this_)->clearHistory();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qtextbrowser.h:80
// [8] QString historyTitle(int)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK12QTextBrowser12historyTitleEi(void *this_, int arg0) {
  auto rv = ((QTextBrowser*)this_)->historyTitle(arg0);
return new QString(rv);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qtextbrowser.h:81
// [8] QUrl historyUrl(int)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK12QTextBrowser10historyUrlEi(void *this_, int arg0) {
  auto rv = ((QTextBrowser*)this_)->historyUrl(arg0);
return new QUrl(rv);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qtextbrowser.h:82
// [4] int backwardHistoryCount()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
int C_ZNK12QTextBrowser20backwardHistoryCountEv(void *this_) {
  return (int)((QTextBrowser*)this_)->backwardHistoryCount();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qtextbrowser.h:83
// [4] int forwardHistoryCount()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
int C_ZNK12QTextBrowser19forwardHistoryCountEv(void *this_) {
  return (int)((QTextBrowser*)this_)->forwardHistoryCount();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:85
// [1] bool openExternalLinks()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QTextBrowser17openExternalLinksEv(void *this_) {
  return (bool)((QTextBrowser*)this_)->openExternalLinks();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:86
// [-2] void setOpenExternalLinks(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser20setOpenExternalLinksEb(void *this_, bool open) {
  ((QTextBrowser*)this_)->setOpenExternalLinks(open);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:88
// [1] bool openLinks()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QTextBrowser9openLinksEv(void *this_) {
  return (bool)((QTextBrowser*)this_)->openLinks();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:89
// [-2] void setOpenLinks(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser12setOpenLinksEb(void *this_, bool open) {
  ((QTextBrowser*)this_)->setOpenLinks(open);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:92
// [-2] void setSource(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser9setSourceERK4QUrl(void *this_, QUrl* name) {
  ((QTextBrowser*)this_)->setSource(*name);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:93
// [-2] void backward()
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser8backwardEv(void *this_) {
  ((QTextBrowser*)this_)->backward();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:94
// [-2] void forward()
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser7forwardEv(void *this_) {
  ((QTextBrowser*)this_)->forward();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:95
// [-2] void home()
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser4homeEv(void *this_) {
  ((QTextBrowser*)this_)->home();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:96
// [-2] void reload()
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser6reloadEv(void *this_) {
  ((QTextBrowser*)this_)->reload();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:99
// [-2] void backwardAvailable(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser17backwardAvailableEb(void *this_, bool arg0) {
  ((QTextBrowser*)this_)->backwardAvailable(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:100
// [-2] void forwardAvailable(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser16forwardAvailableEb(void *this_, bool arg0) {
  ((QTextBrowser*)this_)->forwardAvailable(arg0);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qtextbrowser.h:101
// [-2] void historyChanged()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser14historyChangedEv(void *this_) {
  ((QTextBrowser*)this_)->historyChanged();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:102
// [-2] void sourceChanged(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser13sourceChangedERK4QUrl(void *this_, QUrl* arg0) {
  ((QTextBrowser*)this_)->sourceChanged(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:103
// [-2] void highlighted(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser11highlightedERK4QUrl(void *this_, QUrl* arg0) {
  ((QTextBrowser*)this_)->highlighted(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:104
// [-2] void highlighted(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser11highlightedERK7QString(void *this_, QString* arg0) {
  ((QTextBrowser*)this_)->highlighted(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:105
// [-2] void anchorClicked(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser13anchorClickedERK4QUrl(void *this_, QUrl* arg0) {
  ((QTextBrowser*)this_)->anchorClicked(*arg0);
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
