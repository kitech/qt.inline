//  header block begin

// /usr/include/qt/QtWidgets/qlineedit.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qlineedit.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QLineEdit is pure virtual: false
// QLineEdit has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQLineEdit_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQLineEdit_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQLineEdit_t qt_meta_stringdata_MyQLineEdit = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQLineEdit"
  },
  "MyQLineEdit"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQLineEdit[] = {
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
class Q_DECL_EXPORT MyQLineEdit : public QLineEdit {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QLineEdit::staticMetaObject,
  qt_meta_stringdata_MyQLineEdit.data,
  qt_meta_data_MyQLineEdit,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQLineEdit.stringdata0))
      return static_cast<void*>(this);
  return QLineEdit::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QLineEdit::qt_metacall(_c, _id, _a);
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
  virtual ~MyQLineEdit() {}
// void QLineEdit(QWidget *)
MyQLineEdit(QWidget * parent) : QLineEdit(parent) {}
// void QLineEdit(const QString &, QWidget *)
MyQLineEdit(const QString & arg0, QWidget * parent) : QLineEdit(arg0, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void mousePressEvent(QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mousePressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QLineEdit::mousePressEvent(arg0);
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
    QLineEdit::mouseMoveEvent(arg0);
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
    QLineEdit::mouseReleaseEvent(arg0);
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
    QLineEdit::mouseDoubleClickEvent(arg0);
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
    QLineEdit::keyPressEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void focusInEvent(QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusInEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QLineEdit::focusInEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void focusOutEvent(QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusOutEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QLineEdit::focusOutEvent(arg0);
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
    QLineEdit::paintEvent(arg0);
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
    QLineEdit::dragEnterEvent(arg0);
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
    QLineEdit::dragMoveEvent(e);
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
    QLineEdit::dragLeaveEvent(e);
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
    QLineEdit::dropEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void changeEvent(QEvent *)
  virtual void changeEvent(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"changeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QLineEdit::changeEvent(arg0);
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
    QLineEdit::contextMenuEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void inputMethodEvent(QInputMethodEvent *)
  virtual void inputMethodEvent(QInputMethodEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"inputMethodEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QLineEdit::inputMethodEvent(arg0);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QLineEdit_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQLineEdit* qo = (MyQLineEdit*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:211
// [-2] void mousePressEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QLineEdit*)this_)->QLineEdit::mousePressEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:212
// [-2] void mouseMoveEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QLineEdit*)this_)->QLineEdit::mouseMoveEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:213
// [-2] void mouseReleaseEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QLineEdit*)this_)->QLineEdit::mouseReleaseEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:214
// [-2] void mouseDoubleClickEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit21mouseDoubleClickEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QLineEdit*)this_)->QLineEdit::mouseDoubleClickEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:215
// [-2] void keyPressEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * arg0) {
  ((QLineEdit*)this_)->QLineEdit::keyPressEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:216
// [-2] void focusInEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit12focusInEventEP11QFocusEvent(void *this_, QFocusEvent * arg0) {
  ((QLineEdit*)this_)->QLineEdit::focusInEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:217
// [-2] void focusOutEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit13focusOutEventEP11QFocusEvent(void *this_, QFocusEvent * arg0) {
  ((QLineEdit*)this_)->QLineEdit::focusOutEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:218
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit10paintEventEP11QPaintEvent(void *this_, QPaintEvent * arg0) {
  ((QLineEdit*)this_)->QLineEdit::paintEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:220
// [-2] void dragEnterEvent(QDragEnterEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit14dragEnterEventEP15QDragEnterEvent(void *this_, QDragEnterEvent * arg0) {
  ((QLineEdit*)this_)->QLineEdit::dragEnterEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:221
// [-2] void dragMoveEvent(QDragMoveEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit13dragMoveEventEP14QDragMoveEvent(void *this_, QDragMoveEvent * e) {
  ((QLineEdit*)this_)->QLineEdit::dragMoveEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:222
// [-2] void dragLeaveEvent(QDragLeaveEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit14dragLeaveEventEP15QDragLeaveEvent(void *this_, QDragLeaveEvent * e) {
  ((QLineEdit*)this_)->QLineEdit::dragLeaveEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:223
// [-2] void dropEvent(QDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit9dropEventEP10QDropEvent(void *this_, QDropEvent * arg0) {
  ((QLineEdit*)this_)->QLineEdit::dropEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:225
// [-2] void changeEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit11changeEventEP6QEvent(void *this_, QEvent * arg0) {
  ((QLineEdit*)this_)->QLineEdit::changeEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:227
// [-2] void contextMenuEvent(QContextMenuEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit16contextMenuEventEP17QContextMenuEvent(void *this_, QContextMenuEvent * arg0) {
  ((QLineEdit*)this_)->QLineEdit::contextMenuEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:230
// [-2] void inputMethodEvent(QInputMethodEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit16inputMethodEventEP17QInputMethodEvent(void *this_, QInputMethodEvent * arg0) {
  ((QLineEdit*)this_)->QLineEdit::inputMethodEvent(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:66
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QLineEdit10metaObjectEv(void *this_) {
  return (void*)((QLineEdit*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:66
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QLineEdit11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QLineEdit*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:66
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN9QLineEdit11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QLineEdit*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:66
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QLineEdit2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QLineEdit::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:66
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QLineEdit6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QLineEdit::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:94
// [-2] void QLineEdit(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QLineEditC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQLineEdit*)(0);
  return  new MyQLineEdit(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:95
// [-2] void QLineEdit(const QString &, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QLineEditC2ERK7QStringP7QWidget(QString* arg0, QWidget * parent) {
  auto _nilp = (MyQLineEdit*)(0);
  return  new MyQLineEdit(*arg0, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:96
// [-2] void ~QLineEdit()
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEditD2Ev(void *this_) {
  delete (QLineEdit*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:98
// [8] QString text()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QLineEdit4textEv(void *this_) {
  auto rv = ((QLineEdit*)this_)->text();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:100
// [8] QString displayText()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QLineEdit11displayTextEv(void *this_) {
  auto rv = ((QLineEdit*)this_)->displayText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:102
// [8] QString placeholderText()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QLineEdit15placeholderTextEv(void *this_) {
  auto rv = ((QLineEdit*)this_)->placeholderText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:103
// [-2] void setPlaceholderText(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit18setPlaceholderTextERK7QString(void *this_, QString* arg0) {
  ((QLineEdit*)this_)->setPlaceholderText(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:105
// [4] int maxLength()
extern "C" Q_DECL_EXPORT
int C_ZNK9QLineEdit9maxLengthEv(void *this_) {
  return (int)((QLineEdit*)this_)->maxLength();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:106
// [-2] void setMaxLength(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit12setMaxLengthEi(void *this_, int arg0) {
  ((QLineEdit*)this_)->setMaxLength(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:108
// [-2] void setFrame(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit8setFrameEb(void *this_, bool arg0) {
  ((QLineEdit*)this_)->setFrame(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:109
// [1] bool hasFrame()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QLineEdit8hasFrameEv(void *this_) {
  return (bool)((QLineEdit*)this_)->hasFrame();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:111
// [-2] void setClearButtonEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit21setClearButtonEnabledEb(void *this_, bool enable) {
  ((QLineEdit*)this_)->setClearButtonEnabled(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:112
// [1] bool isClearButtonEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QLineEdit20isClearButtonEnabledEv(void *this_) {
  return (bool)((QLineEdit*)this_)->isClearButtonEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:116
// [4] QLineEdit::EchoMode echoMode()
extern "C" Q_DECL_EXPORT
QLineEdit::EchoMode C_ZNK9QLineEdit8echoModeEv(void *this_) {
  return (QLineEdit::EchoMode)((QLineEdit*)this_)->echoMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:117
// [-2] void setEchoMode(QLineEdit::EchoMode)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit11setEchoModeENS_8EchoModeE(void *this_, QLineEdit::EchoMode arg0) {
  ((QLineEdit*)this_)->setEchoMode(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:119
// [1] bool isReadOnly()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QLineEdit10isReadOnlyEv(void *this_) {
  return (bool)((QLineEdit*)this_)->isReadOnly();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:120
// [-2] void setReadOnly(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit11setReadOnlyEb(void *this_, bool arg0) {
  ((QLineEdit*)this_)->setReadOnly(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:123
// [-2] void setValidator(const QValidator *)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit12setValidatorEPK10QValidator(void *this_, const QValidator * arg0) {
  ((QLineEdit*)this_)->setValidator(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:124
// [8] const QValidator * validator()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QLineEdit9validatorEv(void *this_) {
  return (void*)((QLineEdit*)this_)->validator();
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qlineedit.h:128
// [-2] void setCompleter(QCompleter *)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit12setCompleterEP10QCompleter(void *this_, QCompleter * completer) {
  ((QLineEdit*)this_)->setCompleter(completer);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qlineedit.h:129
// [8] QCompleter * completer()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK9QLineEdit9completerEv(void *this_) {
  return (void*)((QLineEdit*)this_)->completer();
}
#endif // QT_VERSION >= 0x040200

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:132
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QLineEdit8sizeHintEv(void *this_) {
  auto rv = ((QLineEdit*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:133
// [8] QSize minimumSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QLineEdit15minimumSizeHintEv(void *this_) {
  auto rv = ((QLineEdit*)this_)->minimumSizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:135
// [4] int cursorPosition()
extern "C" Q_DECL_EXPORT
int C_ZNK9QLineEdit14cursorPositionEv(void *this_) {
  return (int)((QLineEdit*)this_)->cursorPosition();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:136
// [-2] void setCursorPosition(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit17setCursorPositionEi(void *this_, int arg0) {
  ((QLineEdit*)this_)->setCursorPosition(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:137
// [4] int cursorPositionAt(const QPoint &)
extern "C" Q_DECL_EXPORT
int C_ZN9QLineEdit16cursorPositionAtERK6QPoint(void *this_, QPoint* pos) {
  return (int)((QLineEdit*)this_)->cursorPositionAt(*pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:139
// [-2] void setAlignment(Qt::Alignment)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QFlags<Qt::AlignmentFlag> flag) {
  ((QLineEdit*)this_)->setAlignment(flag);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:140
// [4] Qt::Alignment alignment()
extern "C" Q_DECL_EXPORT
Qt::Alignment C_ZNK9QLineEdit9alignmentEv(void *this_) {
  return (Qt::Alignment)((QLineEdit*)this_)->alignment();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:142
// [-2] void cursorForward(bool, int)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit13cursorForwardEbi(void *this_, bool mark, int steps) {
  ((QLineEdit*)this_)->cursorForward(mark, steps);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:143
// [-2] void cursorBackward(bool, int)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit14cursorBackwardEbi(void *this_, bool mark, int steps) {
  ((QLineEdit*)this_)->cursorBackward(mark, steps);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:144
// [-2] void cursorWordForward(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit17cursorWordForwardEb(void *this_, bool mark) {
  ((QLineEdit*)this_)->cursorWordForward(mark);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:145
// [-2] void cursorWordBackward(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit18cursorWordBackwardEb(void *this_, bool mark) {
  ((QLineEdit*)this_)->cursorWordBackward(mark);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:146
// [-2] void backspace()
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit9backspaceEv(void *this_) {
  ((QLineEdit*)this_)->backspace();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:147
// [-2] void del()
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit3delEv(void *this_) {
  ((QLineEdit*)this_)->del();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:148
// [-2] void home(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit4homeEb(void *this_, bool mark) {
  ((QLineEdit*)this_)->home(mark);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:149
// [-2] void end(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit3endEb(void *this_, bool mark) {
  ((QLineEdit*)this_)->end(mark);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:151
// [1] bool isModified()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QLineEdit10isModifiedEv(void *this_) {
  return (bool)((QLineEdit*)this_)->isModified();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:152
// [-2] void setModified(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit11setModifiedEb(void *this_, bool arg0) {
  ((QLineEdit*)this_)->setModified(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:154
// [-2] void setSelection(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit12setSelectionEii(void *this_, int arg0, int arg1) {
  ((QLineEdit*)this_)->setSelection(arg0, arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:155
// [1] bool hasSelectedText()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QLineEdit15hasSelectedTextEv(void *this_) {
  return (bool)((QLineEdit*)this_)->hasSelectedText();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:156
// [8] QString selectedText()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QLineEdit12selectedTextEv(void *this_) {
  auto rv = ((QLineEdit*)this_)->selectedText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:157
// [4] int selectionStart()
extern "C" Q_DECL_EXPORT
int C_ZNK9QLineEdit14selectionStartEv(void *this_) {
  return (int)((QLineEdit*)this_)->selectionStart();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:159
// [1] bool isUndoAvailable()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QLineEdit15isUndoAvailableEv(void *this_) {
  return (bool)((QLineEdit*)this_)->isUndoAvailable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:160
// [1] bool isRedoAvailable()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QLineEdit15isRedoAvailableEv(void *this_) {
  return (bool)((QLineEdit*)this_)->isRedoAvailable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:162
// [-2] void setDragEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit14setDragEnabledEb(void *this_, bool b) {
  ((QLineEdit*)this_)->setDragEnabled(b);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:163
// [1] bool dragEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QLineEdit11dragEnabledEv(void *this_) {
  return (bool)((QLineEdit*)this_)->dragEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:165
// [-2] void setCursorMoveStyle(Qt::CursorMoveStyle)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit18setCursorMoveStyleEN2Qt15CursorMoveStyleE(void *this_, Qt::CursorMoveStyle style) {
  ((QLineEdit*)this_)->setCursorMoveStyle(style);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:166
// [4] Qt::CursorMoveStyle cursorMoveStyle()
extern "C" Q_DECL_EXPORT
Qt::CursorMoveStyle C_ZNK9QLineEdit15cursorMoveStyleEv(void *this_) {
  return (Qt::CursorMoveStyle)((QLineEdit*)this_)->cursorMoveStyle();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:168
// [8] QString inputMask()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QLineEdit9inputMaskEv(void *this_) {
  auto rv = ((QLineEdit*)this_)->inputMask();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:169
// [-2] void setInputMask(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit12setInputMaskERK7QString(void *this_, QString* inputMask) {
  ((QLineEdit*)this_)->setInputMask(*inputMask);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:170
// [1] bool hasAcceptableInput()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QLineEdit18hasAcceptableInputEv(void *this_) {
  return (bool)((QLineEdit*)this_)->hasAcceptableInput();
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qlineedit.h:172
// [-2] void setTextMargins(int, int, int, int)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit14setTextMarginsEiiii(void *this_, int left, int top, int right, int bottom) {
  ((QLineEdit*)this_)->setTextMargins(left, top, right, bottom);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtWidgets/qlineedit.h:173
// [-2] void setTextMargins(const QMargins &)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit14setTextMarginsERK8QMargins(void *this_, QMargins* margins) {
  ((QLineEdit*)this_)->setTextMargins(*margins);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qlineedit.h:174
// [-2] void getTextMargins(int *, int *, int *, int *)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZNK9QLineEdit14getTextMarginsEPiS0_S0_S0_(void *this_, int * left, int * top, int * right, int * bottom) {
  ((QLineEdit*)this_)->getTextMargins(left, top, right, bottom);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtWidgets/qlineedit.h:175
// [16] QMargins textMargins()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void* C_ZNK9QLineEdit11textMarginsEv(void *this_) {
  auto rv = ((QLineEdit*)this_)->textMargins();
return new QMargins(rv);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:179
// [-2] void addAction(QAction *, QLineEdit::ActionPosition)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit9addActionEP7QActionNS_14ActionPositionE(void *this_, QAction * action, QLineEdit::ActionPosition position) {
  ((QLineEdit*)this_)->addAction(action, position);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:180
// [8] QAction * addAction(const QIcon &, QLineEdit::ActionPosition)
extern "C" Q_DECL_EXPORT
void* C_ZN9QLineEdit9addActionERK5QIconNS_14ActionPositionE(void *this_, QIcon* icon, QLineEdit::ActionPosition position) {
  return (void*)((QLineEdit*)this_)->addAction(*icon, position);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:184
// [-2] void setText(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit7setTextERK7QString(void *this_, QString* arg0) {
  ((QLineEdit*)this_)->setText(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:185
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit5clearEv(void *this_) {
  ((QLineEdit*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:186
// [-2] void selectAll()
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit9selectAllEv(void *this_) {
  ((QLineEdit*)this_)->selectAll();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:187
// [-2] void undo()
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit4undoEv(void *this_) {
  ((QLineEdit*)this_)->undo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:188
// [-2] void redo()
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit4redoEv(void *this_) {
  ((QLineEdit*)this_)->redo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:190
// [-2] void cut()
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit3cutEv(void *this_) {
  ((QLineEdit*)this_)->cut();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:191
// [-2] void copy()
extern "C" Q_DECL_EXPORT
void C_ZNK9QLineEdit4copyEv(void *this_) {
  ((QLineEdit*)this_)->copy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:192
// [-2] void paste()
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit5pasteEv(void *this_) {
  ((QLineEdit*)this_)->paste();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:196
// [-2] void deselect()
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit8deselectEv(void *this_) {
  ((QLineEdit*)this_)->deselect();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:197
// [-2] void insert(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit6insertERK7QString(void *this_, QString* arg0) {
  ((QLineEdit*)this_)->insert(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:199
// [8] QMenu * createStandardContextMenu()
extern "C" Q_DECL_EXPORT
void* C_ZN9QLineEdit25createStandardContextMenuEv(void *this_) {
  return (void*)((QLineEdit*)this_)->createStandardContextMenu();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:203
// [-2] void textChanged(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit11textChangedERK7QString(void *this_, QString* arg0) {
  ((QLineEdit*)this_)->textChanged(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:204
// [-2] void textEdited(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit10textEditedERK7QString(void *this_, QString* arg0) {
  ((QLineEdit*)this_)->textEdited(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:205
// [-2] void cursorPositionChanged(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit21cursorPositionChangedEii(void *this_, int arg0, int arg1) {
  ((QLineEdit*)this_)->cursorPositionChanged(arg0, arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:206
// [-2] void returnPressed()
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit13returnPressedEv(void *this_) {
  ((QLineEdit*)this_)->returnPressed();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:207
// [-2] void editingFinished()
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit15editingFinishedEv(void *this_) {
  ((QLineEdit*)this_)->editingFinished();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:208
// [-2] void selectionChanged()
extern "C" Q_DECL_EXPORT
void C_ZN9QLineEdit16selectionChangedEv(void *this_) {
  ((QLineEdit*)this_)->selectionChanged();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:233
// [16] QVariant inputMethodQuery(Qt::InputMethodQuery)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QLineEdit16inputMethodQueryEN2Qt16InputMethodQueryE(void *this_, Qt::InputMethodQuery arg0) {
  auto rv = ((QLineEdit*)this_)->inputMethodQuery(arg0);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:234
// [16] QVariant inputMethodQuery(Qt::InputMethodQuery, QVariant)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QLineEdit16inputMethodQueryEN2Qt16InputMethodQueryE8QVariant(void *this_, Qt::InputMethodQuery property, QVariant* argument) {
  auto rv = ((QLineEdit*)this_)->inputMethodQuery(property, *argument);
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:235
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN9QLineEdit5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QLineEdit*)this_)->event(arg0);
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
