//  header block begin
// /usr/include/qt/QtWidgets/qabstractscrollarea.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractscrollarea.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QAbstractScrollArea is pure virtual: true
// QAbstractScrollArea has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQAbstractScrollArea_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAbstractScrollArea_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAbstractScrollArea_t qt_meta_stringdata_MyQAbstractScrollArea = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQAbstractScrollArea"
  },
  "MyQAbstractScrollArea"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAbstractScrollArea[] = {
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
class Q_DECL_EXPORT MyQAbstractScrollArea : public QAbstractScrollArea {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QAbstractScrollArea::staticMetaObject,
  qt_meta_stringdata_MyQAbstractScrollArea.data,
  qt_meta_data_MyQAbstractScrollArea,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQAbstractScrollArea.stringdata0))
      return static_cast<void*>(this);
  return QAbstractScrollArea::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
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
  virtual ~MyQAbstractScrollArea() {}
// void QAbstractScrollArea(QWidget *)
MyQAbstractScrollArea(QWidget * parent) : QAbstractScrollArea(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool eventFilter(QObject *, QEvent *)
  virtual bool eventFilter(QObject * arg0, QEvent * arg1)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"eventFilter", &handled, 2, (uint64_t)arg0, (uint64_t)arg1, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QAbstractScrollArea::eventFilter(arg0, arg1);
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
    return QAbstractScrollArea::event(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool viewportEvent(QEvent *)
  virtual bool viewportEvent(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"viewportEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QAbstractScrollArea::viewportEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractScrollArea::resizeEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractScrollArea::paintEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mousePressEvent(QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mousePressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractScrollArea::mousePressEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseReleaseEvent(QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractScrollArea::mouseReleaseEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseDoubleClickEvent(QMouseEvent *)
  virtual void mouseDoubleClickEvent(QMouseEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseDoubleClickEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractScrollArea::mouseDoubleClickEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseMoveEvent(QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractScrollArea::mouseMoveEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void wheelEvent(QWheelEvent *)
  virtual void wheelEvent(QWheelEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"wheelEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractScrollArea::wheelEvent(arg0);
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
    QAbstractScrollArea::contextMenuEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void dragEnterEvent(QDragEnterEvent *)
  virtual void dragEnterEvent(QDragEnterEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dragEnterEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractScrollArea::dragEnterEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void dragMoveEvent(QDragMoveEvent *)
  virtual void dragMoveEvent(QDragMoveEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dragMoveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractScrollArea::dragMoveEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void dragLeaveEvent(QDragLeaveEvent *)
  virtual void dragLeaveEvent(QDragLeaveEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dragLeaveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractScrollArea::dragLeaveEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void dropEvent(QDropEvent *)
  virtual void dropEvent(QDropEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dropEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractScrollArea::dropEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void keyPressEvent(QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyPressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractScrollArea::keyPressEvent(arg0);
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
    QAbstractScrollArea::scrollContentsBy(dx, dy);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] QSize viewportSizeHint()
  virtual QSize viewportSizeHint() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"viewportSizeHint", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QSize){};}
    auto prv = (QSize*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QSize
    } else {
    return QAbstractScrollArea::viewportSizeHint();
  }
  }

};

extern "C" Q_DECL_EXPORT
void C_QAbstractScrollArea_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQAbstractScrollArea* qo = (MyQAbstractScrollArea*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:109
// [1] bool eventFilter(QObject *, QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN19QAbstractScrollArea11eventFilterEP7QObjectP6QEvent(void *this_, QObject * arg0, QEvent * arg1) {
  return (bool)((QAbstractScrollArea*)this_)->QAbstractScrollArea::eventFilter(arg0, arg1);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:110
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN19QAbstractScrollArea5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QAbstractScrollArea*)this_)->QAbstractScrollArea::event(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:111
// [1] bool viewportEvent(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN19QAbstractScrollArea13viewportEventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QAbstractScrollArea*)this_)->QAbstractScrollArea::viewportEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:113
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * arg0) {
  ((QAbstractScrollArea*)this_)->QAbstractScrollArea::resizeEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:114
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea10paintEventEP11QPaintEvent(void *this_, QPaintEvent * arg0) {
  ((QAbstractScrollArea*)this_)->QAbstractScrollArea::paintEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:115
// [-2] void mousePressEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QAbstractScrollArea*)this_)->QAbstractScrollArea::mousePressEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:116
// [-2] void mouseReleaseEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QAbstractScrollArea*)this_)->QAbstractScrollArea::mouseReleaseEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:117
// [-2] void mouseDoubleClickEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea21mouseDoubleClickEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QAbstractScrollArea*)this_)->QAbstractScrollArea::mouseDoubleClickEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:118
// [-2] void mouseMoveEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QAbstractScrollArea*)this_)->QAbstractScrollArea::mouseMoveEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:120
// [-2] void wheelEvent(QWheelEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea10wheelEventEP11QWheelEvent(void *this_, QWheelEvent * arg0) {
  ((QAbstractScrollArea*)this_)->QAbstractScrollArea::wheelEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:123
// [-2] void contextMenuEvent(QContextMenuEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea16contextMenuEventEP17QContextMenuEvent(void *this_, QContextMenuEvent * arg0) {
  ((QAbstractScrollArea*)this_)->QAbstractScrollArea::contextMenuEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:126
// [-2] void dragEnterEvent(QDragEnterEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea14dragEnterEventEP15QDragEnterEvent(void *this_, QDragEnterEvent * arg0) {
  ((QAbstractScrollArea*)this_)->QAbstractScrollArea::dragEnterEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:127
// [-2] void dragMoveEvent(QDragMoveEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea13dragMoveEventEP14QDragMoveEvent(void *this_, QDragMoveEvent * arg0) {
  ((QAbstractScrollArea*)this_)->QAbstractScrollArea::dragMoveEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:128
// [-2] void dragLeaveEvent(QDragLeaveEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea14dragLeaveEventEP15QDragLeaveEvent(void *this_, QDragLeaveEvent * arg0) {
  ((QAbstractScrollArea*)this_)->QAbstractScrollArea::dragLeaveEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:129
// [-2] void dropEvent(QDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea9dropEventEP10QDropEvent(void *this_, QDropEvent * arg0) {
  ((QAbstractScrollArea*)this_)->QAbstractScrollArea::dropEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:132
// [-2] void keyPressEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * arg0) {
  ((QAbstractScrollArea*)this_)->QAbstractScrollArea::keyPressEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:134
// [-2] void scrollContentsBy(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea16scrollContentsByEii(void *this_, int dx, int dy) {
  ((QAbstractScrollArea*)this_)->QAbstractScrollArea::scrollContentsBy(dx, dy);
}

// Protected virtual Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:136
// [8] QSize viewportSizeHint()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractScrollArea16viewportSizeHintEv(void *this_) {
  auto rv = ((QAbstractScrollArea*)this_)->QAbstractScrollArea::viewportSizeHint();
return new QSize(rv);
}
#endif // QT_VERSION >= 0x050200

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractScrollArea10metaObjectEv(void *this_) {
  return (void*)((QAbstractScrollArea*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:57
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QAbstractScrollArea11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAbstractScrollArea*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:57
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN19QAbstractScrollArea11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAbstractScrollArea*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:57
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QAbstractScrollArea2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractScrollArea::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:57
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QAbstractScrollArea6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractScrollArea::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:64
// [-2] void QAbstractScrollArea(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QAbstractScrollAreaC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQAbstractScrollArea*)(0);
  return  new MyQAbstractScrollArea(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:65
// [-2] void ~QAbstractScrollArea()
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollAreaD2Ev(void *this_) {
  delete (QAbstractScrollArea*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:74
// [4] Qt::ScrollBarPolicy verticalScrollBarPolicy()
extern "C" Q_DECL_EXPORT
Qt::ScrollBarPolicy C_ZNK19QAbstractScrollArea23verticalScrollBarPolicyEv(void *this_) {
  return (Qt::ScrollBarPolicy)((QAbstractScrollArea*)this_)->verticalScrollBarPolicy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:75
// [-2] void setVerticalScrollBarPolicy(Qt::ScrollBarPolicy)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea26setVerticalScrollBarPolicyEN2Qt15ScrollBarPolicyE(void *this_, Qt::ScrollBarPolicy arg0) {
  ((QAbstractScrollArea*)this_)->setVerticalScrollBarPolicy(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:76
// [8] QScrollBar * verticalScrollBar()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractScrollArea17verticalScrollBarEv(void *this_) {
  return (void*)((QAbstractScrollArea*)this_)->verticalScrollBar();
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:77
// [-2] void setVerticalScrollBar(QScrollBar *)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea20setVerticalScrollBarEP10QScrollBar(void *this_, QScrollBar * scrollbar) {
  ((QAbstractScrollArea*)this_)->setVerticalScrollBar(scrollbar);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:79
// [4] Qt::ScrollBarPolicy horizontalScrollBarPolicy()
extern "C" Q_DECL_EXPORT
Qt::ScrollBarPolicy C_ZNK19QAbstractScrollArea25horizontalScrollBarPolicyEv(void *this_) {
  return (Qt::ScrollBarPolicy)((QAbstractScrollArea*)this_)->horizontalScrollBarPolicy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:80
// [-2] void setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea28setHorizontalScrollBarPolicyEN2Qt15ScrollBarPolicyE(void *this_, Qt::ScrollBarPolicy arg0) {
  ((QAbstractScrollArea*)this_)->setHorizontalScrollBarPolicy(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:81
// [8] QScrollBar * horizontalScrollBar()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractScrollArea19horizontalScrollBarEv(void *this_) {
  return (void*)((QAbstractScrollArea*)this_)->horizontalScrollBar();
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:82
// [-2] void setHorizontalScrollBar(QScrollBar *)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea22setHorizontalScrollBarEP10QScrollBar(void *this_, QScrollBar * scrollbar) {
  ((QAbstractScrollArea*)this_)->setHorizontalScrollBar(scrollbar);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:84
// [8] QWidget * cornerWidget()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractScrollArea12cornerWidgetEv(void *this_) {
  return (void*)((QAbstractScrollArea*)this_)->cornerWidget();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:85
// [-2] void setCornerWidget(QWidget *)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea15setCornerWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QAbstractScrollArea*)this_)->setCornerWidget(widget);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:87
// [-2] void addScrollBarWidget(QWidget *, Qt::Alignment)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea18addScrollBarWidgetEP7QWidget6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QWidget * widget, QFlags<Qt::AlignmentFlag> alignment) {
  ((QAbstractScrollArea*)this_)->addScrollBarWidget(widget, alignment);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:88
// [-2] QWidgetList scrollBarWidgets(Qt::Alignment)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
QWidgetList* C_ZN19QAbstractScrollArea16scrollBarWidgetsE6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QFlags<Qt::AlignmentFlag> alignment) {
  auto rv = ((QAbstractScrollArea*)this_)->scrollBarWidgets(alignment);
return new QWidgetList(rv);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:90
// [8] QWidget * viewport()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractScrollArea8viewportEv(void *this_) {
  return (void*)((QAbstractScrollArea*)this_)->viewport();
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:91
// [-2] void setViewport(QWidget *)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea11setViewportEP7QWidget(void *this_, QWidget * widget) {
  ((QAbstractScrollArea*)this_)->setViewport(widget);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:92
// [8] QSize maximumViewportSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractScrollArea19maximumViewportSizeEv(void *this_) {
  auto rv = ((QAbstractScrollArea*)this_)->maximumViewportSize();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:94
// [8] QSize minimumSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractScrollArea15minimumSizeHintEv(void *this_) {
  auto rv = ((QAbstractScrollArea*)this_)->minimumSizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:96
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractScrollArea8sizeHintEv(void *this_) {
  auto rv = ((QAbstractScrollArea*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:98
// [-2] void setupViewport(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea13setupViewportEP7QWidget(void *this_, QWidget * viewport) {
  ((QAbstractScrollArea*)this_)->setupViewport(viewport);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:100
// [4] QAbstractScrollArea::SizeAdjustPolicy sizeAdjustPolicy()
extern "C" Q_DECL_EXPORT
QAbstractScrollArea::SizeAdjustPolicy C_ZNK19QAbstractScrollArea16sizeAdjustPolicyEv(void *this_) {
  return (QAbstractScrollArea::SizeAdjustPolicy)((QAbstractScrollArea*)this_)->sizeAdjustPolicy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:101
// [-2] void setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea19setSizeAdjustPolicyENS_16SizeAdjustPolicyE(void *this_, QAbstractScrollArea::SizeAdjustPolicy policy) {
  ((QAbstractScrollArea*)this_)->setSizeAdjustPolicy(policy);
}

//  main block end
