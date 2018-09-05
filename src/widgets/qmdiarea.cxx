//  header block begin
// since 0x040300
// /usr/include/qt/QtWidgets/qmdiarea.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmdiarea.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QMdiArea is pure virtual: false
// QMdiArea has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQMdiArea_t {
  QByteArrayData data[1];
  char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMdiArea_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMdiArea_t qt_meta_stringdata_MyQMdiArea = {
   {
  QT_MOC_LITERAL(0, 0, 10), // "MyQMdiArea"
  },
  "MyQMdiArea"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMdiArea[] = {
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
class Q_DECL_EXPORT MyQMdiArea : public QMdiArea {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QMdiArea::staticMetaObject,
  qt_meta_stringdata_MyQMdiArea.data,
  qt_meta_data_MyQMdiArea,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQMdiArea.stringdata0))
      return static_cast<void*>(this);
  return QMdiArea::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QMdiArea::qt_metacall(_c, _id, _a);
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
  virtual ~MyQMdiArea() {}
// void QMdiArea(QWidget *)
MyQMdiArea(QWidget * parent) : QMdiArea(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void setupViewport(QWidget *)
  virtual void setupViewport(QWidget * viewport)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setupViewport", &handled, 1, (uint64_t)viewport, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMdiArea::setupViewport(viewport);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QMdiArea::event(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool eventFilter(QObject *, QEvent *)
  virtual bool eventFilter(QObject * object, QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"eventFilter", &handled, 2, (uint64_t)object, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QMdiArea::eventFilter(object, event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * paintEvent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)paintEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMdiArea::paintEvent(paintEvent);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void childEvent(QChildEvent *)
  virtual void childEvent(QChildEvent * childEvent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"childEvent", &handled, 1, (uint64_t)childEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMdiArea::childEvent(childEvent);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * resizeEvent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeEvent", &handled, 1, (uint64_t)resizeEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMdiArea::resizeEvent(resizeEvent);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void timerEvent(QTimerEvent *)
  virtual void timerEvent(QTimerEvent * timerEvent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"timerEvent", &handled, 1, (uint64_t)timerEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMdiArea::timerEvent(timerEvent);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void showEvent(QShowEvent *)
  virtual void showEvent(QShowEvent * showEvent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"showEvent", &handled, 1, (uint64_t)showEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMdiArea::showEvent(showEvent);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool viewportEvent(QEvent *)
  virtual bool viewportEvent(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"viewportEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QMdiArea::viewportEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void scrollContentsBy(int, int)
  virtual void scrollContentsBy(int dx, int dy)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"scrollContentsBy", &handled, 2, (uint64_t)dx, (uint64_t)dy, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMdiArea::scrollContentsBy(dx, dy);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QMdiArea_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQMdiArea* qo = (MyQMdiArea*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:146
// [-2] void setupViewport(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN8QMdiArea13setupViewportEP7QWidget(void *this_, QWidget * viewport) {
  ((QMdiArea*)this_)->QMdiArea::setupViewport(viewport);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:149
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN8QMdiArea5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QMdiArea*)this_)->QMdiArea::event(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:150
// [1] bool eventFilter(QObject *, QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN8QMdiArea11eventFilterEP7QObjectP6QEvent(void *this_, QObject * object, QEvent * event) {
  return (bool)((QMdiArea*)this_)->QMdiArea::eventFilter(object, event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:151
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN8QMdiArea10paintEventEP11QPaintEvent(void *this_, QPaintEvent * paintEvent) {
  ((QMdiArea*)this_)->QMdiArea::paintEvent(paintEvent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:152
// [-2] void childEvent(QChildEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN8QMdiArea10childEventEP11QChildEvent(void *this_, QChildEvent * childEvent) {
  ((QMdiArea*)this_)->QMdiArea::childEvent(childEvent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:153
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN8QMdiArea11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * resizeEvent) {
  ((QMdiArea*)this_)->QMdiArea::resizeEvent(resizeEvent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:154
// [-2] void timerEvent(QTimerEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN8QMdiArea10timerEventEP11QTimerEvent(void *this_, QTimerEvent * timerEvent) {
  ((QMdiArea*)this_)->QMdiArea::timerEvent(timerEvent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:155
// [-2] void showEvent(QShowEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN8QMdiArea9showEventEP10QShowEvent(void *this_, QShowEvent * showEvent) {
  ((QMdiArea*)this_)->QMdiArea::showEvent(showEvent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:156
// [1] bool viewportEvent(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN8QMdiArea13viewportEventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QMdiArea*)this_)->QMdiArea::viewportEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:157
// [-2] void scrollContentsBy(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QMdiArea16scrollContentsByEii(void *this_, int dx, int dy) {
  ((QMdiArea*)this_)->QMdiArea::scrollContentsBy(dx, dy);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:58
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QMdiArea10metaObjectEv(void *this_) {
  return (void*)((QMdiArea*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:58
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN8QMdiArea11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QMdiArea*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:58
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN8QMdiArea11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QMdiArea*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:58
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN8QMdiArea2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMdiArea::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:58
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN8QMdiArea6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMdiArea::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:90
// [-2] void QMdiArea(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN8QMdiAreaC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQMdiArea*)(0);
  return  new MyQMdiArea(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:91
// [-2] void ~QMdiArea()
extern "C" Q_DECL_EXPORT
void C_ZN8QMdiAreaD2Ev(void *this_) {
  delete (QMdiArea*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:93
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QMdiArea8sizeHintEv(void *this_) {
  auto rv = ((QMdiArea*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:94
// [8] QSize minimumSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QMdiArea15minimumSizeHintEv(void *this_) {
  auto rv = ((QMdiArea*)this_)->minimumSizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:96
// [8] QMdiSubWindow * currentSubWindow()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QMdiArea16currentSubWindowEv(void *this_) {
  return (void*)((QMdiArea*)this_)->currentSubWindow();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:97
// [8] QMdiSubWindow * activeSubWindow()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QMdiArea15activeSubWindowEv(void *this_) {
  return (void*)((QMdiArea*)this_)->activeSubWindow();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:98
// [-2] QList<QMdiSubWindow *> subWindowList(QMdiArea::WindowOrder)
extern "C" Q_DECL_EXPORT
QList<QMdiSubWindow *>* C_ZNK8QMdiArea13subWindowListENS_11WindowOrderE(void *this_, QMdiArea::WindowOrder order) {
  auto rv = ((QMdiArea*)this_)->subWindowList(order);
return new QList<QMdiSubWindow *>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:100
// [8] QMdiSubWindow * addSubWindow(QWidget *, Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN8QMdiArea12addSubWindowEP7QWidget6QFlagsIN2Qt10WindowTypeEE(void *this_, QWidget * widget, QFlags<Qt::WindowType> flags) {
  return (void*)((QMdiArea*)this_)->addSubWindow(widget, flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:101
// [-2] void removeSubWindow(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN8QMdiArea15removeSubWindowEP7QWidget(void *this_, QWidget * widget) {
  ((QMdiArea*)this_)->removeSubWindow(widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:103
// [8] QBrush background()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QMdiArea10backgroundEv(void *this_) {
  auto rv = ((QMdiArea*)this_)->background();
return new QBrush(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:104
// [-2] void setBackground(const QBrush &)
extern "C" Q_DECL_EXPORT
void C_ZN8QMdiArea13setBackgroundERK6QBrush(void *this_, QBrush* background) {
  ((QMdiArea*)this_)->setBackground(*background);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:106
// [4] QMdiArea::WindowOrder activationOrder()
extern "C" Q_DECL_EXPORT
QMdiArea::WindowOrder C_ZNK8QMdiArea15activationOrderEv(void *this_) {
  return (QMdiArea::WindowOrder)((QMdiArea*)this_)->activationOrder();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:107
// [-2] void setActivationOrder(QMdiArea::WindowOrder)
extern "C" Q_DECL_EXPORT
void C_ZN8QMdiArea18setActivationOrderENS_11WindowOrderE(void *this_, QMdiArea::WindowOrder order) {
  ((QMdiArea*)this_)->setActivationOrder(order);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:109
// [-2] void setOption(QMdiArea::AreaOption, bool)
extern "C" Q_DECL_EXPORT
void C_ZN8QMdiArea9setOptionENS_10AreaOptionEb(void *this_, QMdiArea::AreaOption option, bool on) {
  ((QMdiArea*)this_)->setOption(option, on);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:110
// [1] bool testOption(QMdiArea::AreaOption)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QMdiArea10testOptionENS_10AreaOptionE(void *this_, QMdiArea::AreaOption opton) {
  return (bool)((QMdiArea*)this_)->testOption(opton);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:112
// [-2] void setViewMode(QMdiArea::ViewMode)
extern "C" Q_DECL_EXPORT
void C_ZN8QMdiArea11setViewModeENS_8ViewModeE(void *this_, QMdiArea::ViewMode mode) {
  ((QMdiArea*)this_)->setViewMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:113
// [4] QMdiArea::ViewMode viewMode()
extern "C" Q_DECL_EXPORT
QMdiArea::ViewMode C_ZNK8QMdiArea8viewModeEv(void *this_) {
  return (QMdiArea::ViewMode)((QMdiArea*)this_)->viewMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:116
// [1] bool documentMode()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QMdiArea12documentModeEv(void *this_) {
  return (bool)((QMdiArea*)this_)->documentMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:117
// [-2] void setDocumentMode(bool)
extern "C" Q_DECL_EXPORT
void C_ZN8QMdiArea15setDocumentModeEb(void *this_, bool enabled) {
  ((QMdiArea*)this_)->setDocumentMode(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:119
// [-2] void setTabsClosable(bool)
extern "C" Q_DECL_EXPORT
void C_ZN8QMdiArea15setTabsClosableEb(void *this_, bool closable) {
  ((QMdiArea*)this_)->setTabsClosable(closable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:120
// [1] bool tabsClosable()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QMdiArea12tabsClosableEv(void *this_) {
  return (bool)((QMdiArea*)this_)->tabsClosable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:122
// [-2] void setTabsMovable(bool)
extern "C" Q_DECL_EXPORT
void C_ZN8QMdiArea14setTabsMovableEb(void *this_, bool movable) {
  ((QMdiArea*)this_)->setTabsMovable(movable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:123
// [1] bool tabsMovable()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QMdiArea11tabsMovableEv(void *this_) {
  return (bool)((QMdiArea*)this_)->tabsMovable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:126
// [-2] void setTabShape(QTabWidget::TabShape)
extern "C" Q_DECL_EXPORT
void C_ZN8QMdiArea11setTabShapeEN10QTabWidget8TabShapeE(void *this_, QTabWidget::TabShape shape) {
  ((QMdiArea*)this_)->setTabShape(shape);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:127
// [4] QTabWidget::TabShape tabShape()
extern "C" Q_DECL_EXPORT
QTabWidget::TabShape C_ZNK8QMdiArea8tabShapeEv(void *this_) {
  return (QTabWidget::TabShape)((QMdiArea*)this_)->tabShape();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:129
// [-2] void setTabPosition(QTabWidget::TabPosition)
extern "C" Q_DECL_EXPORT
void C_ZN8QMdiArea14setTabPositionEN10QTabWidget11TabPositionE(void *this_, QTabWidget::TabPosition position) {
  ((QMdiArea*)this_)->setTabPosition(position);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:130
// [4] QTabWidget::TabPosition tabPosition()
extern "C" Q_DECL_EXPORT
QTabWidget::TabPosition C_ZNK8QMdiArea11tabPositionEv(void *this_) {
  return (QTabWidget::TabPosition)((QMdiArea*)this_)->tabPosition();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:134
// [-2] void subWindowActivated(QMdiSubWindow *)
extern "C" Q_DECL_EXPORT
void C_ZN8QMdiArea18subWindowActivatedEP13QMdiSubWindow(void *this_, QMdiSubWindow * arg0) {
  ((QMdiArea*)this_)->subWindowActivated(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:137
// [-2] void setActiveSubWindow(QMdiSubWindow *)
extern "C" Q_DECL_EXPORT
void C_ZN8QMdiArea18setActiveSubWindowEP13QMdiSubWindow(void *this_, QMdiSubWindow * window) {
  ((QMdiArea*)this_)->setActiveSubWindow(window);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:138
// [-2] void tileSubWindows()
extern "C" Q_DECL_EXPORT
void C_ZN8QMdiArea14tileSubWindowsEv(void *this_) {
  ((QMdiArea*)this_)->tileSubWindows();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:139
// [-2] void cascadeSubWindows()
extern "C" Q_DECL_EXPORT
void C_ZN8QMdiArea17cascadeSubWindowsEv(void *this_) {
  ((QMdiArea*)this_)->cascadeSubWindows();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:140
// [-2] void closeActiveSubWindow()
extern "C" Q_DECL_EXPORT
void C_ZN8QMdiArea20closeActiveSubWindowEv(void *this_) {
  ((QMdiArea*)this_)->closeActiveSubWindow();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:141
// [-2] void closeAllSubWindows()
extern "C" Q_DECL_EXPORT
void C_ZN8QMdiArea18closeAllSubWindowsEv(void *this_) {
  ((QMdiArea*)this_)->closeAllSubWindows();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:142
// [-2] void activateNextSubWindow()
extern "C" Q_DECL_EXPORT
void C_ZN8QMdiArea21activateNextSubWindowEv(void *this_) {
  ((QMdiArea*)this_)->activateNextSubWindow();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:143
// [-2] void activatePreviousSubWindow()
extern "C" Q_DECL_EXPORT
void C_ZN8QMdiArea25activatePreviousSubWindowEv(void *this_) {
  ((QMdiArea*)this_)->activatePreviousSubWindow();
}

//  main block end
